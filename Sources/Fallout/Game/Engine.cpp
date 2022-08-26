#include <Fallout/Game/Engine.hpp>

Fallout::Game::Engine::Engine(Fallout::Game::Settings* settings) :
	_Initializer(),
	_Settings(settings),
	_Window(_Settings->Size(), _Settings->Title()),
	_Render(&_Window),
	_Painter(&_Render),
	_Application(),
	_ImageLoader(&_Render, Ext::Graphics::Color(255, 255, 255)),
	_PathManager(_Settings->Root()),
	_ImageManager(&_PathManager, &_ImageLoader),
	_GameImageManager(&_ImageManager),
	_FontLoader(),
	_FontManager(&_PathManager, &_FontLoader),
	_TextLoader(&_ImageLoader, _FontManager.Get("Fonts/", "FalloutRegular.ttf"), Ext::Graphics::Color(0, 0, 0)),
	_TextManager(&_TextLoader),
	_WidgetManager(&_Painter, &_Window,&_TextManager),
	_UiMainMenu(&_WidgetManager, &_Application, &_GameImageManager),
	_UiEditor(&_WidgetManager, &_Application)
{
	_Application.Attach(Fallout::UI::Screens::MainMenu, _UiMainMenu.Screen());
	_Application.Attach(Fallout::UI::Screens::Editor, _UiEditor.Screen());

	_Application.Activate(Fallout::UI::Screens::MainMenu);
}

void Fallout::Game::Engine::Run()
{
	Ext::Events::Event report = { 0 };

	while (_Eventer.GetEvent(report))
	{
		_Painter.Clear();

		if (report.Type == Ext::Events::IsQuit)
			_Eventer.StopEvent();

		_Application.Handler(report);
		_Application.Draw();

		_Painter.Present();
	}
}
#include <Fallout/Game/Engine.hpp>

Fallout::Game::Engine::Engine(Fallout::Game::Settings* settings) :
	_Settings(settings),
	_Window(_Settings->Size(), _Settings->Title()),
	_Render(&_Window),
	_Painter(&_Render),
	_WidgetManager(&_Painter, &_Window),
	_Application(),
	_MainMenu(&_WidgetManager, &_Application)
{
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
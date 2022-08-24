#include <Fallout/UI/MainMenu.hpp>

Fallout::UI::MainMenu::MainMenu(Ext::Managers::WidgetManager* widgetManager, Ext::Widgets::Application* application) :
	_WidgetManager(widgetManager),
	_Application(application)
{
	_Screen = _WidgetManager->NewScreen();
	_Window = _WidgetManager->NewWindow(_Screen->Area().Pos(), _Screen->Area().Size());
	_Screen->Attach(_Window);

	_NewGame = _WidgetManager->NewButton(Ext::Graphics::Point2u(5, 5), Ext::Graphics::Point2u(145, 35));
	_Window->Attach(_NewGame);
}

Ext::Widgets::Screen* Fallout::UI::MainMenu::Screen()
{
	return _Screen;
}
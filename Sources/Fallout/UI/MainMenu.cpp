#include <Fallout/UI/MainMenu.hpp>

Fallout::UI::MainMenu::MainMenu(Ext::Managers::WidgetManager* widgetManager, Ext::Widgets::Application* application) :
	_WidgetManager(widgetManager),
	_Application(application)
{
	_Screen = _WidgetManager->NewScreen();

	_Application->Activate(_Screen);
}
#include <Fallout/UI/Aggregator.hpp>

Fallout::UI::Aggregator::Aggregator(Ext::Managers::WidgetManager* widgetManager, Ext::Widgets::Application* application, Fallout::Managers::ImageManager* imageManager) :
	_WidgetManager(widgetManager),
	_Application(application),
	_ImageManager(imageManager),
	_UiMainMenu(_WidgetManager, _Application, _ImageManager),
	_UiEditor(_WidgetManager, _Application)
{
	_Application->Attach(Fallout::UI::Screens::MainMenu, _UiMainMenu.Screen());
	_Application->Attach(Fallout::UI::Screens::Editor, _UiEditor.Screen());

	_Application->Activate(Fallout::UI::Screens::MainMenu);
}
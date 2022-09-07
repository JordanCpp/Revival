#include <Fallout/UI/Aggregator.hpp>

Fallout::UI::Aggregator::Aggregator(
	Ext::Managers::WidgetManager* widgetManager, 
	Ext::Widgets::Application* application, 
	Fallout::Managers::ImageManager* imageManager,
	Fallout::Managers::LocalizationManager* localizationManager) :
	_WidgetManager(widgetManager),
	_Application(application),
	_ImageManager(imageManager),
	_LocalizationManager(localizationManager),
	_UiMainMenu(_WidgetManager, _Application, _ImageManager, _LocalizationManager),
	_UiEditor(_WidgetManager, _Application),
	_UiSettings(_WidgetManager)
{
	_Application->Attach(Fallout::UI::Screens::MainMenu, _UiMainMenu.Screen());
	_Application->Attach(Fallout::UI::Screens::Editor, _UiEditor.Screen());
	_Application->Attach(Fallout::UI::Screens::Settings, _UiSettings.Screen());

	_Application->Activate(Fallout::UI::Screens::MainMenu);
}
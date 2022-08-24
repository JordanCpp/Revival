#include <Fallout/UI/MainMenu.hpp>

Fallout::UI::MainMenu::MainMenu(Ext::Managers::WidgetManager* widgetManager, Ext::Widgets::Application* application, Fallout::Managers::ImageManager* imageManager) :
	_WidgetManager(widgetManager),
	_Application(application),
	_ImageManager(imageManager)
{
	_Screen = _WidgetManager->NewScreen();
	_Window = _WidgetManager->NewImageWindow(_Screen->Area().Pos(), _Screen->Area().Size());
	_Window->Body(_ImageManager->Get("MainMenu.jpg"));
	_Screen->Attach(_Window);

	_NewGame = _WidgetManager->NewButton(Ext::Graphics::Point2u(5, 5), Ext::Graphics::Point2u(145, 35));
	_Window->Attach(_NewGame);

	_Editor = _WidgetManager->NewButton(Ext::Graphics::Point2u(5, 45), Ext::Graphics::Point2u(145, 35));
	_Window->Attach(_Editor);

	_Exit = _WidgetManager->NewButton(Ext::Graphics::Point2u(5, 85), Ext::Graphics::Point2u(145, 35));
	_Window->Attach(_Exit);
}

Ext::Widgets::Screen* Fallout::UI::MainMenu::Screen()
{
	return _Screen;
}
#include <Fallout/UI/MainMenu.hpp>
#include <iostream>

Fallout::UI::MainMenu::MainMenu(Ext::Managers::WidgetManager* widgetManager, Ext::Widgets::Application* application, Fallout::Managers::ImageManager* imageManager) :
	_WidgetManager(widgetManager),
	_Application(application),
	_ImageManager(imageManager)
{
	_Screen = _WidgetManager->NewScreen();
	_Window = _WidgetManager->NewImageWindow(_Screen->Area().Pos(), _Screen->Area().Size());
	_Window->Body(_ImageManager->Interface("MainMenu.jpg"));
	_Screen->Attach(_Window);

	_NewGame = _WidgetManager->NewButton("New game", Ext::Graphics::Point2u(5, 5), Ext::Graphics::Point2u(145, 35));
	_NewGame->OnClick = std::bind(&MainMenu::NewGame, this, std::placeholders::_1);
	_Window->Attach(_NewGame);

	_Editor = _WidgetManager->NewButton("Editor", Ext::Graphics::Point2u(5, 45), Ext::Graphics::Point2u(145, 35));
	_Editor->OnClick = std::bind(&MainMenu::Editor, this, std::placeholders::_1);
	_Window->Attach(_Editor);

	_Exit = _WidgetManager->NewButton("Exit", Ext::Graphics::Point2u(5, 85), Ext::Graphics::Point2u(145, 35));
	_Exit->OnClick = std::bind(&MainMenu::Exit, this, std::placeholders::_1);
	_Window->Attach(_Exit);
}

Ext::Widgets::Screen* Fallout::UI::MainMenu::Screen()
{
	return _Screen;
}

void Fallout::UI::MainMenu::NewGame(const Ext::Graphics::Point2u& pos)
{
	std::cout << "NewGame" << '\n';
}

void Fallout::UI::MainMenu::Editor(const Ext::Graphics::Point2u& pos)
{
	std::cout << "Editor" << '\n';
}

void Fallout::UI::MainMenu::Exit(const Ext::Graphics::Point2u& pos)
{
	std::cout << "Exit" << '\n';
}
#include <Fallout/UI/Editor.hpp>

Fallout::UI::Editor::Editor(Ext::Managers::WidgetManager* widgetManager, Ext::Widgets::Application* application) :
	_WidgetManager(widgetManager),
	_Application(application)
{
	_Screen = _WidgetManager->NewScreen();
	_Window = _WidgetManager->NewWindow(_Screen->Area().Pos(), _Screen->Area().Size());
	_Screen->Attach(_Window);
}

Ext::Widgets::Screen* Fallout::UI::Editor::Screen()
{
	return _Screen;
}
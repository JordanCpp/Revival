#include <Fallout/UI/Editor.hpp>

Fallout::UI::Editor::Editor(Ext::Managers::WidgetManager* widgetManager, Ext::Widgets::Application* application) :
	_WidgetManager(widgetManager),
	_Application(application)
{
	_Screen = _WidgetManager->NewScreen();
	_Window = _WidgetManager->NewWindow(_Screen->Area().Pos(), _Screen->Area().Size());
	_Screen->Attach(_Window);

	_ScaleInc = _WidgetManager->NewButton("+", Ext::Graphics::Point2u(5, 5), Ext::Graphics::Point2u(35, 35));
	_Window->Attach(_ScaleInc);

	_ScaleDec = _WidgetManager->NewButton("-", Ext::Graphics::Point2u(45, 5), Ext::Graphics::Point2u(35, 35));
	_Window->Attach(_ScaleDec);
}

Ext::Widgets::Screen* Fallout::UI::Editor::Screen()
{
	return _Screen;
}
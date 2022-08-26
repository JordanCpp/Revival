#include <Fallout/UI/Settings.hpp>

Fallout::UI::Settings::Settings(Ext::Managers::WidgetManager* widgetManager) :
	_WidgetManager(widgetManager),
	_Screen(nullptr)
{
	_Screen = _WidgetManager->NewScreen();
	_Window = _WidgetManager->NewWindow(_Screen->Area().Pos(), _Screen->Area().Size());
	_Screen->Attach(_Window);
}

Ext::Widgets::Screen* Fallout::UI::Settings::Screen()
{
	return _Screen;
}
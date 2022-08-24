#include <Ext/Managers/WidgetManager.hpp>

Ext::Managers::WidgetManager::WidgetManager(Ext::Graphics::Painter* painter) :
	_Painter(painter)
{
}

Ext::Managers::WidgetManager::~WidgetManager()
{
	for (size_t i = 0; i < _Widgets.size(); i++)
	{
		delete _Widgets[i];
	}

	for (size_t i = 0; i < _Windows.size(); i++)
	{
		delete _Windows[i];
	}

	for (size_t i = 0; i < _Screens.size(); i++)
	{
		delete _Screens[i];
	}
}
#include "WidgetManager.hpp"
#include "WidgetManager.hpp"
#include "WidgetManager.hpp"
#include "WidgetManager.hpp"
#include <Ext/Managers/WidgetManager.hpp>

Ext::Managers::WidgetManager::WidgetManager(Ext::Graphics::Painter* painter, Ext::Graphics::Window* window) :
	_Painter(painter),
	_Window(window)
{
}

Ext::Managers::WidgetManager::~WidgetManager()
{
	for (size_t i = 0; i < _Widgets.size(); i++)
	{
		delete _Widgets[i];
	}
}

Ext::Widgets::Screen* Ext::Managers::WidgetManager::NewScreen()
{
	auto result = new Ext::Widgets::Screen(_Painter, _Window);

	_Widgets.push_back(result);

	return result;
}

Ext::Widgets::Button* Ext::Managers::WidgetManager::NewButton(const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size)
{
	auto result = new Ext::Widgets::Button(_Painter, pos, size);

	_Widgets.push_back(result);

	return result;
}

Ext::Widgets::Window* Ext::Managers::WidgetManager::NewWindow(const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size)
{
	auto result = new Ext::Widgets::Window(_Painter, pos, size);

	_Widgets.push_back(result);

	return result;
}

Ext::Widgets::ImageWindow* Ext::Managers::WidgetManager::NewImageWindow(const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size)
{
	auto result = new Ext::Widgets::ImageWindow(_Painter, pos, size);

	_Widgets.push_back(result);

	return result;
}
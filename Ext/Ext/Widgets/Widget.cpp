#include "Widget.hpp"
#include "Widget.hpp"
#include "Widget.hpp"
#include "Widget.hpp"
#include <Ext/Widgets/Widget.hpp>

Ext::Widgets::Widget::Widget(Ext::Graphics::Painter* painter, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size) :
	_State(Ext::Widgets::Widget::Normal),
	_Painter(painter),
	_Area(pos, size)
{
}

size_t Ext::Widgets::Widget::State()
{
	return _State;
}

void Ext::Widgets::Widget::State(size_t state)
{
	_State = state;
}

const Ext::Graphics::Rect2u& Ext::Widgets::Widget::Area()
{
	return _Area;
}

Ext::Graphics::Painter* Ext::Widgets::Widget::Painter()
{
	return _Painter;
}
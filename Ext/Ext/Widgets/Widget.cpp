#include "Widget.hpp"
#include "Widget.hpp"
#include <Ext/Widgets/Widget.hpp>

Ext::Widgets::Widget::Widget(Ext::Graphics::Painter* painter, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size) :
	_Painter(painter),
	_Area(pos, size)
{
}

const Ext::Graphics::Rect2u& Ext::Widgets::Widget::Area()
{
	return _Area;
}

Ext::Graphics::Painter* Ext::Widgets::Widget::Painter()
{
	return _Painter;
}
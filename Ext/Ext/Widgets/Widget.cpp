#include <Ext/Widgets/Widget.hpp>

Ext::Widgets::Widget::Widget(Ext::Graphics::Painter* painter, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size) :
	_Painter(painter),
	_Area(pos, size)
{
}
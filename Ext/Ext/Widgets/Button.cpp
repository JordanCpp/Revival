#include <Ext/Widgets/Button.hpp>

Ext::Widgets::Button::Button(Ext::Graphics::Painter* painter, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size) :
	Ext::Widgets::Widget(painter, pos, size)
{
}

void Ext::Widgets::Button::Attach(Ext::Widgets::Widget* widget)
{
	_Container.Attach(widget);
}

void Ext::Widgets::Button::Draw()
{
}

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
	if (State() == Ext::Widgets::Widget::Normal)
		Painter()->Draw(Area().Pos(), Area().Size(), Ext::Graphics::Color(127, 127, 127));
	else if (State() == Ext::Widgets::Widget::Hover)
		Painter()->Draw(Area().Pos(), Area().Size(), Ext::Graphics::Color(255, 0, 0));
	else 
		Painter()->Draw(Area().Pos(), Area().Size(), Ext::Graphics::Color(0, 162, 232));
}
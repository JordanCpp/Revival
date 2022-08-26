#include "Screen.hpp"
#include <Ext/Widgets/Screen.hpp>

Ext::Widgets::Screen::Screen(Ext::Graphics::Painter* painter, Ext::Graphics::Window* window) :
	Ext::Widgets::Widget(painter, Ext::Graphics::Point2u(0, 0), window->Size()),
	_Painter(painter),
	_Window(window)
{
}

Ext::Widgets::Widget* Ext::Widgets::Screen::Contains(const Ext::Graphics::Point2u& pos)
{
	auto p = (Ext::Widgets::Window*)_Container.Contains(pos);

	if (p)
	{
		Ext::Widgets::Widget* w = p->Contains(pos);

		if (w)
			return w;
	}

	return p;
}

void Ext::Widgets::Screen::Attach(Ext::Widgets::Window* window)
{
	_Container.Attach(window);
}

void Ext::Widgets::Screen::Draw()
{
	_Painter->Draw(Ext::Graphics::Point2u(0, 0), _Window->Size(), Ext::Graphics::Color(255, 255, 255));

	_Container.Draw();
}
#include <Ext/Widgets/Screen.hpp>

Ext::Widgets::Screen::Screen(Ext::Graphics::Painter* painter, Ext::Graphics::Window* window) :
	Ext::Widgets::Widget(painter, Ext::Graphics::Point2u(0, 0), window->Size()),
	_Painter(painter),
	_Window(window)
{
}

void Ext::Widgets::Screen::Attach(Ext::Widgets::Window* window)
{
	_Container.Attach(window);
}

void Ext::Widgets::Screen::Draw()
{
	_Painter->Draw(Ext::Graphics::Point2u(0, 0), _Window->Size(), Ext::Graphics::Color(195, 195, 195));

	_Container.Draw();
}
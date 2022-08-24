#include <Ext/Widgets/Window.hpp>

Ext::Widgets::Window::Window(Ext::Graphics::Painter* painter, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size) :
	Ext::Widgets::Widget(painter, pos, size)
{
}

void Ext::Widgets::Window::Attach(Ext::Widgets::Widget* widget)
{
	_Container.Attach(widget);
}

void Ext::Widgets::Window::Draw()
{
	auto widgets = _Container.Widgets();

	for (size_t i = 0; i < widgets.size(); i++)
	{
		widgets[i]->Draw();
	}
}
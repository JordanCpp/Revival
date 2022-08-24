#include "Container.hpp"
#include <Ext/Widgets/Container.hpp>

Ext::Widgets::Widget* Ext::Widgets::Container::Contains(const Ext::Graphics::Point2u& pos)
{
	for (size_t i = 0; i < _Widgets.size(); i++)
	{
		if (_Widgets[i]->Area().Contains(pos))
			return _Widgets[i];
	}

	return nullptr;
}

void Ext::Widgets::Container::Attach(Ext::Widgets::Widget* widget)
{
	_Widgets.push_back(widget);
}

std::vector<Ext::Widgets::Widget*>& Ext::Widgets::Container::Widgets()
{
	return _Widgets;
}

void Ext::Widgets::Container::Draw()
{
	for (size_t i = 0; i < _Widgets.size(); i++)
	{
		_Widgets[i]->Draw();
	}
}
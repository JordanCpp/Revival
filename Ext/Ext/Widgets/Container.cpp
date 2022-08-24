#include <Ext/Widgets/Container.hpp>

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
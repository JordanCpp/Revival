#include <Ext/Widgets/Container.hpp>

void Ext::Widgets::Container::Attach(Ext::Widgets::Widget* widget)
{
	_Widgets.push_back(widget);
}
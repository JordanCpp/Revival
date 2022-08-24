#include <Ext/Widgets/Screen.hpp>

void Ext::Widgets::Screen::Attach(Ext::Widgets::Window* window)
{
	_Windows.push_back(window);
}

void Ext::Widgets::Screen::Draw()
{
	for (size_t i = 0; i < _Windows.size(); i++)
	{
		_Windows[i]->Draw();
	}
}
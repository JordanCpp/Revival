#include <Ext/Widgets/Application.hpp>
#include <stdexcept>

void Ext::Widgets::Application::Activate(Ext::Widgets::Screen* screen)
{
	_Screen = screen;
}

void Ext::Widgets::Application::Draw()
{
	if (!_Screen)
		throw std::runtime_error("Current screen is nullptr!");

	_Screen->Draw();
}
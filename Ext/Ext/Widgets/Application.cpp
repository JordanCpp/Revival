#include "Application.hpp"
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

void Ext::Widgets::Application::Handler(const Ext::Events::Event& event)
{
	if (event.Type == Ext::Events::IsMouseDown)
	{
		if (_Current)
			_Current->State(Widget::Normal);
		
		_Current = _Screen->Contains(Ext::Graphics::Point2u(_MouseInput.Pos()));

		if (_Current)
		{
			_Current->State(Widget::Down);

			if (_Current->OnClick)
				_Current->OnClick(_MouseInput.Pos());
		}
		else
		{
			if (_Screen->OnClick)
				_Screen->OnClick(_MouseInput.Pos());
		}
	}
	else if (event.Type == Ext::Events::IsMouseMove)
	{
		if (_Current)
			_Current->State(Widget::Normal);

		_Current = _Screen->Contains(Ext::Graphics::Point2u(_MouseInput.Pos()));

		if (_Current)
			_Current->State(Widget::Hover);
	}
}
#include <Ext/Events/Eventer.hpp>
#include <SDL_events.h>

Ext::Events::Eventer::Eventer() :
	_Running(true)
{
}

bool Ext::Events::Eventer::GetEvent(Ext::Events::Event& event)
{
	if (_Running)
	{
		SDL_Event source = { 0 };
		Ext::Events::Event dest = { 0 };

		SDL_PollEvent(&source);

		if (source.type == SDL_QUIT)
			dest.Type = Ext::Events::IsQuit;

		if (source.type == SDL_MOUSEMOTION)
		{
			dest.Type = Ext::Events::IsMouseMove;

			dest.Mouse.PosX = source.motion.x;
			dest.Mouse.PosY = source.motion.y;
		}

		if (source.type == SDL_MOUSEBUTTONDOWN)
		{
			dest.Type = Ext::Events::IsMouseDown;

			dest.Mouse.State = Ext::Events::Mouse::Down;

			if (source.button.button == SDL_BUTTON_LEFT)
				dest.Mouse.Button = Ext::Events::Mouse::Left;
			if (source.button.button == SDL_BUTTON_RIGHT)
				dest.Mouse.Button = Ext::Events::Mouse::Right;
		}

		if (source.type == SDL_MOUSEBUTTONUP)
		{
			dest.Type = Ext::Events::IsMouseUp;

			dest.Mouse.State = Ext::Events::Mouse::Up;

			if (source.button.button == SDL_BUTTON_LEFT)
				dest.Mouse.Button = Ext::Events::Mouse::Left;
			if (source.button.button == SDL_BUTTON_RIGHT)
				dest.Mouse.Button = Ext::Events::Mouse::Right;
		}

		event = dest;
	}

	return _Running;
}

void Ext::Events::Eventer::StopEvent()
{
	_Running = false;
}
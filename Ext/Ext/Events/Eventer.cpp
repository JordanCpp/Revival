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

		event = dest;
	}

	return _Running;
}

void Ext::Events::Eventer::StopEvent()
{
	_Running = false;
}
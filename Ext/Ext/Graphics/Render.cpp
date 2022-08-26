#include <Ext/Graphics/Render.hpp>
#include <Ext/Core/RuntimeError.hpp>

Ext::Graphics::Render::Render(Ext::Graphics::Window* window) :
	_Render(nullptr),
	_Window(window)
{
	_Render  = SDL_CreateRenderer(_Window->Get(), -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (!_Render)
		throw Ext::Core::RuntimeError(SDL_GetError());
}

SDL_Renderer* Ext::Graphics::Render::Get()
{
	return _Render;
}
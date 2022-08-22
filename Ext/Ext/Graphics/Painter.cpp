#include <Ext/Graphics/Painter.hpp>

Ext::Graphics::Painter::Painter(Ext::Graphics::Render* render) :
	_Render(render)
{
}

void Ext::Graphics::Painter::Present()
{
	SDL_RenderPresent(_Render->Get());
}

void Ext::Graphics::Painter::Clear()
{
	SDL_RenderClear(_Render->Get());
}
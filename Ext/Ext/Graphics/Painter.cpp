#include <Ext/Graphics/Painter.hpp>
#include <stdexcept>

Ext::Graphics::Painter::Painter(Ext::Graphics::Render* render) :
	_Render(render)
{
}

void Ext::Graphics::Painter::Draw(Ext::Graphics::Image* image, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size)
{
	SDL_Rect rect;

	rect.x = pos.PosX();
	rect.y = pos.PosY();
	rect.w = size.PosX();
	rect.h = size.PosY();

	int success = SDL_RenderCopy(_Render->Get(), image->Get(), nullptr, &rect);

	if (success != 0)
		throw std::runtime_error(SDL_GetError());
}

void Ext::Graphics::Painter::Draw(Ext::Graphics::Image* image, const Ext::Graphics::Point2u& pos)
{
	Draw(image, pos, image->Size());
}

void Ext::Graphics::Painter::Present()
{
	SDL_RenderPresent(_Render->Get());
}

void Ext::Graphics::Painter::Clear()
{
	SDL_RenderClear(_Render->Get());
}
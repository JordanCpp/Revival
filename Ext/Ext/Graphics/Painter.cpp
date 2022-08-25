#include "Painter.hpp"
#include "Painter.hpp"
#include "Painter.hpp"
#include "Painter.hpp"
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

void Ext::Graphics::Painter::Draw(Ext::Graphics::Text* text, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size)
{
	Draw(text->Get(), pos, size);
}

void Ext::Graphics::Painter::Draw(Ext::Graphics::Text* text, const Ext::Graphics::Point2u& pos)
{
	Draw(text->Get(), pos, text->Get()->Size());
}

void Ext::Graphics::Painter::Draw(const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size, const Ext::Graphics::Color& color)
{
	SDL_Rect rect;

	rect.x = pos.PosX();
	rect.y = pos.PosY();
	rect.w = size.PosX();
	rect.h = size.PosY();

	SDL_SetRenderDrawColor(_Render->Get(), color.Red(), color.Green(), color.Blue(), color.Alpha());
	SDL_RenderFillRect(_Render->Get(), &rect);
}

void Ext::Graphics::Painter::Rect(const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size, const Ext::Graphics::Color& color)
{
	SDL_Rect rect;

	rect.x = pos.PosX();
	rect.y = pos.PosY();
	rect.w = size.PosX();
	rect.h = size.PosY();

	SDL_SetRenderDrawColor(_Render->Get(), color.Red(), color.Green(), color.Blue(), color.Alpha());
	SDL_RenderDrawRect(_Render->Get(), &rect);
}

void Ext::Graphics::Painter::Present()
{
	SDL_RenderPresent(_Render->Get());
}

void Ext::Graphics::Painter::Clear()
{
	SDL_RenderClear(_Render->Get());
}
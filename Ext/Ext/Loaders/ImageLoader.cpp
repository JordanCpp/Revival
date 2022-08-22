#include <Ext/Loaders/ImageLoader.hpp>
#include <SDL_image.h>
#include <stdexcept>

Ext::Loaders::ImageLoader::ImageLoader(Ext::Graphics::Render* render, const Ext::Graphics::Color& transparency):
	_Render(render),
	_Transparency(transparency)
{
}

Ext::Graphics::Image* Ext::Loaders::ImageLoader::Load(const std::string& path)
{
	SDL_Surface* surface = IMG_Load(path.c_str());

	if (!surface)
		throw std::runtime_error(IMG_GetError());

    int key = SDL_SetColorKey(surface, SDL_TRUE, SDL_MapRGB(surface->format, _Transparency.Red(), _Transparency.Green(), _Transparency.Blue()));

    if (key != 0)
        throw std::runtime_error(SDL_GetError());

    SDL_Texture* texture = SDL_CreateTextureFromSurface(_Render->Get(), surface);

    if (!texture)
        throw std::runtime_error(SDL_GetError());

    int width = 0;
    int height = 0;

   int query = SDL_QueryTexture(texture, nullptr, nullptr, &width, &height);

   if (query != 0)
       throw std::runtime_error(SDL_GetError());

    SDL_FreeSurface(surface);

	return new Ext::Graphics::Image(texture, Ext::Graphics::Point2u(width, height));
}
#include "Initializer.hpp"
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <stdexcept>

Ext::Core::Initializer::Initializer()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
		throw std::runtime_error(SDL_GetError());

	int flags = IMG_INIT_JPG | IMG_INIT_PNG;

	if ((IMG_Init(flags) & flags) != flags)
		throw std::runtime_error(IMG_GetError());

	if (TTF_Init() != 0)
		throw std::runtime_error(TTF_GetError());
}

Ext::Core::Initializer::~Initializer()
{
	TTF_Quit();
	IMG_Quit();
	SDL_Quit();
}
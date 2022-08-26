#include "Initializer.hpp"
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <Ext/Core/RuntimeError.hpp>

Ext::Core::Initializer::Initializer()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
		throw Ext::Core::RuntimeError(SDL_GetError());

	int flags = IMG_INIT_JPG | IMG_INIT_PNG;

	if ((IMG_Init(flags) & flags) != flags)
		throw Ext::Core::RuntimeError(IMG_GetError());

	if (TTF_Init() != 0)
		throw Ext::Core::RuntimeError(TTF_GetError());
}

Ext::Core::Initializer::~Initializer()
{
	TTF_Quit();
	IMG_Quit();
	SDL_Quit();
}
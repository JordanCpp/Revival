#include <Ext/Graphics/Image.hpp>

Ext::Graphics::Image::Image(SDL_Texture* texture, const Ext::Graphics::Point2u& size) :
	_Texture(texture),
	_Size(size)

{
}

SDL_Texture* Ext::Graphics::Image::Get()
{
	return _Texture;
}
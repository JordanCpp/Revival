#include <Ext/Graphics/Text.hpp>

Ext::Graphics::Text::Text(Ext::Graphics::Image* image) :
	_Image(image)
{
}

Ext::Graphics::Image* Ext::Graphics::Text::Get()
{
	return _Image;
}
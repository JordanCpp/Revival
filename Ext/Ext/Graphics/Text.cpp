#include "Text.hpp"
#include <Ext/Graphics/Text.hpp>

Ext::Graphics::Text::Text(Ext::Graphics::Image* image) :
	_Image(image)
{
}

const Ext::Graphics::Point2u& Ext::Graphics::Text::Size()
{
	return _Image->Size();
}

Ext::Graphics::Image* Ext::Graphics::Text::Get()
{
	return _Image;
}
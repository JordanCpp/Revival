#include <Ext/Graphics/Font.hpp>

Ext::Graphics::Font::Font(TTF_Font* font, size_t size) :
	_Size(0),
	_Font(font)
{
}

TTF_Font* Ext::Graphics::Font::Get()
{
	return _Font;
}

size_t Ext::Graphics::Font::Size()
{
	return _Size;
}
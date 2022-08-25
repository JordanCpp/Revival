#include "Font.hpp"
#include <Ext/Graphics/Font.hpp>

Ext::Graphics::Font::Font(TTF_Font* font, size_t size) :
	_Size(size),
	_Font(font)
{
}

Ext::Graphics::Font::~Font()
{
	TTF_CloseFont(_Font);
}

TTF_Font* Ext::Graphics::Font::Get()
{
	return _Font;
}

size_t Ext::Graphics::Font::Size()
{
	return _Size;
}
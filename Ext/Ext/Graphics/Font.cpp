#include <Ext/Graphics/Font.hpp>
#include <stdexcept>

Ext::Graphics::Font::Font(const std::string& path, size_t size) :
	_Size(0),
	_Font(nullptr)
{
	_Font = TTF_OpenFont(path.c_str(), size);

	if (!_Font)
		throw std::runtime_error("Not loading font:" + path);

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
#include <Ext/Loaders/FontLoader.hpp>
#include <stdexcept>

Ext::Graphics::Font* Ext::Loaders::FontLoader::Load(const std::string& path, size_t size)
{
	TTF_Font* font = TTF_OpenFont(path.c_str(), size);

	if (!font)
		throw std::runtime_error("Not loading font:" + path);


	TTF_CloseFont(font);

	return new Ext::Graphics::Font(font, size);
}
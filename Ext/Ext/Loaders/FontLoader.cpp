#include <Ext/Loaders/FontLoader.hpp>
#include <Ext/Core/RuntimeError.hpp>

Ext::Graphics::Font* Ext::Loaders::FontLoader::Load(const std::string& path, size_t size)
{
	TTF_Font* font = TTF_OpenFont(path.c_str(), size);

	if (!font)
		throw Ext::Core::RuntimeError("Not loading font:" + path);

	return new Ext::Graphics::Font(font, size);
}
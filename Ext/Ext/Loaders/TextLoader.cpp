#include <Ext/Loaders/TextLoader.hpp>
#include <SDL_ttf.h>
#include <Ext/Core/RuntimeError.hpp>

Ext::Loaders::TextLoader::TextLoader(Ext::Loaders::ImageLoader* imageLoader, Ext::Graphics::Font* font, const Ext::Graphics::Color& color) :
    _ImageLoader(imageLoader),
    _Font(font),
    _Color(color)
{
    if (!_ImageLoader)
        throw Ext::Core::RuntimeError("_ImageLoader is null");

    if (!_Font)
        throw Ext::Core::RuntimeError("_Font is null");
}

Ext::Graphics::Text* Ext::Loaders::TextLoader::Load(const std::string& text)
{
    SDL_Color color = { 0 };

    color.r = _Color.Red();
    color.g = _Color.Green();
    color.b = _Color.Blue();
    color.a = _Color.Alpha();

    SDL_Surface* surface = TTF_RenderUTF8_Solid(_Font->Get(), text.c_str(), color);

    if (!surface)
        throw Ext::Core::RuntimeError("TTF_RenderUTF8_Blended: " + text);

   Ext::Graphics::Image * image = _ImageLoader->Load(surface);

   //SDL_FreeSurface(surface);

   return new Ext::Graphics::Text(image);
}
#ifndef Ext_Loaders_TextLoader_hpp
#define Ext_Loaders_TextLoader_hpp

#include <Ext/Loaders/ImageLoader.hpp>
#include <Ext/Graphics/Font.hpp>
#include <Ext/Graphics/Text.hpp>
#include <Ext/Graphics/Color.hpp>

namespace Ext
{
    namespace Loaders
    {
        class TextLoader
        {
        public:
            TextLoader(Ext::Loaders::ImageLoader* imageLoader, Ext::Graphics::Font* font, const Ext::Graphics::Color& color);
            Ext::Graphics::Text* Load(const std::string& text);
        private:
            Ext::Loaders::ImageLoader* _ImageLoader;
            Ext::Graphics::Font* _Font;
            Ext::Graphics::Color _Color;
        };
    }
}

#endif
#ifndef Ext_Loaders_ImageLoader_hpp
#define Ext_Loaders_ImageLoader_hpp

#include <Ext/Graphics/Color.hpp>
#include <Ext/Graphics/Image.hpp>

namespace Ext
{
    namespace Loaders
    {
        class ImageLoader
        {
        public:
            ImageLoader(Ext::Graphics::Render* render, const Ext::Graphics::Color& transparency);
            Ext::Graphics::Image* Load(const std::string& path);
            Ext::Graphics::Image* Load(SDL_Surface * surface);
        private:
            Ext::Graphics::Render* _Render;
            Ext::Graphics::Color _Transparency;
        };
    }
}

#endif
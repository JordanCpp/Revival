#ifndef Ext_Loaders_FontLoader_hpp
#define Ext_Loaders_FontLoader_hpp

#include <Ext/Graphics/Font.hpp>

namespace Ext
{
    namespace Loaders
    {
        class FontLoader
        {
        public:
            Ext::Graphics::Font* Load(const std::string& path, size_t size);
        private:
        };
    }
}

#endif
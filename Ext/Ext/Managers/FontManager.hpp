#ifndef Ext_Managers_FontManager_hpp
#define Ext_Managers_FontManager_hpp

#include <Ext/Managers/PathManager.hpp>
#include <Ext/Loaders/FontLoader.hpp>
#include <unordered_map>

namespace Ext
{
    namespace Managers
    {
        class FontManager
        {
        public:
            FontManager(Ext::Managers::PathManager* pathManager, Ext::Loaders::FontLoader* fontLoader);
            ~FontManager();
            Ext::Graphics::Font* Get(const std::string& dir1, const std::string& dir2, const std::string& dir3, const std::string& file);
            Ext::Graphics::Font* Get(const std::string& dir1, const std::string& dir2, const std::string& file);
            Ext::Graphics::Font* Get(const std::string& dir1, const std::string& file);
        private:
            Ext::Managers::PathManager* _PathManager;
            Ext::Loaders::FontLoader* _FontLoader;
            std::unordered_map<std::string, Ext::Graphics::Font*> _Fonts;
        };
    }
}

#endif
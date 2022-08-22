#ifndef Ext_Managers_ImageManager_hpp
#define Ext_Managers_ImageManager_hpp

#include <Ext/Managers/PathManager.hpp>
#include <Ext/Loaders/ImageLoader.hpp>
#include <unordered_map>

namespace Ext
{
    namespace Managers
    {
        class ImageManager
        {
        public:
            ImageManager(Ext::Managers::PathManager* pathManager, Ext::Loaders::ImageLoader* imageLoader);
            ~ImageManager();
            Ext::Graphics::Image* Get(const std::string& dir1, const std::string& dir2, const std::string& dir3, const std::string& file);
            Ext::Graphics::Image* Get(const std::string& dir1, const std::string& dir2, const std::string& file);
            Ext::Graphics::Image* Get(const std::string& dir1, const std::string& file);
        private:
            Ext::Managers::PathManager* _PathManager;
            Ext::Loaders::ImageLoader* _ImageLoader;
            std::unordered_map<std::string, Ext::Graphics::Image*> _Images;
        };
    }
}

#endif
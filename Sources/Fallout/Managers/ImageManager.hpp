#ifndef Fallout_Managers_ImageManager_hpp
#define Fallout_Managers_ImageManager_hpp

#include <Ext/Managers/ImageManager.hpp>

namespace Fallout
{
    namespace Managers
    {
        class ImageManager
        {
        public:
            ImageManager(Ext::Managers::ImageManager* imageManager);
            Ext::Graphics::Image* Interface(const std::string& file);
        private:
            Ext::Managers::ImageManager* _ImageManager;
        };
    }
}

#endif
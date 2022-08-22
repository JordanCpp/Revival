#ifndef Fallout_Game_Settings_hpp
#define Fallout_Game_Settings_hpp

#include <Ext/Graphics/Point2u.hpp>
#include <string>

namespace Fallout
{
    namespace Game
    {
        class Settings
        {
        public:
            const Ext::Graphics::Point2u& Size();
            void Size(const Ext::Graphics::Point2u& value);
            const std::string& Title();
            void Title(const std::string& value);
            const std::string& Root();
            void Root(const std::string& value);
        private:
            Ext::Graphics::Point2u _Size;
            std::string _Title;
            std::string _Root;
        };
    }
}

#endif
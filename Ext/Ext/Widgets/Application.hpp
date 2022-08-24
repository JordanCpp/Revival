#ifndef Ext_Widgets_Application_hpp
#define Ext_Widgets_Application_hpp

#include <Ext/Widgets/Screen.hpp>
#include <unordered_map>

namespace Ext
{
    namespace Widgets
    {
        class Application
        {
        public:
            void Activate(Ext::Widgets::Screen* screen);
            void Draw();
        private:
            Ext::Widgets::Screen* _Screen;
        };
    }
}

#endif
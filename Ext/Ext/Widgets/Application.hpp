#ifndef Ext_Widgets_Application_hpp
#define Ext_Widgets_Application_hpp

#include <Ext/Widgets/Screen.hpp>

namespace Ext
{
    namespace Widgets
    {
        class Application
        {
        public:
        private:
            std::vector<Ext::Widgets::Screen*> _Screens;
        };
    }
}

#endif
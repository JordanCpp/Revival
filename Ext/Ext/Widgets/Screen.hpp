#ifndef Ext_Widgets_Screen_hpp
#define Ext_Widgets_Screen_hpp

#include <vector>
#include <Ext/Widgets/Window.hpp>

namespace Ext
{
    namespace Widgets
    {
        class Screen
        {
        public:
            void Attach(Ext::Widgets::Window* window);
            void Draw();
        private:
            std::vector<Ext::Widgets::Window*> _Windows;
        };
    }
}

#endif
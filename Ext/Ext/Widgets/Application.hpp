#ifndef Ext_Widgets_Application_hpp
#define Ext_Widgets_Application_hpp

#include <Ext/Widgets/Screen.hpp>
#include <Ext/Events/Event.hpp>
#include <Ext/Input/MouseInput.hpp>

namespace Ext
{
    namespace Widgets
    {
        class Application
        {
        public:
            void Activate(Ext::Widgets::Screen* screen);
            void Draw();
            void Handler(const Ext::Events::Event& event);
        private:
            Ext::Input::MouseInput _MouseInput;
            Ext::Widgets::Screen* _Screen;
        };
    }
}

#endif
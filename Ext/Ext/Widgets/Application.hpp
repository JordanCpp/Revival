#ifndef Ext_Widgets_Application_hpp
#define Ext_Widgets_Application_hpp

#include <Ext/Widgets/Screen.hpp>
#include <Ext/Events/Event.hpp>
#include <Ext/Input/MouseInput.hpp>
#include <unordered_map>

namespace Ext
{
    namespace Widgets
    {
        class Application
        {
        public:
            void Activate(size_t id);
            void Attach(size_t id, Ext::Widgets::Screen* screen);
            void Draw();
            void Handler(const Ext::Events::Event& event);
        private:
            Ext::Input::MouseInput _MouseInput;
            Ext::Widgets::Screen* _Screen;
            Ext::Widgets::Widget* _Current;
            std::unordered_map<size_t, Ext::Widgets::Screen*> _Screens;
        };
    }
}

#endif
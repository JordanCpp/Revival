#ifndef Ext_Widgets_Button_hpp
#define Ext_Widgets_Button_hpp

#include <Ext/Widgets/Widget.hpp>
#include <Ext/Widgets/Container.hpp>
#include <Ext/Managers/TextManager.hpp>

namespace Ext
{
    namespace Widgets
    {
        class Button: public Ext::Widgets::Widget
        {
        public:
            Button(Ext::Graphics::Painter* painter, Ext::Managers::TextManager* textManager, const std::string& caption, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size);
            void Attach(Ext::Widgets::Widget* widget);
            void Draw();
        private:
            Ext::Widgets::Container _Container;
            Ext::Managers::TextManager* _TextManager;
            std::string _Caption;
        };
    }
}

#endif
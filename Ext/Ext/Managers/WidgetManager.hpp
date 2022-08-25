#ifndef Ext_Managers_WidgetManager_hpp
#define Ext_Managers_WidgetManager_hpp

#include <Ext/Graphics/Painter.hpp>
#include <Ext/Widgets/Screen.hpp>
#include <Ext/Widgets/Window.hpp>
#include <Ext/Widgets/Button.hpp>
#include <Ext/Widgets/ImageWindow.hpp>

namespace Ext
{
    namespace Managers
    {
        class WidgetManager
        {
        public:
            WidgetManager(Ext::Graphics::Painter* painter, Ext::Graphics::Window* window, Ext::Managers::TextManager* textManager);
            ~WidgetManager();
            Ext::Widgets::Screen* NewScreen();
            Ext::Widgets::Button* NewButton(const std::string& caption, const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size);
            Ext::Widgets::Window* NewWindow(const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size);
            Ext::Widgets::ImageWindow* NewImageWindow(const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size);
        private:
            Ext::Graphics::Painter* _Painter;
            Ext::Graphics::Window* _Window;
            Ext::Managers::TextManager* _TextManager;
            std::vector<Ext::Widgets::Widget*> _Widgets;
        };
    }
}

#endif
#ifndef Fallout_UI_Aggregator_hpp
#define Fallout_UI_Aggregator_hpp

#include <Ext/Managers/WidgetManager.hpp>
#include <Ext/Widgets/Application.hpp>
#include <Ext/Managers/ImageManager.hpp>
#include "MainMenu.hpp"
#include "Editor.hpp"
#include "Settings.hpp"

namespace Fallout
{
    namespace UI
    {
        class Aggregator
        {
        public:
            Aggregator(Ext::Managers::WidgetManager* widgetManager, Ext::Widgets::Application* application, Fallout::Managers::ImageManager* imageManager);
        private:
            Ext::Managers::WidgetManager* _WidgetManager;
            Ext::Widgets::Application* _Application;
            Fallout::Managers::ImageManager* _ImageManager;
            Fallout::UI::MainMenu _UiMainMenu;
            Fallout::UI::Editor _UiEditor;
            Fallout::UI::Settings _UiSettings;
        };
    }
}

#endif
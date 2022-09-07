#ifndef Fallout_UI_Aggregator_hpp
#define Fallout_UI_Aggregator_hpp

#include <Ext/Managers/WidgetManager.hpp>
#include <Ext/Widgets/Application.hpp>
#include <Ext/Managers/ImageManager.hpp>
#include <Fallout/UI/MainMenu.hpp>
#include <Fallout/UI/Editor.hpp>
#include <Fallout/UI/Settings.hpp>

namespace Fallout
{
    namespace UI
    {
        class Aggregator
        {
        public:
            Aggregator(
                Ext::Managers::WidgetManager* widgetManager, 
                Ext::Widgets::Application* application, 
                Fallout::Managers::ImageManager* imageManager,
                Fallout::Managers::LocalizationManager* localizationManager);
        private:
            Ext::Managers::WidgetManager* _WidgetManager;
            Ext::Widgets::Application* _Application;
            Fallout::Managers::ImageManager* _ImageManager;
            Fallout::Managers::LocalizationManager* _LocalizationManager;
            Fallout::UI::MainMenu _UiMainMenu;
            Fallout::UI::Editor _UiEditor;
            Fallout::UI::Settings _UiSettings;
        };
    }
}

#endif
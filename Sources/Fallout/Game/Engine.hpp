#ifndef Fallout_Game_Engine_hpp
#define Fallout_Game_Engine_hpp

#include <Ext/Core/Initializer.hpp>
#include <Ext/Graphics/Painter.hpp>
#include <Ext/Events/Eventer.hpp>
#include <Fallout/Game/Settings.hpp>

namespace Fallout
{
    namespace Game
    {
        class Engine
        {
        public:
            Engine(Fallout::Game::Settings* settings);
            void Run();
        private:
            Fallout::Game::Settings* _Settings;
            Ext::Core::Initializer _Initializer;
            Ext::Events::Eventer _Eventer;
            Ext::Graphics::Window _Window;
            Ext::Graphics::Render _Render;
            Ext::Graphics::Painter _Painter;
        };
    }
}

#endif
#ifndef Fallout_Critters_Script_hpp
#define Fallout_Critters_Script_hpp

#include <Fallout/Game/Script.hpp>
#include <Fallout/Critters/Critter.hpp>

namespace Fallout
{
    namespace Critters
    {
        class Critter;

        class Script: public Fallout::Game::Script
        {
        public:
        private:
            Fallout::Critters::Critter* _Critter;
        };
    }
}

#endif
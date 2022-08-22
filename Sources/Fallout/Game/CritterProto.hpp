#ifndef Fallout_Game_CritterProto_hpp
#define Fallout_Game_CritterProto_hpp

#include <Fallout/Game/CritterStats.hpp>
#include <Fallout/Game/CritterSkills.hpp>

namespace Fallout
{
    namespace Game
    {
        class CritterProto
        {
        public:
        private:
            Fallout::Game::CritterStats _CritterStats;
            Fallout::Game::CritterSkills _CritterSkills;
        };
    }
}

#endif
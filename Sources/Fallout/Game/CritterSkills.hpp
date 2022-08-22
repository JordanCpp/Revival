#ifndef Fallout_Game_CritterSkills_hpp
#define Fallout_Game_CritterSkills_hpp

#include <array>
#include <Fallout/Gameplay/StatValue.hpp>

namespace Fallout
{
    namespace Game
    {
        class CritterSkills
        {
        public:
            enum
            {
                SmallGuns,
                Max
            };
        private:
            std::array<Fallout::Gameplay::StatValue, Fallout::Game::CritterSkills::Max> _Stats;
        };
    }
}

#endif
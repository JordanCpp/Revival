#ifndef Fallout_Game_Critter_hpp
#define Fallout_Game_Critter_hpp

#include <Fallout/Game/CritterProto.hpp>

namespace Fallout
{
    namespace Game
    {
        class Critter
        {
        public:
            int StatValue(size_t index);
            int StatCurrent(size_t index);
            int SkillValue(size_t index);
            int SkillCurrent(size_t index);
        private:
            Fallout::Game::CritterProto _CritterProto;
        };
    }
}

#endif
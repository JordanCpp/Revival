#include <Fallout/Game/Critter.hpp>

int Fallout::Game::Critter::StatValue(size_t index)
{
	return _CritterProto.Stats().StatValue(index);
}

int Fallout::Game::Critter::StatCurrent(size_t index)
{
	return _CritterProto.Stats().StatCurrent(index);
}

int Fallout::Game::Critter::SkillValue(size_t index)
{
	return _CritterProto.Stats().StatCurrent(index);
}

int Fallout::Game::Critter::SkillCurrent(size_t index)
{
	return _CritterProto.Stats().StatCurrent(index);
}

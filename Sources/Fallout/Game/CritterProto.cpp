#include <Fallout/Game/CritterProto.hpp>

Fallout::Game::CritterProto::CritterProto(const Fallout::Game::CritterStats& stats, const Fallout::Game::CritterSkills& skills) :
	_CritterStats(stats),
	_CritterSkills(skills)
{
}

const Fallout::Game::CritterStats& Fallout::Game::CritterProto::Stats()
{
	return _CritterStats;
}

const Fallout::Game::CritterSkills& Fallout::Game::CritterProto::Skills()
{
	return _CritterSkills;
}
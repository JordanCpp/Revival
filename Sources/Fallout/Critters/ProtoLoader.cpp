#include <Fallout/Critters/ProtoLoader.hpp>

void Fallout::Critters::ProtoLoader::Load(Ext::Readers::JsonReader* reader)
{
	_Result.Clear();

	auto stats = reader->Reader()->FindMember("Stats");

	_Result.Stat(Fallout::Critters::Stats::Strength, stats->value.FindMember("Strength")->value.GetInt());
}

const Fallout::Critters::Proto& Fallout::Critters::ProtoLoader::Result()
{
	return _Result;
}
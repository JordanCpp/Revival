#include <Fallout/Critters/Proto.hpp>

int Fallout::Critters::Proto::Stat(size_t index)
{
	return _Stats.Value(index);
}

float Fallout::Critters::Proto::Statf(size_t index)
{
	return _Stats.Valuef(index);
}

void Fallout::Critters::Proto::Stat(size_t index, int value)
{
	_Stats.Value(index, value);
}

void Fallout::Critters::Proto::Stat(size_t index, float value)
{
	_Stats.Value(index, value);
}

void Fallout::Critters::Proto::Clear()
{
	_Stats.Clear();
}
#include <Fallout/Critters/Proto.hpp>

void Fallout::Critters::Proto::Stat(size_t index, int value)
{
	_Stats.Value(index, value);
}

int Fallout::Critters::Proto::Stat(size_t index)
{
	return _Stats.Value(index);
}

void Fallout::Critters::Proto::Clear()
{
	_Stats.Clear();
}
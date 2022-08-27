#include <Fallout/Gameplay/Modifier.hpp>
#include <cmath>

int Fallout::Gameplay::Modifier::PercentOf(int percent, int value) const
{
	return (int)floor(double(value) / double(100) * percent);
}
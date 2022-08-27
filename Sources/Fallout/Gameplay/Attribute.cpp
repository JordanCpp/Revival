#include <Fallout/Gameplay/Attribute.hpp>

Fallout::Gameplay::Attribute::Attribute() :
	_Id(0),
	_Number(0),
	_Percent(0)
{
}

Fallout::Gameplay::Attribute::Attribute(size_t id, int number, int percent) :
	_Id(id),
	_Number(number),
	_Percent(percent)
{
}

size_t Fallout::Gameplay::Attribute::Id()
{
	return _Id;
}

int Fallout::Gameplay::Attribute::Number()
{
	return _Number;
}

int Fallout::Gameplay::Attribute::Percent()
{
	return _Percent;
}

void Fallout::Gameplay::Attribute::Id(size_t value)
{
	_Id = value;
}

void Fallout::Gameplay::Attribute::Number(int value)
{
	_Number = value;
}

void Fallout::Gameplay::Attribute::Percent(int value)
{
	_Percent = value;
}
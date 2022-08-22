#include <Fallout/Gameplay/StatValue.hpp>

Fallout::Gameplay::StatValue::StatValue() :
	_Value(0),
	_Current(0),
	_Number(0),
	_Percent(0)
{
}

int Fallout::Gameplay::StatValue::Value()
{
	return _Value;
}

int Fallout::Gameplay::StatValue::Current()
{
	return _Current;
}

int Fallout::Gameplay::StatValue::Number()
{
	return _Number;
}

int Fallout::Gameplay::StatValue::Percent()
{
	return _Percent;
}
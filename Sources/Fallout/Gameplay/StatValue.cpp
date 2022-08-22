#include <Fallout/Gameplay/StatValue.hpp>

Fallout::Gameplay::StatValue::StatValue() :
	_Value(0),
	_Current(0),
	_Number(0),
	_Percent(0)
{
}

int Fallout::Gameplay::StatValue::Value() const
{
	return _Value;
}

int Fallout::Gameplay::StatValue::Current() const
{
	return _Current;
}

int Fallout::Gameplay::StatValue::Number() const
{
	return _Number;
}

int Fallout::Gameplay::StatValue::Percent() const
{
	return _Percent;
}

void Fallout::Gameplay::StatValue::Value(int value)
{
	_Value = value;
}

void Fallout::Gameplay::StatValue::Current(int value)
{
	_Current = value;
}

void Fallout::Gameplay::StatValue::Number(int value)
{
	_Number = value;
}

void Fallout::Gameplay::StatValue::Percent(int value)
{
	_Percent = value;
}
#include <Fallout/Gameplay/ParamValue.hpp>
#include <cassert>

Fallout::Gameplay::ParamValue::ParamValue(uint8_t type):
	_Type(type)
{
	if (type == IsInteger)
		_Integer = 0;
	else
		_Float = 0.0f;
}

void Fallout::Gameplay::ParamValue::Change(uint8_t type)
{
	_Type = type;
}

int Fallout::Gameplay::ParamValue::Integer() const
{
	assert(_Type == IsInteger);

	return _Integer;
}

float Fallout::Gameplay::ParamValue::Float() const
{
	assert(_Type == IsFloat);

	return _Float;
}

void Fallout::Gameplay::ParamValue::Integer(int value)
{
	assert(_Type == IsInteger);

	_Integer = value;
}

void Fallout::Gameplay::ParamValue::Float(float value)
{
	assert(_Type == IsFloat);

	_Float = value;
}
#include <Fallout/Gameplay/ParamValue.hpp>
#include <cassert>

Fallout::Gameplay::ParamValue::ParamValue(uint8_t type):
	_Type(type)
{
	if (type == Integer)
		_Integer = 0;
	else
		_Float = 0.0f;
}

int Fallout::Gameplay::ParamValue::GetInteger()
{
	assert(_Type == Integer);

	return _Integer;
}

float Fallout::Gameplay::ParamValue::GetFloat()
{
	assert(_Type == Float);

	return _Float;
}

void Fallout::Gameplay::ParamValue::Set(float value)
{
	assert(_Type == Float);

	_Float = value;
}

void Fallout::Gameplay::ParamValue::Set(int value)
{
	assert(_Type == Integer);

	_Integer = value;
}
#include <Fallout/Gameplay/Param.hpp>

Fallout::Gameplay::Param::Param() :
    _Value(ParamValue::IsInteger),
    _Current(ParamValue::IsInteger),
    _Number(ParamValue::IsInteger),
    _Percent(0)
{
}

int Fallout::Gameplay::Param::Valuei() const
{
    return _Value.Integer();
}

float Fallout::Gameplay::Param::Valuef() const
{
    return _Value.Float();
}

int Fallout::Gameplay::Param::Currenti() const
{
    return _Current.Integer();
}

float Fallout::Gameplay::Param::Currentf() const
{
    return _Current.Float();
}

int Fallout::Gameplay::Param::Numberi() const
{
    return _Number.Integer();
}

float Fallout::Gameplay::Param::Numberf() const
{
    return _Number.Float();
}

int Fallout::Gameplay::Param::Percent() const
{
    return _Percent;
}

void Fallout::Gameplay::Param::Value(int value)
{
    _Value.Integer(value);
}

void Fallout::Gameplay::Param::Value(float value)
{
    _Value.Float(value);
}

void Fallout::Gameplay::Param::Current(int value)
{
    _Current.Integer(value);
}

void Fallout::Gameplay::Param::Current(float value)
{
    _Current.Float(value);
}

void Fallout::Gameplay::Param::Number(int value)
{
    _Number.Integer(value);
}

void Fallout::Gameplay::Param::Number(float value)
{
    _Number.Float(value);
}

void Fallout::Gameplay::Param::Percent(int value)
{
    _Percent = value;
}

void Fallout::Gameplay::Param::Change(uint8_t type)
{
}
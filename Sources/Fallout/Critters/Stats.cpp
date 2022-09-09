#include <Fallout/Critters/Stats.hpp>

Fallout::Critters::Stats::Stats()
{
    _Stats.at(Fallout::Critters::Stats::CarryWeight).Change(Fallout::Gameplay::ParamValue::IsFloat);
}

int Fallout::Critters::Stats::Value(size_t index) const
{
    return _Stats.at(index).Valuei();
}

float Fallout::Critters::Stats::Valuef(size_t index) const
{
    return _Stats.at(index).Valuef();
}

int Fallout::Critters::Stats::Current(size_t index) const
{
    return _Stats.at(index).Currenti();
}

float Fallout::Critters::Stats::Currentf(size_t index) const
{
    return _Stats.at(index).Currentf();
}

int Fallout::Critters::Stats::Number(size_t index) const
{
    return _Stats.at(index).Numberi();
}

float Fallout::Critters::Stats::Numberf(size_t index) const
{
    return _Stats.at(index).Numberf();
}

int Fallout::Critters::Stats::Percent(size_t index) const
{
    return _Stats.at(index).Percent();
}

void Fallout::Critters::Stats::Value(size_t index, int value)
{
    _Stats.at(index).Value(value);
}

void Fallout::Critters::Stats::Value(size_t index, float value)
{
    _Stats.at(index).Value(value);
}

void Fallout::Critters::Stats::Current(size_t index, int value)
{
    _Stats.at(index).Current(value);
}

void Fallout::Critters::Stats::Current(size_t index, float value)
{
    _Stats.at(index).Current(value);
}

void Fallout::Critters::Stats::Number(size_t index, int value)
{
    _Stats.at(index).Number(value);
}

void Fallout::Critters::Stats::Number(size_t index, float value)
{
    _Stats.at(index).Number(value);
}

void Fallout::Critters::Stats::Percent(size_t index, int value)
{
    _Stats.at(index).Percent(value);
}

int Fallout::Critters::Stats::StatValue(size_t index) const
{
    int result  = 0;
    int number  = Number(index);
    int percent = Percent(index);
    int value   = Value(index);

    if (number > 0)
        result += number;
    else
        result -= number;

    if (percent > 0)
        result += _Modifier.PercentOf(percent, value);
    else
        result -= _Modifier.PercentOf(percent, value);

    return result + value;
}

float Fallout::Critters::Stats::StatValuef(size_t index) const
{
    float result = 0;
    float number = Numberf(index);
    int percent = Percent(index);
    float value = Valuef(index);

    if (number > 0)
        result += number;
    else
        result -= number;

    if (percent > 0)
        result += _Modifier.PercentOf(percent, value);
    else
        result -= _Modifier.PercentOf(percent, value);

    return result + value;
}

int Fallout::Critters::Stats::StatCurrent(size_t index) const
{
    return Current(index);
}

float Fallout::Critters::Stats::StatCurrentf(size_t index) const
{
    return Currentf(index);
}

void Fallout::Critters::Stats::Clear()
{
    for (size_t i = 0; i < _Stats.size(); i++)
    {
        _Stats.at(i).Value(0);
        _Stats.at(i).Current(0);
        _Stats.at(i).Number(0);
        _Stats.at(i).Percent(0);
    }
}
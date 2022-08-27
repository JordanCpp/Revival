#include <Fallout/Critters/Stats.hpp>

int Fallout::Critters::Stats::Value(size_t index) const
{
    return _Stats.at(index).Value();
}

int Fallout::Critters::Stats::Current(size_t index) const
{
    return _Stats.at(index).Current();
}

int Fallout::Critters::Stats::Number(size_t index) const
{
    return _Stats.at(index).Number();
}

int Fallout::Critters::Stats::Percent(size_t index) const
{
    return _Stats.at(index).Percent();
}

void Fallout::Critters::Stats::Value(size_t index, int value)
{
    _Stats.at(index).Value(value);
}

void Fallout::Critters::Stats::Current(size_t index, int value)
{
    _Stats.at(index).Current(value);
}

void Fallout::Critters::Stats::Number(size_t index, int value)
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

int Fallout::Critters::Stats::StatCurrent(size_t index) const
{
    return Current(index);
}
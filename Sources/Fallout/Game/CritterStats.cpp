#include <Fallout/Game/CritterStats.hpp>

int Fallout::Game::CritterStats::Value(size_t index) const
{
    return _Stats.at(index).Value();
}

int Fallout::Game::CritterStats::Current(size_t index) const
{
    return _Stats.at(index).Current();
}

int Fallout::Game::CritterStats::Number(size_t index) const
{
    return _Stats.at(index).Number();
}

int Fallout::Game::CritterStats::Percent(size_t index) const
{
    return _Stats.at(index).Percent();
}

int Fallout::Game::CritterStats::StatValue(size_t index) const
{
    int result = 0;
    int number = Number(index);
    int percent = Percent(index);
    int value = Value(index);

    if (number > 0)
    {
        result += number;
    }
    else if (number < 0)
    {
        result -= number;
    }

    if (percent > 0)
    {
        result += (int)floor(double(value) / double(100) * percent);
    }
    else if (percent < 0)
    {
        result -= (int)floor(double(value) / double(100) * percent);
    }

    return result + value;
}

int Fallout::Game::CritterStats::StatCurrent(size_t index) const
{
    return Current(index);
}
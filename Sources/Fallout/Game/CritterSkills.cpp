#include <Fallout/Game/CritterSkills.hpp>

int Fallout::Game::CritterSkills::Value(size_t index) const
{
    return _Skills.at(index).Value();
}

int Fallout::Game::CritterSkills::Current(size_t index) const
{
    return _Skills.at(index).Current();
}

int Fallout::Game::CritterSkills::Number(size_t index) const
{
    return _Skills.at(index).Number();
}

int Fallout::Game::CritterSkills::Percent(size_t index) const
{
    return _Skills.at(index).Percent();
}

void Fallout::Game::CritterSkills::Value(size_t index, int value)
{
    return _Skills.at(index).Value(value);
}

void Fallout::Game::CritterSkills::Current(size_t index, int value)
{
    return _Skills.at(index).Current(value);
}

void Fallout::Game::CritterSkills::Number(size_t index, int value)
{
    return _Skills.at(index).Number(value);
}

void Fallout::Game::CritterSkills::Percent(size_t index, int value)
{
    return _Skills.at(index).Percent(value);
}

int Fallout::Game::CritterSkills::SkillValue(size_t index) const
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

int Fallout::Game::CritterSkills::SkillCurrent(size_t index) const
{
    return Current(index);
}
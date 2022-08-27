#include <Fallout/Gameplay/Perk.hpp>

Fallout::Gameplay::Perk::Perk() :
	_Index(0)
{
}

void Fallout::Gameplay::Perk::Add(const Fallout::Gameplay::Attribute& attribute)
{
	_Attributes.at(_Index) = attribute;
	_Index++;
}

int Fallout::Gameplay::Perk::Bonus(size_t id, int value)
{
	int result = 0;

	for (size_t i = 0; i < Fallout::Gameplay::Perk::Max; i++)
	{
		if (_Attributes.at(i).Id() == id)
		{
			if (_Attributes.at(i).Number() > 0)
				result += _Attributes.at(i).Number();
			else
				result -= _Attributes.at(i).Number();

			if (_Attributes.at(i).Percent() > 0)
				result += _Modifier.PercentOf(_Attributes.at(i).Percent(), value);
			else
				result -= _Modifier.PercentOf(_Attributes.at(i).Percent(), value);
		}
	}
	
	return result;
}
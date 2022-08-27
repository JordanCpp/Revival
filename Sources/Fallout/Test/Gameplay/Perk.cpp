#include <Ext/Core/Tester.hpp>
#include <Fallout/Gameplay/Perk.hpp>
#include <Fallout/Critters/Stats.hpp>

void TestGameplayPerkInitDefault()
{
	Fallout::Gameplay::Perk perk;

	EXT_TESTER_EQUAL(Fallout::Gameplay::Perk::Max > 0);
	EXT_TESTER_EQUAL(perk.Bonus(Fallout::Critters::Stats::Strength, 20) == 0);
}

void TestGameplayPerkAddValues()
{
	Fallout::Gameplay::Perk perk;

	perk.Add(Fallout::Gameplay::Attribute(Fallout::Critters::Stats::Strength, 5, 15));

	int n = perk.Bonus(Fallout::Critters::Stats::Strength, 100);

	EXT_TESTER_EQUAL(perk.Bonus(Fallout::Critters::Stats::Strength, 100) == 20);
}

int main(int argc, char* argv[])
{
	TestGameplayPerkInitDefault();
	TestGameplayPerkAddValues();

	return 0;
}
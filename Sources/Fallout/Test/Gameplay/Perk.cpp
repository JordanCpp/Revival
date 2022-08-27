#include <Ext/Core/Tester.hpp>
#include <Fallout/Gameplay/Perk.hpp>

void TestGameplayPerkInitDefault()
{
	Fallout::Gameplay::Perk perk;

	EXT_TESTER_EQUAL(Fallout::Gameplay::Perk::Max > 0);
	EXT_TESTER_EQUAL(perk.Bonus(5, 20) == 0);
}

void TestGameplayPerkAddValues()
{
	Fallout::Gameplay::Perk perk;

	perk.Add(Fallout::Gameplay::Attribute(5, 5, 15));

	int n = perk.Bonus(5, 100);

	EXT_TESTER_EQUAL(perk.Bonus(5, 100) == 20);
}

int main(int argc, char* argv[])
{
	TestGameplayPerkInitDefault();
	TestGameplayPerkAddValues();

	return 0;
}
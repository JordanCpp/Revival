#include <Ext/Core/Tester.hpp>
#include <Fallout/Gameplay/Modifier.hpp>

void TestGameplayModifierPercentOf()
{
	Fallout::Gameplay::Modifier modifier;

	EXT_TESTER_EQUAL(modifier.PercentOf(10, 200) == 20);
	EXT_TESTER_EQUAL(modifier.PercentOf(-10, 200) == -20);
}

int main(int argc, char* argv[])
{
	TestGameplayModifierPercentOf();

	return 0;
}
#include <Ext/Core/Tester.hpp>
#include <Fallout/Gameplay/StatValue.hpp>

void TestGameplayStatValueInitDefault()
{
	Fallout::Gameplay::StatValue statValue;

	EXT_TESTER_EQUAL(statValue.Value() == 0);
	EXT_TESTER_EQUAL(statValue.Current() == 0);
	EXT_TESTER_EQUAL(statValue.Number() == 0);
	EXT_TESTER_EQUAL(statValue.Percent() == 0);
}

void TestGameplayStatValueInitValues()
{
	Fallout::Gameplay::StatValue statValue;

	statValue.Value(1);
	statValue.Current(2);
	statValue.Number(3);
	statValue.Percent(4);

	EXT_TESTER_EQUAL(statValue.Value() == 1);
	EXT_TESTER_EQUAL(statValue.Current() == 2);
	EXT_TESTER_EQUAL(statValue.Number() == 3);
	EXT_TESTER_EQUAL(statValue.Percent() == 4);
}

int main(int argc, char* argv[])
{
	TestGameplayStatValueInitDefault();
	TestGameplayStatValueInitValues();

	return 0;
}
#include <Ext/Core/Tester.hpp>
#include <Fallout/Gameplay/Attribute.hpp>

void TestGameplayAttributeInitDefault()
{
	Fallout::Gameplay::Attribute attribute;

	EXT_TESTER_EQUAL(attribute.Id()      == 0);
	EXT_TESTER_EQUAL(attribute.Number()  == 0);
	EXT_TESTER_EQUAL(attribute.Percent() == 0);
}

void TestGameplayAttributeInitValues()
{
	Fallout::Gameplay::Attribute attribute(5, 20, 30);

	EXT_TESTER_EQUAL(attribute.Id()     == 5);
	EXT_TESTER_EQUAL(attribute.Number()  == 20);
	EXT_TESTER_EQUAL(attribute.Percent() == 30);
}

int main(int argc, char* argv[])
{
	TestGameplayAttributeInitDefault();
	TestGameplayAttributeInitValues();

	return 0;
}
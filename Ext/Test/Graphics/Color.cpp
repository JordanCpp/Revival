#include <Ext/Core/Tester.hpp>
#include <Ext/Graphics/Color.hpp>

void TestExtGraphicsColorInitDefault()
{
	Ext::Graphics::Color color;

	EXT_TESTER_EQUAL(color.Red()   == 0);
	EXT_TESTER_EQUAL(color.Green() == 0);
	EXT_TESTER_EQUAL(color.Blue()  == 0);
	EXT_TESTER_EQUAL(color.Alpha() == 255);
}

void TestExtGraphicsColorInitValue()
{
	Ext::Graphics::Color color(1, 2, 3);

	EXT_TESTER_EQUAL(color.Red()   == 1);
	EXT_TESTER_EQUAL(color.Green() == 2);
	EXT_TESTER_EQUAL(color.Blue()  == 3);
	EXT_TESTER_EQUAL(color.Alpha() == 255);
}

void TestExtGraphicsColorInitValue2()
{
	Ext::Graphics::Color color(1, 2, 3, 4);

	EXT_TESTER_EQUAL(color.Red()   == 1);
	EXT_TESTER_EQUAL(color.Green() == 2);
	EXT_TESTER_EQUAL(color.Blue()  == 3);
	EXT_TESTER_EQUAL(color.Alpha() == 4);
}

int main(int argc, char* argv[])
{
	TestExtGraphicsColorInitDefault();
	TestExtGraphicsColorInitValue();
	TestExtGraphicsColorInitValue2();

	return 0;
}
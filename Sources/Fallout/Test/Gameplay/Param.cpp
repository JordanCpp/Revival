#include <Ext/Core/Tester.hpp>
#include <Fallout/Gameplay/Param.hpp>

void TestParamInitDefault()
{
	Fallout::Gameplay::Param<int> param;

	EXT_TESTER_EQUAL(param.Value()   == 0);
	EXT_TESTER_EQUAL(param.Current() == 0);
	EXT_TESTER_EQUAL(param.Number()  == 0);
	EXT_TESTER_EQUAL(param.Percent() == 0);
}

void TestParamInitValues()
{
	Fallout::Gameplay::Param<int> param;

	param.Value(1);
	param.Current(2);
	param.Number(3);
	param.Percent(4);

	EXT_TESTER_EQUAL(param.Value()   == 1);
	EXT_TESTER_EQUAL(param.Current() == 2);
	EXT_TESTER_EQUAL(param.Number()  == 3);
	EXT_TESTER_EQUAL(param.Percent() == 4);
}

int main(int argc, char* argv[])
{
	TestParamInitDefault();
	TestParamInitValues();

	return 0;
}
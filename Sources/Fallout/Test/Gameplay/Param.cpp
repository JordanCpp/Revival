#include <Ext/Core/Tester.hpp>
#include <Fallout/Gameplay/Param.hpp>

void TestParamInitDefault()
{
	Fallout::Gameplay::Param param;

	EXT_TESTER_EQUAL(param.Valuei()   == 0);
	EXT_TESTER_EQUAL(param.Currenti() == 0);
	EXT_TESTER_EQUAL(param.Numberi()  == 0);
	EXT_TESTER_EQUAL(param.Percent()  == 0);
}

void TestParamInitValues()
{
	Fallout::Gameplay::Param param;

	param.Value(1);
	param.Current(2);
	param.Number(3);
	param.Percent(4);

	EXT_TESTER_EQUAL(param.Valuei()   == 1);
	EXT_TESTER_EQUAL(param.Currenti() == 2);
	EXT_TESTER_EQUAL(param.Numberi()  == 3);
	EXT_TESTER_EQUAL(param.Percent()  == 4);
}

int main(int argc, char* argv[])
{
	TestParamInitDefault();
	TestParamInitValues();

	return 0;
}
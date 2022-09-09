#include <Ext/Core/Tester.hpp>
#include <Fallout/Gameplay/ParamValue.hpp>

void TestParamValueInitInt()
{
	Fallout::Gameplay::ParamValue param(Fallout::Gameplay::ParamValue::IsInteger);

	EXT_TESTER_EQUAL(param.Integer() == 0);
}

void TestParamValueSetInt()
{
	Fallout::Gameplay::ParamValue param(Fallout::Gameplay::ParamValue::IsInteger);

	param.Integer(42);

	EXT_TESTER_EQUAL(param.Integer() == 42);
}

void TestParamValueInitFloat()
{
	Fallout::Gameplay::ParamValue param(Fallout::Gameplay::ParamValue::IsFloat);

	EXT_TESTER_EQUAL(param.Float() == 0.0f);
}

void TestParamValueSetFloat()
{
	Fallout::Gameplay::ParamValue param(Fallout::Gameplay::ParamValue::IsFloat);

	param.Float(42.0f);

	EXT_TESTER_EQUAL(param.Float() == 42.0f);
}

int main(int argc, char* argv[])
{
	TestParamValueInitInt();
	TestParamValueSetInt();
	TestParamValueInitFloat();
	TestParamValueSetFloat();

	return 0;
}
#include <Ext/Core/Tester.hpp>
#include <Ext/Graphics/Point2u.hpp>

void TestExtGraphicsPoint2uEmptyInit()
{
	Ext::Graphics::Point2u point;

	EXT_TESTER_EQUAL(point.PosX(), 0);
	EXT_TESTER_EQUAL(point.PosY(), 0);
}

int main(int argc, char* argv[])
{
	TestExtGraphicsPoint2uEmptyInit();

	return 0;
}
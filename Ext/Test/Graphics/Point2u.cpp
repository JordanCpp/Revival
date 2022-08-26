#include <Ext/Core/Tester.hpp>
#include <Ext/Graphics/Point2u.hpp>

void TestExtGraphicsPoint2uInitDefault()
{ 
	Ext::Graphics::Point2u point;

	EXT_TESTER_EQUAL(point.PosX() == 0);
	EXT_TESTER_EQUAL(point.PosY() == 0);
}

void TestExtGraphicsPoint2uInitValue()
{
	Ext::Graphics::Point2u point(15, 30);

	EXT_TESTER_EQUAL(point.PosX() == 15);
	EXT_TESTER_EQUAL(point.PosY() == 30);
}

void TestExtGraphicsPoint2uPos()
{
	Ext::Graphics::Point2u point;

	point.Pos(25, 45);

	EXT_TESTER_EQUAL(point.PosX() == 25);
	EXT_TESTER_EQUAL(point.PosY() == 45);
}

int main(int argc, char* argv[])
{
	TestExtGraphicsPoint2uInitDefault();
	TestExtGraphicsPoint2uInitValue();
	TestExtGraphicsPoint2uPos();

	return 0;
}
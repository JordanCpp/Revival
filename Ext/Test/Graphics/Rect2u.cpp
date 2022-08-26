#include <Ext/Core/Tester.hpp>
#include <Ext/Graphics/Rect2u.hpp>

void TestExtGraphicsRect2uInitDefault()
{
	Ext::Graphics::Rect2u rect;

	EXT_TESTER_EQUAL(rect.Pos().PosX()  == 0);
	EXT_TESTER_EQUAL(rect.Pos().PosY()  == 0);
	EXT_TESTER_EQUAL(rect.Size().PosX() == 0);
	EXT_TESTER_EQUAL(rect.Size().PosY() == 0);
} 

void TestExtGraphicsRect2uInitValue()
{
	Ext::Graphics::Rect2u rect(15, 30, 70, 85);

	EXT_TESTER_EQUAL(rect.Pos().PosX()  == 15);
	EXT_TESTER_EQUAL(rect.Pos().PosY()  == 30);
	EXT_TESTER_EQUAL(rect.Size().PosX() == 70);
	EXT_TESTER_EQUAL(rect.Size().PosY() == 85);
}

void TestExtGraphicsRect2uPos()
{
	Ext::Graphics::Rect2u rect;
	
	rect.Pos(15, 30);
	rect.Size(70, 85);

	EXT_TESTER_EQUAL(rect.Pos().PosX()  == 15);
	EXT_TESTER_EQUAL(rect.Pos().PosY()  == 30);
	EXT_TESTER_EQUAL(rect.Size().PosX() == 70);
	EXT_TESTER_EQUAL(rect.Size().PosY() == 85);
}

int main(int argc, char* argv[])
{
	TestExtGraphicsRect2uInitDefault();
	TestExtGraphicsRect2uInitValue();
	TestExtGraphicsRect2uPos();

	return 0;
}
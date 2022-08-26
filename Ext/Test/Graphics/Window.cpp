#include <Ext/Core/Tester.hpp>
#include <Ext/Graphics/Window.hpp>

void TestExtGraphicsWindowInitException()
{
	EXT_TESTER_EXCEPTION(Ext::Graphics::Window window(Ext::Graphics::Point2u(800, 600), "Window title!"))
}

void TestExtGraphicsWindowInit()
{
	Ext::Graphics::Window window(Ext::Graphics::Point2u(800, 600), "Window title!");

	EXT_TESTER_EQUAL(window.Get()         != nullptr);
	EXT_TESTER_EQUAL(window.Size().PosX() == 800);
	EXT_TESTER_EQUAL(window.Size().PosY() == 600);
	EXT_TESTER_EQUAL(window.Title()       == "Window title!");
}

int main(int argc, char* argv[])
{
	TestExtGraphicsWindowInitException();
	TestExtGraphicsWindowInit();

	return 0;
}
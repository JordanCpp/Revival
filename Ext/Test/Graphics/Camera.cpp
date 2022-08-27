#include <Ext/Core/Tester.hpp>
#include <Ext/Graphics/Camera.hpp>

void TestExtGraphicsCamera()
{
	Ext::Graphics::Camera camera(Ext::Graphics::Point2u(25, 35), Ext::Graphics::Point2u(800, 600));

	EXT_TESTER_EQUAL(camera.Pos().PosX() == 25);
	EXT_TESTER_EQUAL(camera.Pos().PosY() == 35);
	EXT_TESTER_EQUAL(camera.Size().PosX() == 800);
	EXT_TESTER_EQUAL(camera.Size().PosY() == 600);

	camera.Pos(Ext::Graphics::Point2u(45, 55));
	camera.Size(Ext::Graphics::Point2u(640, 480));

	EXT_TESTER_EQUAL(camera.Pos().PosX() == 45);
	EXT_TESTER_EQUAL(camera.Pos().PosY() == 55);
	EXT_TESTER_EQUAL(camera.Size().PosX() == 640);
	EXT_TESTER_EQUAL(camera.Size().PosY() == 480);
}

int main(int argc, char* argv[])
{
	TestExtGraphicsCamera();

	return 0;
}
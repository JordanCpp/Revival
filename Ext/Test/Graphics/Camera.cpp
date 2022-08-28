#include <Ext/Core/Tester.hpp>
#include <Ext/Graphics/Camera.hpp>

void TestExtGraphicsCameraInitDefault()
{
	Ext::Graphics::Camera camera;

	EXT_TESTER_EQUAL(camera.Pos().PosX() == 0);
	EXT_TESTER_EQUAL(camera.Pos().PosY() == 0);
	EXT_TESTER_EQUAL(camera.Size().PosX() == 0);
	EXT_TESTER_EQUAL(camera.Size().PosY() == 0);
}

void TestExtGraphicsCameraInitValues()
{
	Ext::Graphics::Camera camera(Ext::Graphics::Point2u(25, 35), Ext::Graphics::Point2u(800, 600));

	EXT_TESTER_EQUAL(camera.Pos().PosX() == 25);
	EXT_TESTER_EQUAL(camera.Pos().PosY() == 35);
	EXT_TESTER_EQUAL(camera.Size().PosX() == 800);
	EXT_TESTER_EQUAL(camera.Size().PosY() == 600);
}

void TestExtGraphicsCameraInitPos()
{
	Ext::Graphics::Camera camera;

	camera.Pos(Ext::Graphics::Point2u(45, 55));

	EXT_TESTER_EQUAL(camera.Pos().PosX() == 45);
	EXT_TESTER_EQUAL(camera.Pos().PosY() == 55);
}

void TestExtGraphicsCameraInitSize()
{
	Ext::Graphics::Camera camera;

	camera.Size(Ext::Graphics::Point2u(640, 480));

	EXT_TESTER_EQUAL(camera.Size().PosX() == 640);
	EXT_TESTER_EQUAL(camera.Size().PosY() == 480);
}

int main(int argc, char* argv[])
{
	TestExtGraphicsCameraInitDefault();
	TestExtGraphicsCameraInitValues();
	TestExtGraphicsCameraInitPos();
	TestExtGraphicsCameraInitSize();

	return 0;
}
#include <Ext/Graphics/Camera.hpp>

Ext::Graphics::Camera::Camera(const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size) :
	_Area(pos, size)
{
}

const Ext::Graphics::Point2u& Ext::Graphics::Camera::Pos()
{
	return _Area.Pos();
}

const Ext::Graphics::Point2u& Ext::Graphics::Camera::Size()
{
	return _Area.Size();
}

void Ext::Graphics::Camera::Pos(const Ext::Graphics::Point2u& pos)
{
	_Area.Pos(pos.PosX(), pos.PosY());
}

void Ext::Graphics::Camera::Size(const Ext::Graphics::Point2u& size)
{
	_Area.Size(size.PosX(), size.PosY());
}
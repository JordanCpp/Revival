#include <Ext/Graphics/Isometric.hpp>

const Ext::Graphics::Point2u& Ext::Graphics::Isometric::CartesianToIsometric(const Ext::Graphics::Point2u& pt)
{
	size_t x = pt.PosX() - pt.PosY();
	size_t y = (pt.PosX() + pt.PosY()) / 2;

	_Current.Pos(x, y);

	return _Current;
}

const Ext::Graphics::Point2u& Ext::Graphics::Isometric::IsometricToCartesian(const Ext::Graphics::Point2u& pt)
{
	size_t x = (2 * pt.PosY() + pt.PosX()) / 2;
	size_t y = (2 * pt.PosY() - pt.PosX()) / 2;

	_Current.Pos(x, y);

	return _Current;
}
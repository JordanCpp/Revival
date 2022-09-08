#ifndef Ext_Graphics_Isometric_hpp
#define Ext_Graphics_Isometric_hpp

#include <Ext/Graphics/Point2u.hpp>

namespace Ext
{
	namespace Graphics
	{
		class Isometric
		{
		public:
			const Ext::Graphics::Point2u& CartesianToIsometric(const Ext::Graphics::Point2u& pt);
			const Ext::Graphics::Point2u& IsometricToCartesian(const Ext::Graphics::Point2u& pt);
		private:
			Ext::Graphics::Point2u _Current;
		};
	}
}

#endif   
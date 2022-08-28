#ifndef Ext_Graphics_Camera_hpp
#define Ext_Graphics_Camera_hpp

#include <Ext/Graphics/Rect2u.hpp>
#include <Ext/Graphics/Point2u.hpp>

namespace Ext
{
	namespace Graphics
	{
		class Camera
		{
		public:
			Camera();
			Camera(const Ext::Graphics::Point2u& pos, const Ext::Graphics::Point2u& size);
			const Ext::Graphics::Point2u& Pos();
			const Ext::Graphics::Point2u& Size();
			void Pos(const Ext::Graphics::Point2u& pos);
			void Size(const Ext::Graphics::Point2u& size);
		private:
			Ext::Graphics::Rect2u _Area;
		};
	}
}

#endif    
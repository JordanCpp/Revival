#ifndef Ext_Graphics_Rect2_hpp
#define Ext_Graphics_Rect2_hpp

#include <Ext/Graphics/Point2.hpp>

namespace Ext
{
	namespace Graphics
	{
		template<typename TYPE>
		class Rect2
		{
		public:
			Rect2() :
				_Pos(0, 0),
				_Size(0, 0)
			{
			}

			Rect2(const TYPE& x, const TYPE& y, const TYPE& w, const TYPE& h) :
				_Pos(x, y),
				_Size(w, h)
			{
			}

			Rect2(const Ext::Graphics::Point2<TYPE>& pos, const Ext::Graphics::Point2<TYPE>& size) :
				_Pos(pos),
				_Size(size)
			{
			}

			const Ext::Graphics::Point2<TYPE>& Pos() const
			{
				return _Pos;
			}

			const Ext::Graphics::Point2<TYPE>& Size() const
			{
				return _Size;
			}

			void Pos(const TYPE& x, const TYPE& y)
			{
				_Pos._PosX = x;
				_Pos._PosY = y;
			}

			void Size(const TYPE& x, const TYPE& y)
			{
				_Size._PosX = x;
				_Size._PosY = y;
			}

			bool Contains(const Ext::Graphics::Point2<TYPE>& pos)
			{
				return pos.PosX() >= _Pos.PosX() && pos.PosY() >= _Pos.PosY() && pos.PosX() <= _Pos.PosX() + _Size.PosX() && pos.PosY() <= _Pos.PosY() + _Size.PosY();
			}
		private:
			Ext::Graphics::Point2<TYPE> _Pos;
			Ext::Graphics::Point2<TYPE> _Size;
		};
	}
}

#endif   
#ifndef Ext_Graphics_Font_hpp
#define Ext_Graphics_Font_hpp

#include <SDL_ttf.h>
#include <string>

namespace Ext
{
	namespace Graphics
	{
		class Font
		{
		public:
			Font(TTF_Font*, size_t size);
			~Font();
			TTF_Font* Get();
			size_t Size();
		private:
			size_t _Size;
			TTF_Font* _Font;
		};
	}
}

#endif    
#ifndef Ext_Formats_TextFile_hpp
#define Ext_Formats_TextFile_hpp

#include <string>

namespace Ext
{
	namespace Formats
	{
		class TextFile
		{
		public:
			TextFile(const std::string& source);
			const std::string& Content();
		private:
			std::string _Content;
		};
	}
}

#endif    
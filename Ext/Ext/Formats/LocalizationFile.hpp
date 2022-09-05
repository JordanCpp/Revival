#ifndef Ext_Formats_LocalizationFile_hpp
#define Ext_Formats_LocalizationFile_hpp

#include <string>
#include <unordered_map>

namespace Ext
{
	namespace Formats
	{
		class LocalizationFile
		{
		public:
			void Add(const std::string& number, const std::string& value);
			void Add(size_t number, const std::string& value);
			const std::string& Get(const std::string& number);
			const std::string& Get(size_t number);
		private:
			std::unordered_map<std::string, std::string> _Strings;
		};
	}
}

#endif    
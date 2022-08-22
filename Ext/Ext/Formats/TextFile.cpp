#include <Ext/Formats/TextFile.hpp>

Ext::Formats::TextFile::TextFile(const std::string& source)
{
	_Content = source;
}

const std::string& Ext::Formats::TextFile::Content()
{
	return _Content;
}
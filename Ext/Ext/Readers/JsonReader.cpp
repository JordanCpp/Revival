#include <Ext/Readers/JsonReader.hpp>
#include <stdexcept>

void Ext::Readers::JsonReader::Parse(const std::string& source)
{
	if (_Document.Parse(source.c_str()).HasParseError())
		throw std::runtime_error(source);
}

rapidjson::Document* Ext::Readers::JsonReader::Reader()
{
	return &_Document;
}
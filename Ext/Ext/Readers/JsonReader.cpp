#include <Ext/Readers/JsonReader.hpp>
#include <Ext/Core/RuntimeError.hpp>

void Ext::Readers::JsonReader::Parse(const std::string& source)
{
	if (_Document.Parse(source.c_str()).HasParseError())
		throw Ext::Core::RuntimeError(source);
}

rapidjson::Document* Ext::Readers::JsonReader::Reader()
{
	return &_Document;
}
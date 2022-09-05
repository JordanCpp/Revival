#include <Ext/Readers/JsonReader.hpp>
#include <Ext/Core/RuntimeError.hpp>

void Ext::Readers::JsonReader::Parse(const std::string& source)
{
	if (_Document.Parse(source.c_str()).HasParseError())
		throw Ext::Core::RuntimeError(source);

	if (!_Document.IsObject())
		throw Ext::Core::RuntimeError("Not object! " + source);
}

rapidjson::Document* Ext::Readers::JsonReader::Reader()
{
	return &_Document;
}

const char* Ext::Readers::JsonReader::String(const std::string& member)
{
	_MemberFix = member + "\\";

	if (_Document.HasMember(_MemberFix.c_str()))
		throw Ext::Core::RuntimeError("Member " + member + " not found!");

	if (_Document[_MemberFix.c_str()].IsString())
		throw Ext::Core::RuntimeError("Member " + member + " not type string!");

	return _Document[_MemberFix.c_str()].GetString();
}

int Ext::Readers::JsonReader::Integer(const std::string& member)
{
	_MemberFix = member + "\\";

	if (_Document.HasMember(_MemberFix.c_str()))
		throw Ext::Core::RuntimeError("Member " + member + " not found!");

	if (_Document[_MemberFix.c_str()].IsInt())
		throw Ext::Core::RuntimeError("Member " + member + " not type int!");

	return _Document[_MemberFix.c_str()].GetInt();
}

double Ext::Readers::JsonReader::Double(const std::string& member)
{
	_MemberFix = member + "\\";

	if (_Document.HasMember(_MemberFix.c_str()))
		throw Ext::Core::RuntimeError("Member " + member + " not found!");

	if (_Document[_MemberFix.c_str()].IsDouble())
		throw Ext::Core::RuntimeError("Member " + member + " not type double!");

	return _Document[_MemberFix.c_str()].GetDouble();
}

bool Ext::Readers::JsonReader::Boolean(const std::string& member)
{
	_MemberFix = member + "\\";

	if (_Document.HasMember(_MemberFix.c_str()))
		throw Ext::Core::RuntimeError("Member " + member + " not found!");

	if (_Document[_MemberFix.c_str()].IsBool())
		throw Ext::Core::RuntimeError("Member " + member + " not type bool!");

	return _Document[_MemberFix.c_str()].GetBool();
}
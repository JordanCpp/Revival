#include <Ext/Formats/LocalizationFile.hpp>
#include <Ext/Core/RuntimeError.hpp>

void Ext::Formats::LocalizationFile::Add(const std::string& number, const std::string& value)
{
    auto i = _Strings.find(number);

    if (i == _Strings.end())
        _Strings.emplace(number, value);
    else
        i->second = value;
}

void Ext::Formats::LocalizationFile::Add(size_t number, const std::string& value)
{
    Add(std::to_string(number), value);
}

const std::string& Ext::Formats::LocalizationFile::Get(const std::string& number)
{
    auto i = _Strings.find(number);

    if (i == _Strings.end())
        throw Ext::Core::RuntimeError("Not found number " + number);

    return i->second;
}

const std::string& Ext::Formats::LocalizationFile::Get(size_t number)
{
    return Get(std::to_string(number));
}
#include <Ext/Loaders/LocalizationFileLoader.hpp>

Ext::Formats::LocalizationFile* Ext::Loaders::LocalizationFileLoader::Load(Ext::Readers::JsonReader* reader)
{
	auto result = new Ext::Formats::LocalizationFile;

	for (auto i = reader->Reader()->MemberBegin(); i != reader->Reader()->MemberEnd(); i++)
	{
		result->Add(i->name.GetString(), i->value.GetString());
	}

	return result;
}
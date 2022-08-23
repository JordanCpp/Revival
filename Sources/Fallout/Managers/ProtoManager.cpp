#include <Fallout/Managers/ProtoManager.hpp>
#include <Ext/rapidjson/pointer.h>

Fallout::Managers::ProtoManager::ProtoManager(Ext::Managers::TextFileManager* textFileManager, Ext::Readers::JsonReader* jsonReader) :
	_TextFileManager(textFileManager),
	_JsonReader(jsonReader)
{
}

const Fallout::Game::CritterProto& Fallout::Managers::ProtoManager::Proto(const std::string& file)
{
	return	_CritterProto;
}
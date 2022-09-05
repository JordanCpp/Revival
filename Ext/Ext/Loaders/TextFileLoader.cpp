#include <Ext/Loaders/TextFileLoader.hpp>
#include <Ext/Core/RuntimeError.hpp>

Ext::Formats::TextFile* Ext::Loaders::TextFileLoader::Load(const std::string& path)
{
	_Input.open(path, std::ios::in);

	if (!_Input.is_open())
			throw Ext::Core::RuntimeError("Not found file " + path);
	
	_Result.clear();

	std::string line;

	while (getline(_Input, line))
	{
		_Result += line;
		_Result += '\n';
	}

	_Input.close();

	return new Ext::Formats::TextFile(_Result);
}
#include "PathManager.hpp"
#include <Ext/Managers/PathManager.hpp>

Ext::Managers::PathManager::PathManager(const std::string& root) :
	_Root(root)
{
}

const std::string& Ext::Managers::PathManager::Root()
{
	return _Root;
}

const std::string& Ext::Managers::PathManager::Path(const std::string& dir1, const std::string& dir2, const std::string& dir3, const std::string& file)
{
	_Path.clear();

	_Path += _Root;
	_Path += dir1;
	_Path += dir2;
	_Path += dir3;
	_Path += file;

	return _Path;
}

const std::string& Ext::Managers::PathManager::Path(const std::string& dir1, const std::string& dir2, const std::string& file)
{
	return Path(dir1, dir2, "", file);
}

const std::string& Ext::Managers::PathManager::Path(const std::string& dir1, const std::string& file)
{
	return Path(dir1, "", "", file);
}
#include <Ext/Core/Tester.hpp>
#include <Ext/Managers/PathManager.hpp>

void TestExtManagersPathManagerInit()
{
	Ext::Managers::PathManager pathManager("RootPath/");

	EXT_TESTER_EQUAL(pathManager.Root() == "RootPath/");
}

void TestExtManagersPathDir1File()
{
	Ext::Managers::PathManager pathManager("RootPath/");

	EXT_TESTER_EQUAL(pathManager.Path("Dir1/", "File.ext") == "RootPath/Dir1/File.ext");
}

void TestExtManagersPathDir2File()
{
	Ext::Managers::PathManager pathManager("RootPath/");

	EXT_TESTER_EQUAL(pathManager.Path("Dir1/", "Dir2/", "File.ext") == "RootPath/Dir1/Dir2/File.ext");
}

void TestExtManagersPathDir3File()
{
	Ext::Managers::PathManager pathManager("RootPath/");

	EXT_TESTER_EQUAL(pathManager.Path("Dir1/", "Dir2/", "Dir3/", "File.ext") == "RootPath/Dir1/Dir2/Dir3/File.ext");
}

int main(int argc, char* argv[])
{
	TestExtManagersPathManagerInit();
	TestExtManagersPathDir1File();
	TestExtManagersPathDir2File();
	TestExtManagersPathDir3File();

	return 0;
}
#ifndef Ext_Managers_PathManager_hpp
#define Ext_Managers_PathManager_hpp

#include <string>

namespace Ext
{
    namespace Managers
    {
        class PathManager
        {
        public:
            PathManager(const std::string& root);
            const std::string& Path(const std::string& dir1, const std::string& dir2, const std::string& dir3, const std::string& file);
            const std::string& Path(const std::string& dir1, const std::string& dir2, const std::string& file);
            const std::string& Path(const std::string& dir1, const std::string& file);
        private:
            std::string _Root;
            std::string _Path;
        };
    }
}

#endif
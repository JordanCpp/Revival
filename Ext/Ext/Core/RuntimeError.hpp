#ifndef Ext_Core_RuntimeError_hpp
#define Ext_Core_RuntimeError_hpp

#include <stdexcept>

namespace Ext
{
    namespace Core
    {
        class RuntimeError: public std::runtime_error
        {
        public:
            RuntimeError(const std::string& message);
        private:
        };
    }
}

#endif
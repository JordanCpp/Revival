#ifndef Ext_Events_Eventer_hpp
#define Ext_Events_Window_hpp

#include <Ext/Events/Event.hpp>

namespace Ext
{
    namespace Events
    {
        class Eventer
        {
        public:
            Eventer();
            bool GetEvent(Ext::Events::Event& event);
            void StopEvent();
        private:
            bool _Running;
        };
    }
}

#endif
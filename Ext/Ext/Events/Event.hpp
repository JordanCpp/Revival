#ifndef Ext_Events_Event_hpp
#define Ext_Events_Event_hpp

namespace Ext
{
	namespace Events
	{
		enum
		{
			IsQuit = 1,
			IsMouseMove,
			IsMouseClick
		};

		class Quit
		{
		public:
			size_t Type;
		};

		class Mouse
		{

		public:
			enum
			{
				ButtonLeft,
				ButtonRight
			};

			enum
			{
				StateUp,
				StateDown
			};

			size_t Type;
			size_t PosX;
			size_t PosY;
			size_t State;
			size_t Button;
		};

		class Event
		{
		public:
			union
			{
				size_t Type;
				Events::Quit Quit;
				Events::Mouse Mouse;
			};
		};
	}
}

#endif
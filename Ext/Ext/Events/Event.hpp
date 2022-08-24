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
			IsMouseDown,
			IsMouseUp
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
				Left,
				Right
			};

			enum
			{
				Up,
				Down
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
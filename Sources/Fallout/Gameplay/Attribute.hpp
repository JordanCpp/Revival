#ifndef Fallout_Gameplay_Attribute_hpp
#define Fallout_Gameplay_Attribute_hpp

namespace Fallout
{
    namespace Gameplay
    {
        class Attribute
        {
        public:
            Attribute();
            Attribute(size_t id, int number,  int percent);
            size_t Id();
            int Number();
            int Percent();
            void Id(size_t value);
            void Number(int value);
            void Percent(int value);
        private:
            size_t _Id;
            int _Number;
            int _Percent;
        };
    }
}

#endif
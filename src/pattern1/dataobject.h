
#ifndef DATA_OBJECT_H_
#define DATA_OBJECT_H_

#include <string>

namespace design_pattern
{
    class DataObject
    {
    public:
        static DataObject* create();
        virtual std::string getName(int id) = 0;
    };
}

#endif // DATA_OBJECT_H_

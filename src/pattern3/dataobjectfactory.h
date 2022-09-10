
#ifndef DATA_OBJECT_FACTORY_H_
#define DATA_OBJECT_FACTORY_H_

#include "dataobject.h"

namespace design_pattern
{
    class DataObjectFactory
    {
    public:
        DataObjectFactory() = default;
        virtual ~DataObjectFactory() = default;
        virtual DataObject* create() = 0;
    };
}

#endif // DATA_OBJECT_FACTORY_H_

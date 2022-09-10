
#ifndef DB_DATA_OBJECT_FACTORY_H_
#define DB_DATA_OBJECT_FACTORY_H_

#include "dataobjectfactory.h"

namespace design_pattern
{
    class DBDataObjectFactory : public DataObjectFactory
    {
    public:
        DBDataObjectFactory() = default;
        virtual ~DBDataObjectFactory() = default;
        DataObject* create();
    };
}

#endif // DB_DATA_OBJECT_FACTORY_H_

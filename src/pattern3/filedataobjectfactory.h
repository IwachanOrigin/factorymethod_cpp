
#ifndef FILE_DATA_OBJECT_FACTORY_H_
#define FILE_DATA_OBJECT_FACTORY_H_

#include "dataobjectfactory.h"

namespace design_pattern
{
    class FileDataObjectFactory : public DataObjectFactory
    {
    public:
        FileDataObjectFactory() = default;
        virtual ~FileDataObjectFactory() = default;
        DataObject* create();
    };
}

#endif // FILE_DATA_OBJECT_FACTORY_H_

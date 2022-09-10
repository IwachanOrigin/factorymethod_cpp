
#ifndef DATA_OBJECT_FACTORY_H_
#define DATA_OBJECT_FACTORY_H_

#include "dataobject.h"

namespace design_pattern
{
    class DataObjectFactory
    {
    public:
        const static int STANDALONE = 0;
        const static int NETWORKING = 1;

        DataObjectFactory(int type);
        ~DataObjectFactory() = default;
        DataObject* create();

    private:
        int m_type;
    };
}

#endif // DATA_OBJECT_FACTORY_H_

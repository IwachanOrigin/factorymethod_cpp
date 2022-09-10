
#include "dataobjectfactory.h"
#include "filedataobject.h"
#include "dbdataobject.h"

using namespace design_pattern;

DataObjectFactory::DataObjectFactory(int type)
    : m_type(type)
{}

DataObject* DataObjectFactory::create()
{
    DataObject *result = nullptr;
    if (m_type == STANDALONE)
    {
        result = new FileDataObject();
    }
    else if (m_type == NETWORKING)
    {
        result = new DBDataObject();
    }

    return result;
}

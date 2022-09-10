
#include "dbdataobjectfactory.h"
#include "dbdataobject.h"

using namespace design_pattern;

DataObject* DBDataObjectFactory::create()
{
    return new DBDataObject();
}

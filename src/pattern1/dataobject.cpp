
#include "dataobject.h"
#include "filedataobject.h"
#include "dbdataobject.h"

using namespace design_pattern;

DataObject* DataObject::create()
{
    //return new FileDataObject();
    return new DBDataObject();
}

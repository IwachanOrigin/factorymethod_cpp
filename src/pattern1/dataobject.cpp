
#include "dataobject.h"
#include "filedataobject.h"

using namespace design_pattern;

DataObject* DataObject::create()
{
    return new FileDataObject();
}

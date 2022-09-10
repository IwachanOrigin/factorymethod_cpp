
#include "filedataobjectfactory.h"
#include "filedataobject.h"

using namespace design_pattern;

DataObject* FileDataObjectFactory::create()
{
    return new FileDataObject();
}

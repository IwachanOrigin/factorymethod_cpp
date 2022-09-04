
#include "dataobject.h"
#include <iostream>

using namespace design_pattern;

int main(int argc, char *argv[])
{
    // Both FileDataObject and DBDataObject classes are created by inheriting from DataObject class.
    // The DataObject class creates a FileDataObject class or DBDataObject class in the create function.
    // This allows you to use the FileDataObject and DBDataObject classes without being aware of them from main.
    // However, it is necessary to design a mechanism that allows both to be handled with the same interface.
    // Therefore, for example, it is not possible to give an initialization file of the FileDataObject class from a higher level.
    // (It is possible by extending the interface of the DataObject class, but that seems to be pulling in the FileDataObject class...)
    // As described in the book's usage examples, if the FileDataObject class is temporary and the DBDataObject class is used later, then the FileDataObject class is.
    // I think it is a valid mechanism.

    DataObject* dataObject = DataObject::create();
    std::cout << "data[0] = " << dataObject->getName(0) << std::endl;

    return 0;
}

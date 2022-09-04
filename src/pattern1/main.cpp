
#include "filedataobject.h"
#include <iostream>

using namespace design_pattern;

int main(int argc, char *argv[])
{
    FileDataObject fdo;
    fdo.init("readfile.txt");
    std::cout << "data[0] = " << fdo.getName(0) << std::endl;

    return 0;
}

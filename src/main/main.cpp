
/**
 * @date 8th Sep. 2020
 * Copyright (c) Yuji Iwanaga
 */

#include "singleton.h"
#include <iostream>

int main(int argc, char **argv)
{
    std::wcout << Singleton::getInstance().getData() << std::endl;
}


#include "filedataobject.h"
#include <fstream>

using namespace design_pattern;

FileDataObject::FileDataObject()
{
    std::ifstream ifstr("readfile.txt", std::ios::in | std::ios::binary);
    if (ifstr)
    {
        std::string lineValue = "";
        int id = 0;
        while (std::getline(ifstr, lineValue))
        {
            m_data.insert(std::make_pair(id++, lineValue));
        }
    }
}

std::string FileDataObject::getName(const int id)
{
    if (m_data.empty())
    {
        return "";
    }
    return m_data.at(id);
}


#include "factorymethod.h"
#include <fstream>

using namespace design_pattern;

bool FileDataObject::init(const std::string filename)
{
    std::ifstream ifstr(filename, std::ios::in | std::ios::binary);
    if (!ifstr)
    {
        return false;
    }

    std::string lineValue = "";
    int id = 0;
    while (std::getline(ifstr, lineValue))
    {
        m_data.insert(std::make_pair(id++, lineValue));
    }

    return true;
}

std::string FileDataObject::getName(const int id)
{
    if (m_data.empty())
    {
        return "";
    }
    return m_data.at(id);
}

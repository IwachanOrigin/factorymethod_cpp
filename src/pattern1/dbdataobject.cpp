
#include "dbdataobject.h"
#include <fstream>

using namespace design_pattern;

DBDataObject::DBDataObject()
{
    m_data.insert(std::make_pair(0, "aaaaa"));
    m_data.insert(std::make_pair(1, "bbbbb"));
    m_data.insert(std::make_pair(2, "ccccc"));
}

std::string DBDataObject::getName(const int id)
{
    if (m_data.empty())
    {
        return "";
    }
    return m_data.at(id);
}

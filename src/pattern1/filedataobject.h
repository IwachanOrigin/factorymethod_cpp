
#ifndef FACTORY_METHOD_H_
#define FACTORY_METHOD_H_

#include "dataobject.h"
#include <string>
#include <map>

namespace design_pattern
{
    class FileDataObject : public DataObject
    {
    public:
        FileDataObject() = default;
        bool init(const std::string filename);
        std::string getName(const int id);

    private:
        std::map<int, std::string> m_data;
    };
}

#endif // FACTORY_METHOD_H_


#ifndef FILE_DATA_OBJECT_H_
#define FILE_DATA_OBJECT_H_

#include "dataobject.h"
#include <string>
#include <map>

namespace design_pattern
{
    class FileDataObject : public DataObject
    {
    public:
        FileDataObject();
        ~FileDataObject() = default;
        std::string getName(const int id);

    private:
        std::map<int, std::string> m_data;
    };
}

#endif // FILE_DATA_OBJECT_H_

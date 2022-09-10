
#ifndef DB_DATA_OBJECT_H_
#define DB_DATA_OBJECT_H_

#include "dataobject.h"
#include <string>
#include <map>

namespace design_pattern
{
    class DBDataObject : public DataObject
    {
    public:
        DBDataObject();
        ~DBDataObject() = default;
        std::string getName(const int id);

    private:
        std::map<int, std::string> m_data;
    };
}

#endif // DB_DATA_OBJECT_H_

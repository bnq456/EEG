#include "EG_Datastruct.h"

DataStruct::DataStruct() :
    data(NULL)
{

}

DataStruct::~DataStruct()
{
    if(data) {
        delete []data;
    }
}

void DataStruct::ClearAllData()
{
    if(data) {
        delete []data;
    }
}

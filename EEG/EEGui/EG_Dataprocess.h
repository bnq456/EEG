#ifndef EG_DATAPROCESS_H
#define EG_DATAPROCESS_H

#include <QStringList>
#include "EG_Datastruct.h"
#include "EG_Headerprocess.h"

class DataProcess : public DataStruct
{
public:
    DataProcess(const QStringList& filelist);

private:
//! 读入文件1dat2vhdr3vmrk
    QStringList fileList;



};

#endif // EG_DATAPROCESS_H

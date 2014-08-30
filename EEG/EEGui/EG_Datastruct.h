#ifndef EG_DATASTRUCT_H
#define EG_DATASTRUCT_H

#include "EG_Global.h"
#include <QTime>
#include <QVector>

class DataStruct
{
public:
    DataStruct();
    virtual ~DataStruct();
    void ClearAllData();

private:
//! 通道数
    int nChannels;
//! 数据量
    unsigned int nDatas;
//! 每个通道数据量
    unsigned int nEachChannel;
//! 采样起始时间
    QTime startTime;
//! 采样结束时间
    QTime endTime;
//! 采样率
    int sampleRate;
//! 选取通道号
    QVector<int> ChannelOfInterest;
//! 通道名
    QVector<QString> ChannelName;
//! 数据
    float *data;
};

#endif // EG_DATASTRUCT_H

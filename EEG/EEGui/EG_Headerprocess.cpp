#include "EG_Headerprocess.h"

HeaderProcess::HeaderProcess(const QStringList& filelist) :
    fileList(filelist) ,
    isOk(false)
{
    ReadFile();
}

void HeaderProcess::ReadFile()
{
    if(fileList.at(0).contains("vhdr")) {
        QFile file(fileList.at(0));
        if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            vhdrRaw = file.readAll();
        }
    }
    if(fileList.at(1).contains("vmrk")) {
        QFile file(fileList.at(1));
        if(file.open(QIODevice::ReadOnly | QIODevice::Text)) {
            vmrkRaw = file.readAll();
        }
    }
}

int HeaderProcess::FindBrackets(const QString& text,const QString& keyword)
{
    //int brackLeft = text.indexOf("[",begin,Qt::CaseSensitive);
    //int brackRight = text.indexOf("]",begin,Qt::CaseSensitive);
    //if (keyword == text.mid(brackLeft,brackRight-brackLeft)) {
    //    return brackRight;
    //}
    return 0;
}

void HeaderProcess::InputData(const QString& text,const QVector< QPair<QString, QString> >& container)
{

}

const QVector< QPair<QString, QString> >& HeaderProcess::GetCommon_Infos()
{
    return Common_Infos;
}

const QVector< QPair<QString, QString> >& HeaderProcess::GetUser_Infos()
{
    return User_Infos;
}

const QVector< QPair<QString, QString> >& HeaderProcess::GetBinary_Infos()
{
    return Binary_Infos;
}

const QVector< QPair<QString, QString> >& HeaderProcess::GetChannel_Infos()
{
    return Channel_Infos;
}

const QVector< QPair<QString, QString> >& HeaderProcess::GetChannel_User_Infos()
{
    return Channel_User_Infos;
}

const QVector< QPair<QString, QString> >& HeaderProcess::GetCoordinates()
{
    return Channel_User_Infos;
}

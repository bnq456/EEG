#ifndef EG_HEADERPROCESS_H
#define EG_HEADERPROCESS_H

#include <QString>
#include <QStringList>
#include <QVector>

class HeaderProcess
{
public:
    HeaderProcess(const QStringList& filelist);

private:
    QStringList fileList;

    QVector< QPair<QString, QString> > Common_Infos;
    QVector< QPair<QString, QString> > User_Infos;
    QVector< QPair<QString, QString> > Binary_Infos;
    QVector< QPair<QString, QString> > Channel_Infos;
    QVector< QPair<QString, QString> > Channel_User_Infos;
    QVector< QPair<QString, QString> > Coordinates;

};

#endif // EG_HEADERPROCESS_H

#ifndef EG_HEADERPROCESS_H
#define EG_HEADERPROCESS_H

#include <QString>
#include <QStringList>
#include <QVector>
#include <QFile>

/****************  HeaderProcess  ****************
  类功能描述：
  读入两个参数文件 提取内容存入QString vhdrRaw;QString vmrkRaw;
  根据文件中的标签，把对应的数据保存到相应的QVector中
*****************  HeaderProcess  ****************/
class HeaderProcess
{
public:
    // 1 vhdr 2 vmdk
    HeaderProcess(const QStringList& filelist);
    bool HeaderProcessIsOk() { return isOk; }
public:
    const QVector< QPair<QString, QString> >& GetCommon_Infos();
    const QVector< QPair<QString, QString> >& GetUser_Infos();
    const QVector< QPair<QString, QString> >& GetBinary_Infos();
    const QVector< QPair<QString, QString> >& GetChannel_Infos();
    const QVector< QPair<QString, QString> >& GetChannel_User_Infos();
    const QVector< QPair<QString, QString> >& GetCoordinates();
private:
    void ReadFile();


    /****************  InputData  ****************
      输入： []标签下面的数据 例如  Ch1=Fp1,TP10,,µV Ch2=Fp2,TP9,,µV
      输出：
      功能： 将数据存入响应的QVector中
    *****************  InputData  ****************/
    void InputData(const QString& text,const QVector< QPair<QString, QString> >& container);

    /****************  FindBrackets  *************
      输入： 原始文件数据 需要寻找的标签名
      输出： 找到标签[bbb] 返回右侧方括号的索引值
      功能： 找到相应标签的位置
    *****************  FindBrackets  *************/
    int FindBrackets(const QString& text,const QString& keyword);

private:
    bool isOk;
private:
    QStringList fileList;
    QString vhdrRaw;
    QString vmrkRaw;
private:
    QVector< QPair<QString, QString> > Common_Infos;
    QVector< QPair<QString, QString> > User_Infos;
    QVector< QPair<QString, QString> > Binary_Infos;
    QVector< QPair<QString, QString> > Channel_Infos;
    QVector< QPair<QString, QString> > Channel_User_Infos;
    QVector< QPair<QString, QString> > Coordinates;

};

#endif // EG_HEADERPROCESS_H

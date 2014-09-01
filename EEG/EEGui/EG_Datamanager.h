#ifndef EG_DATAMANAGER_H
#define EG_DATAMANAGER_H

#include <QThread>

class DataManager : public QThread
{
    Q_OBJECT
public:
    explicit DataManager(QObject *parent = 0);

signals:

public slots:

};

#endif // EG_DATAMANAGER_H

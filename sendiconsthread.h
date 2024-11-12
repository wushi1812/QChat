#ifndef SENDICONSTHREAD_H
#define SENDICONSTHREAD_H

#include <QThread>
#include<QSettings>
#include<QFile>
class SendiconsThread : public QThread
{
    Q_OBJECT
public:
    explicit SendiconsThread();
    ~SendiconsThread();
    void initSend(QString id);
signals:
    void sendicon(QByteArray icondata);
    void overmission();
protected:
    void run();
public:
    QString sendid;
    QString inipath;
};

#endif // SENDICONSTHREAD_H

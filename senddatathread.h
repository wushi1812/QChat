#ifndef SENDDATATHREAD_H
#define SENDDATATHREAD_H
#include<QThread>
#include<QFile>
#include<QFileInfo>
#include<QByteArray>
#include<QMutex>
#include<QTcpSocket>
class SendDataThread : public QThread
{
    Q_OBJECT
public:
    explicit SendDataThread();
    ~SendDataThread();
    void initdata(QString path,QString my,QString f);

signals:
    void sendProgress(int pro);
    void sigFinish();
    void sendbyte(QByteArray byte);
private slots:
    void endSlot();
    void stopandstartSlot();
protected:
    void run();
public:
    bool stop;
    QString datapath;
    int pro;
    QString myid;
    QString fid;

    int all;
    int oncedata=50000;
    QByteArray readdata;
    QString filename;

    QMutex m_mutex;
};

#endif // SENDDATATHREAD_H

#include "senddatathread.h"
#include<QDebug>

SendDataThread::SendDataThread()
{
    connect(this, &SendDataThread::finished, this ,&QObject::deleteLater);
    connect(this,SIGNAL(finished()),this,SLOT(endSlot()));
    pro=0;
    stop=false;
}
SendDataThread::~SendDataThread()
{
    qDebug() << "destory SendDataThread";
}

void SendDataThread::initdata(QString path,QString my,QString f)
{
    myid=my;
    fid=f;
    datapath=path;
    QFile dataFile(datapath);
    dataFile.open(QIODevice::ReadOnly);
    readdata=dataFile.readAll();
    QFileInfo info(datapath);
    filename=info.fileName();
    dataFile.close();
}



void SendDataThread::endSlot()
{
    delete this;
}

void SendDataThread::stopandstartSlot()
{
    if(!stop)
    {
        m_mutex.lock();// 等待线程停止
        stop=true;
        qDebug() << "传输暂停";
    }else
    {
        m_mutex.unlock();
        stop=false;
        qDebug() << "传输开始";
    }
}

void SendDataThread::run()
{
    int allsize=readdata.size();
    all=allsize;
    qDebug()<<"剩下："<<readdata.size();
    //data : id+类型+文件大小+接收方id+文件名+数据文件
    QByteArray sendid;sendid+=myid; sendid.resize(4);
    QByteArray sign; sign+="data";
    QByteArray size;
    QByteArray reid;reid+=fid; reid.resize(4);
    QByteArray dataname; dataname+=filename; dataname.resize(100);
    while(allsize>0&&!stop)
    {
        m_mutex.lock();
        QByteArray byte=readdata.left(oncedata);
        readdata.remove(0,oncedata);
        size+=QString::number(byte.size()); size.resize(8);
        allsize-=byte.size();
        byte.prepend(dataname);
        byte.prepend(reid);
        byte.prepend(size);
        byte.prepend(sign);
        byte.prepend(sendid);
        emit sendbyte(byte);
        int temp=100-100*((double)allsize/all);
        if(pro!=temp)
        {
            pro=temp;
            emit sendProgress(pro);
        }
        m_mutex.unlock();
    }
    emit sigFinish();
}

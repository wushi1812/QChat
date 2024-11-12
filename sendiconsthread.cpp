#include "sendiconsthread.h"

SendiconsThread::SendiconsThread()
{

}

SendiconsThread::~SendiconsThread()
{

}

void SendiconsThread::initSend(QString id)
{
    sendid=id;
    inipath="D:/server_inidata/friends/friends_"+id+".ini";

}

void SendiconsThread::run()
{
    QSettings inifile(inipath,QSettings::IniFormat);
    inifile.setIniCodec("UTF-8");
    QStringList f_ids=friendsFile->childGroups();
    QFile iconfile=new QFile();
    foreach (QString fid, f_ids) {
        iconfile.setFileName("D:/server_inidata/all_img/"+fid+".png");
        iconfile.open(QIODevice::ReadOnly);
        QByteArray icondata=iconfile.readAll();
        iconfile.close();
        emit sendicon(icondata);
    }
    emit overmission();
}


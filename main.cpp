#include"logindialog.h"
#include <QApplication>
#include"mainwidget.h"
#include"connect/connection.h"
#include<QMessageBox>
#include<QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWidget w;

    //w.show();
    LoginDialog w;
    if(!createConnection())
    {
        qDebug()<<"连接失败";
    }
    qDebug()<<"连接成功";

    w.show();

    return a.exec();
}

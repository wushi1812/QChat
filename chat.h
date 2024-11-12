#ifndef CHAT_H
#define CHAT_H

#include <QWidget>
#include"chatpop/chatpop.h"
#include"dataitem.h"
#include"allhistoryitem.h"
#include"senddatathread.h"

#include<QListWidgetItem>
#include<QDateTime>
#include<QKeyEvent>

#include<QSqlQuery>
#include<QSqlRecord>
#include<QFileDialog>
#include<QFile>
#include<QFileInfo>
#include<QThread>
#include<QTcpSocket>

namespace Ui {
class Chat;
}


class Chat : public QWidget
{
    Q_OBJECT

public:
    explicit Chat(QWidget *parent = 0);
    ~Chat();
private:
    Ui::Chat *ui;
public:
    void setid(int fid,int mid);
    void dealMessage(Chatpop *messageW,QListWidgetItem *item,QString text,QString time,Chatpop::User_Type type);
    void dealMessageTime(QString curMsgTime);
    void resizeEvent(QResizeEvent *event);//窗口变化->listwidgetitem里的气泡变化
    void getMessage(QString text);
    void update20();
    void DataSend(QString path);
protected:
    bool eventFilter(QObject *obj, QEvent *event);//键盘事件的响应
//    void mouseMoveEvent(QMouseEvent *e);
//    void mousePressEvent(QMouseEvent *e);
//    void mouseReleaseEvent(QMouseEvent *);
    void closeEvent(QCloseEvent *event);

signals:
    void closeChat(QString wid);
    void sendMessage(QString mid,QString reid,QString message);
    void sendData(QByteArray data);
private slots:
    void on_pushButton_enter_clicked();
//    void on_chatButton_close_clicked();
//    void on_chatButton_min_clicked();

    void on_pushButton_data_clicked();

    void on_pushButton_history_clicked();

    void on_history_data_Button_clicked();

    void on_history_all_pushButton_clicked();

public:
    QListWidget *listWidget;
    QPoint mousePoint;
    bool mousePressed;

    int fid;int myid;
    QString mname;QString fname;
    QString ficon;
    QString myicon;
    QList<QListWidgetItem*> chathistorys;
    QTcpSocket *mysockt;


};

#endif // CHAT_H

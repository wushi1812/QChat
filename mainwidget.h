#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>

#include <QScrollBar>
#include<QSharedPointer>
#include <QListWidget>
#include<QListWidgetItem>
#include <QMenu>
#include <QMouseEvent>
#include <QLineEdit>
#include<QMap>
#include<QFileDialog>
#include<QByteArray>
#include <QImage>
#include <QPixmap>
#include<QPainter>
#include <QFile>
#include<QSettings>

#include"chatpop/chatpop.h"
#include"Buddy/personlistbuddy.h"
#include "messegeitem.h"
#include "frienditem.h"
#include"chat.h"
#include"personlist.h"
#include"connect/connection.h"
#include"sendiconsthread.h"

#include<QTcpServer>
#include<QTcpSocket>
#include<QHostAddress>


namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

    //消息页面
    void setMessageId(int id); //处理案件数据
    void setListMessage();  //设置列表消息

    void setListFriends();  //设置联系人列表


    //TCP通讯
    void initSever();
    void initSocket();
    void Listen();//服务器段监听
    void Closlisten();
    void link();//用户端连接

    void sendicon(QString iconpath);
    void sendini(QTcpSocket *client,QString id);
    void updateGroup();

protected:
    //bool eventFilter(QObject *obj, QEvent *event);//键盘事件的响应
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *);
signals:

private slots:
    void on_pushButton_messege_clicked();

    void on_pushButton_friend_clicked();
    //联系人页面槽函数：

    void on_pushButton_space_clicked();

    void on_listMessage_doubleClicked(const QModelIndex &index);

    void openChatSlot(QString id);
    void addgroupSlot(QString gid,QString groupname);
    void delegroupSlot(QString gid,QString groupname);

    //==
    void newConnectSlot();
    void disConnectSlot();
    void SeverreadyReadSlot();
    void SocketreadyReadSlot();
    void on_pushButton_changeimg_clicked();
    void on_closeButton_clicked();
    //==
    void sendMessageSlot(QString senid,QString reid,QString message);
    void CloseChatSlot(QString wid);
    void on_minButton_clicked();

private:
    Ui::MainWidget *ui;

public:
    QPoint mousePoint;
    bool mousePressed;

    QListWidgetItem * currentItem;
    QMap<QListWidgetItem*,QString> messageIds;
    QMap<Messegeitem*,QString> messageWidgets;

    QString accountid;//当前账号id
    QString myname;
    QTcpServer *tcpServer;//服务器
    QList<QTcpSocket*> socketlist;//连接的用户
    QMap<QTcpSocket*,QString> socketmap; //key:连接的用户,value:id
    QTcpSocket *tcpSocket;//用户端
    bool socketstate;//客户端连接状态
    bool friendupdate;//是否更新
   //
    QMap<QString,QListWidgetItem*> groupsMap; //key:分组id, value:组
    //聊天窗口组
    QMap<QString,Chat *> ChatWinds; //聊天窗口组
    QMap<QString,bool> ChatOpen;
    //联系人页面
    personList *friendsList;
};

#endif // MAINWIDGET_H

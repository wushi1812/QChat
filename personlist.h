#ifndef PERSONLIST_H
#define PERSONLIST_H

#include <QListWidget>
#include <QMenu>
#include <QMouseEvent>
#include <QLineEdit>
#include<QTimer>

#include<QSettings>

class personList : public QListWidget
{
    Q_OBJECT
public:
    explicit personList(QListWidget *parent = 0);
    void mousePressEvent(QMouseEvent *event);//鼠标点击事件
    void mouseDoubleClickEvent(QMouseEvent *event); //鼠标双击事件
    void contextMenuEvent(QContextMenuEvent*);//菜单事件，为了显示菜单
    void initMenu();//初始化菜单


    QMenu *blankMenu;//点击空白上的菜单
    QMenu *groupMenu;//点击组上的菜单
    QMenu *personMenu;//点击人上的菜单
    QMap<QListWidgetItem*,QListWidgetItem*> groupMap;   // 组容器 - key:组 value:联系人
    QMap<QListWidgetItem*,bool> isHideMap;//用来判断该组是否隐藏了
    QMap<QListWidgetItem*,QString> friendidMap;//保存对象联系人id
    QMap<QListWidgetItem*,QString> groupidMap;//保存组对象id
    QLineEdit *groupNameEdit;//组的名字，重命名的时候需要用到
    QListWidgetItem *currentItem;//当前的项

signals:
    void openChat(QString id);      //双击联系人
    void addGroup(QString gid,QString groupname);
    void deleGroup(QString gid,QString groupname);
protected:
    //bool eventFilter(QObject *obj, QEvent *event);
public slots:
    void slotAddGroup();   //添加组
    void slotDelGroup();   //删除组
    void slotAddBuddy();   //添加好友
    void slotDelBuddy();   //删除好友
    void slotRename();     //重命名组
    void slotRenameEditFshed();//命名完成
public:
    static int maxcout;
};

#endif // PERSONLIST_H

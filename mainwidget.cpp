#include "mainwidget.h"
#include "ui_mainwidget.h"
#include <QTextStream>
#include<QDebug>
#include <stdio.h>
#include<QBuffer>
#include<QSizeGrip>

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);
    myname="无视一一";

    this->setWindowFlags(Qt::FramelessWindowHint);//删除原有关闭最小化按钮
    QSizeGrip *Maingrip=new QSizeGrip(this);
    ui->horizontalLayout_8->addWidget(Maingrip, 0, Qt::AlignBottom | Qt::AlignRight);
    setAttribute(Qt::WA_StyledBackground); //设置样式表
    ui->closeButton->setStyleSheet("QPushButton:hover{background-color: rgb(240, 0, 0);}"
                                   "QPushButton{border:0px;background-color: rgb(222, 222, 222);}");
    ui->minButton->setStyleSheet("QPushButton:hover{background-color: rgb(240, 0, 0);}"
                                 "QPushButton{border:0px;background-color: rgb(222, 222, 222);}");
    ui->setingButton->setStyleSheet("QPushButton:hover{background-color: rgb(240, 0, 0);}"
                                 "QPushButton{border:0px;background-color: rgb(222, 222, 222);}");

    setListMessage();//设置列表消息
    ui->listMessage->setStyleSheet("QListWidget{border:1px;background:white;border-radius:5px;}"
                                  "QListWidget::Item{ background:white; height:60px;}"
                                  "QListWidget::Item:hover{background:rgb(246,246,247);}"
                                   "*{outline:0px;}"
                                   "QListWidget::Item:selected { background:rgb(246,246,235); }"
                                  );
   QScrollBar* sv = ui->listMessage->verticalScrollBar();

   sv->setStyleSheet("QScrollBar:vertical{background:transparent; width:6px;}"
                     "QScrollBar::handle:vertical{min-height:10px;max-height:20px;background:rgb(224,224,224); width:6px; border-radius:3px;}"
                     "QScrollBar::up-arrow:vertical{border:none;}"
                     "QScrollBar::sub-line:vertical{background:transparent;}"
                     "QScrollBar::add-line:vertical{background:transparent;}");

   ui->label_Title->installEventFilter(this);

   //联系人页面:
    friendsList=new personList();
    friendsList->setStyleSheet("QListWidget{border:1px;background:white;border-radius:5px;}"
                               "QListWidget::Item{ background:white; height:60px;}"
                               "QListWidget::Item:hover{background:rgb(246,246,247);}"
                               "QListWidget::Item:selected { background:rgb(246,246,235); }"
                               );
    QScrollBar* fv = friendsList->verticalScrollBar();
    fv->setStyleSheet("QScrollBar:vertical{background:transparent; width:6px;}"
                      "QScrollBar::handle:vertical{min-height:10px;max-height:20px;background:rgb(224,224,224); width:6px; border-radius:3px;}"
                      "QScrollBar::up-arrow:vertical{border:none;}"
                      "QScrollBar::sub-line:vertical{background:transparent;}"
                      "QScrollBar::add-line:vertical{background:transparent;}");

    ui->stackedWidget->addWidget(friendsList);//联系人界面添加（index=1）



    //信号和槽函数
    connect(friendsList,SIGNAL(openChat(QString)),this,SLOT(openChatSlot(QString)));
    connect(friendsList,SIGNAL(addGroup(QString,QString)),this,SLOT(addgroupSlot(QString,QString)));
    connect(friendsList,SIGNAL(deleGroup(QString,QString)),this,SLOT(delegroupSlot(QString,QString)));

    tcpSocket=new QTcpSocket(this);
    socketstate=false;
    tcpServer=new QTcpServer(this);
    friendupdate= false;    //初始化未更新联系人列表状态

}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::setMessageId(int id)
{

}
//设置消息列表
void MainWidget::setListMessage()
{
    //加载图片路径 名字 消息 时间
    int messnums=12;
      QStringList pictureList;
      for(int i = 0; i<messnums; i++)
      {
          QString str;
          str=QString("D:/myini_data/img/%1.png").arg(i);
          pictureList.append(str);
      }
      int flog[messnums]   = {1,2,5,0,0,0,0,0,0,0,0,0};
      QString perNameList[messnums]={
          "比卡丘不皮", "云贝小助手","云音乐小秘书","网易云音乐",
          "云音乐福利", "吉法师","ICY","九月","公孙二狗",
          "龚建波","默片"
      };

      QString timerList[messnums] = {"2021年10月3日","2021年9月15日","2021年9月4日","2021年6月3日",
                              "2021年4月24日","2021年4月12日","2021年3月27日","2021年3月10日",
                              "2021年2月18日","2021年2月5日","2021年1月1日","2023年1月1日"};

      QString messageInformList[messnums] ={"你终于完成了你想做的东西，希望这个能给你带来好运",
                                     "中心完成了任务，送你更好的东西",
                                     "你的账号已经在别的地方登录了，希望你快点解决",
                                     "不开VIP还听啥歌，开了也听不到啥歌",
                                     "恭喜你成功达到8级，继续加油",
                                     "[技惊四坐]",
                                     "我设计的游戏好完莫",
                                     "一个能打的都没有",
                                     "狗哥牛逼",
                                     "荣县QT第一人不是吹的",
                                     "。。。。。。",
                                     "。。。。。。"};

      for (int i = 0; i <messnums; i++) {
          QString id=QString::number(i);
          QListWidgetItem *item = new QListWidgetItem(ui->listMessage);
          Messegeitem *messItem = new Messegeitem();
          messItem->setRed(flog[i]);
          messItem->setStringPic(pictureList[i]);
          messItem->setName(perNameList[i]);
          messItem->setTime(timerList[i]);
          messItem->setInformMessage(messageInformList[i]);
          ui->listMessage->setItemWidget(item,messItem);
          messageIds.insert(item,id);//保存ListwidgetItem对象id
          messageWidgets.insert(messItem,id);//保存widget对象id-->方便修改内容
          ChatOpen.insert(id,false);
      }
}

//设置联系人列表
void MainWidget::setListFriends()
{
    //联系人文件: friends_账号id.ini
    QSettings *friendsFile=new QSettings("D:/myini_data/friends/friends_"+accountid+".ini",QSettings::IniFormat);
    friendsFile->setIniCodec("UTF-8");

    //联系人分组文件: groups_账号id.ini
    QSettings *groupsFile=new QSettings("D:/myini_data/friends/groups_"+accountid+".ini",QSettings::IniFormat);
    groupsFile->setIniCodec("UTF-8");


    //读取ini分组->创建分组
    QStringList g_ids=groupsFile->childGroups();
    QString g_groupname;
    foreach(QString g_id,g_ids)
    {
        groupsFile->beginGroup(g_id);
        g_groupname=groupsFile->value("groupname").toString();
        groupsFile->endGroup();

        QListWidgetItem *newItem=new QListWidgetItem(QIcon(":/img/icon/hide.png"),g_groupname);
        newItem->setSizeHint(QSize(this->width(),40));//设置宽度、高度
        friendsList->addItem(newItem);              //加到QListWidget中
        friendsList->groupMap.insert(newItem,newItem);//加到容器groupMap里，key和value都为组
        friendsList->isHideMap.insert(newItem,true);  //设置该组隐藏状态
        groupsMap.insert(g_id,newItem);      //保存分组和对应分组的id
        friendsList->groupidMap.insert(newItem,g_id);
    }

    //读取ini好友信息->创建对象(好友)
    QStringList f_ids=friendsFile->childGroups();
    QString g_nikename;
    QString g_text;
    QString g_groupid;
    QString g_imgpath;
    int index=1;
    foreach(QString f_id, f_ids) {
        friendsFile->beginGroup(f_id);
        g_nikename=friendsFile->value("nikename").toString();
        g_text=friendsFile->value("text").toString();
        g_groupid=friendsFile->value("groupid").toString();
        g_imgpath=friendsFile->value("imgpath").toString();
        friendsFile->endGroup();

        friendsList->currentItem=groupsMap.value(g_groupid);
        personListBuddy *buddy=new personListBuddy();
        buddy->headPath=g_imgpath;                          //设置头像路径
        buddy->name->setText(g_nikename);                             //设置用户名
        buddy->sign->setText(g_text);                                 //设置个性签名
        QListWidgetItem *fItem=new QListWidgetItem();       //创建一个newItem
        friendsList->insertItem(friendsList->row(friendsList->currentItem)+index,fItem); //将该newItem插入到分组后
        index++;
        friendsList->setItemWidget(fItem, buddy); //将buddy赋给该newItem
        friendsList->groupMap.insert(fItem,friendsList->currentItem);   //加进容器，key为好友，value为组
        friendsList->friendidMap.insert(fItem,f_id);
        fItem->setHidden(true);
    }
}

//服务器端初始
void MainWidget::initSever()
{
    ui->pushButton_changeimg->setHidden(true);
    ui->pushButton_changeinfo->setHidden(true);
    this->Listen();
    connect(tcpServer,SIGNAL(newConnection()),this,SLOT(newConnectSlot()));

}

//用户端初始
void MainWidget::initSocket()
{
    this->link();
    connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(SocketreadyReadSlot()));
    tcpSocket->write(accountid.toLocal8Bit());//发送id

}


//服务器端监听
void MainWidget::Listen()
{
    QString ip="10.180.15.53";
    quint16 port=6500;
    if(!tcpServer->isListening())
    {
        if(!tcpServer->listen(QHostAddress(ip),port))
        {

            qDebug()<<"监听失败";
        }
    }
    qDebug()<<"监听成功";
}

void MainWidget::Closlisten()
{
    tcpServer->close();
}

//用户端连接
void MainWidget::link()
{
    QString ip="10.180.15.53";
    quint16 port=6500;

    tcpSocket->connectToHost(QHostAddress(ip),port);
    if(!tcpSocket->waitForConnected(1000))
    {
        qDebug()<<"客户端连接失败";
    }else
    {
        qDebug()<<"客户端连接";

        if(!tcpSocket->waitForBytesWritten(2000))
        {
            qDebug() << "Error sending data";
        }
        else
        {
            qDebug()<<"连接成功";
            socketstate=true;//已经连接
        }

    }

}

void MainWidget::sendicon(QString iconpath)
{
    QByteArray data; QByteArray byte;
    QFile file(iconpath);
    file.open(QIODevice::ReadOnly);
    data=file.readAll();
    file.close();


    QByteArray sign; sign+="img;";  //4字节标识
    QByteArray id; id+=accountid; id.resize(4);//4字节id
    QByteArray size;
    int allsize=data.size();
    if(allsize>50000)
    {
        while(allsize>0)
        {
            byte=data.left(50000);
            data.remove(0,50000);
            size+=QString::number(byte.size()) ;size.resize(8);//8字节大小
            byte.prepend(size);
            byte.prepend(sign);
            byte.prepend(id);
            tcpSocket->write(byte);
            allsize-=50000;
        }

    }else
    {
        size+=QString::number(data.size());size.resize(8);//8字节大小
        data.prepend(size);
        data.prepend(sign);
        data.prepend(id);
        tcpSocket->write(data);
    }
    //imgdata :id+类型+大小+数据文件

}
//服务器端发送用户联系人ini文件
void MainWidget::sendini(QTcpSocket *client,QString id)
{
    QFile *f_file=new QFile("D:/server_inidata/friends/friends_"+id+".ini");
    QFile *g_file=new QFile("D:/server_inidata/groups/groups_"+id+".ini");
    QByteArray f_data;QByteArray g_data;
    if(!f_file->open(QIODevice::ReadWrite))
    {
        qDebug()<<"f_file open false;  id:"+id;
        return;
    }
    if(!g_file->open(QIODevice::ReadWrite))
    {
        qDebug()<<"g_file open false;  id:"+id;
        return;
    }
    f_data=f_file->readAll();
    f_file->close();
    g_data=g_file->readAll();
    g_file->close();
    //尾部添加标识,并发送给用户
    if(!f_data.isEmpty())
    {
        QByteArray size;
        size+=QString::number(f_data.size());
        size.resize(8);
        f_data.prepend(size);
        f_data.prepend("fini");
        client->write(f_data);
    }

    if(!g_data.isEmpty())
    {
        QByteArray size;
        size+=QString::number(g_data.size());
        size.resize(8);
        g_data.prepend(size);
        g_data.prepend("gini");
        client->write(g_data);
    }
}
//更新服务器groupini文件
void MainWidget::updateGroup()
{
    QString path="D:/myini_data/friends/groups_"+accountid+".ini";
    QFile file(path);
    if(!file.open(QIODevice::ReadOnly))
    {
        qDebug()<<"data open false 更新失败";
        return;
    }
    QByteArray g_data=file.readAll();
    file.close();
    QByteArray size;
    QByteArray id;
    size+=QString::number(g_data.size());
    size.resize(8);     //8字节大小标识
    id+=accountid;
    id.resize(4);       //4字节id标识
    g_data.prepend(size);
    qDebug()<<"ini大小"<<size;
    g_data.prepend("gini");//4字节类型标识
    g_data.prepend(id);
    tcpSocket->write(g_data);
}

void MainWidget::mouseMoveEvent(QMouseEvent *e)
{
    if(mousePressed&& (e->buttons())== Qt::LeftButton)
    {
        this->move(e->globalPos() - mousePoint);
        e->accept();
    }
}

void MainWidget::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        mousePressed = true;
        mousePoint = e->globalPos() - this->pos();
        e->accept();
    }
}

void MainWidget::mouseReleaseEvent(QMouseEvent *)
{
    mousePressed = false;
}
//消息页面
void MainWidget::on_pushButton_messege_clicked()
{

    ui->stackedWidget->setCurrentIndex(0);//消息页面
}

//联系人页面
void MainWidget::on_pushButton_friend_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);//联系人页面
    if(!friendupdate)
    {
        friendupdate=true;
        setListFriends();
    }

}



void MainWidget::on_pushButton_space_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);//
}

//双击消息-->>打开聊天窗口信号
void MainWidget::on_listMessage_doubleClicked(const QModelIndex &index)
{
    currentItem =ui->listMessage->item(index.row());
    QString id=messageIds.value(currentItem);
    qDebug()<<"open:"+id;
    openChatSlot(id);
}

//打开聊天窗口
void MainWidget::openChatSlot(QString id)
{
    if(!ChatWinds.contains(id))
    {
        qDebug()<<"第一次打开窗口";
        Chat *newchat=new Chat();
        newchat->setid(id.toInt(),accountid.toInt());
        ChatWinds.insert(id,newchat);
        //连接发送消息,窗口关闭槽函数
        connect(newchat,SIGNAL(sendMessage(QString,QString,QString)),this,SLOT(sendMessageSlot(QString,QString,QString)));
        connect(newchat,SIGNAL(closeChat(QString)),this,SLOT(CloseChatSlot(QString)));
        //
        newchat->update20();
        newchat->mysockt=tcpSocket;
    }
    Chat *openchat=ChatWinds.value(id);
    openchat->show();
    Messegeitem *Messwid=messageWidgets.key(id);
    Messwid->rednum=0;
    Messwid->setRed(0);
    ChatOpen.insert(id,true);
    openchat->listWidget->scrollToBottom();
    openchat->mname=myname;
    openchat->fname=messageWidgets.key(id)->name;
    openchat->setWindowTitle(openchat->fname);
    openchat->setStyleSheet("alignment: Center;");
}
//g_ini文件添加分组-->发送更新后的ini文件给服务器端
void MainWidget::addgroupSlot(QString gid, QString groupname)
{
    QString path="D:/myini_data/friends/groups_"+accountid+".ini";
    QSettings *g_file=new QSettings(path,QSettings::IniFormat);
    g_file->setIniCodec("UTF-8");
    g_file->beginGroup(gid);
    g_file->setValue("groupname",groupname);
    g_file->endGroup();
    //发送更新后文件
    updateGroup();
}
//g_ini文件删除分组-->发送更新后的ini文件给服务器端
void MainWidget::delegroupSlot(QString gid, QString groupname)
{
    QString path="D:/myini_data/friends/groups_"+accountid+".ini";
    QSettings *g_file=new QSettings(path,QSettings::IniFormat);
    g_file->setIniCodec("UTF-8");
    g_file->beginGroup(gid);
    g_file->remove("groupname");
    g_file->endGroup();
    updateGroup();
}

//有用户连接
void MainWidget::newConnectSlot()
{
    QTcpSocket *socket=tcpServer->nextPendingConnection();
    socketmap.insert(socket,"");
    connect(socket,SIGNAL(readyRead()),this,SLOT(SeverreadyReadSlot()));//连接这个对象的readyread信号
    connect(socket,SIGNAL(disconnected()),this,SLOT(disConnectSlot()));
}
//用户断开连接
void MainWidget::disConnectSlot()
{
    QTcpSocket* socket = qobject_cast<QTcpSocket*>(sender());
    socketmap.remove(socket);
}
//服务器端readyread槽函数
void MainWidget::SeverreadyReadSlot()
{
    static bool first=false;  //第一次是否完成？
    QTcpSocket *client=qobject_cast<QTcpSocket *>(sender());//获取发送的对象

    QByteArray size;        //文件大小
    int cursize;
    QByteArray sign;        //文件类型标识
    QByteArray id;           //发送的对象id
    QByteArray reid;                //消息类型时，需要接收方id
    QString path;
    static QByteArray byte;
    QByteArray data,temp;
    if(!socketmap.value(client).isEmpty())  //不是id接收
    {       
        data=client->readAll();
        if(!first)                      //如果为第一次读取
        {
            if(!byte.isEmpty())
            {
                id=byte.left(4);                //获取首部id标识
                sign=byte.mid(4,4);             //获取类型标识
                size=byte.mid(8,8);             //获取文件大小
                byte.remove(0,16);              //移除所有标识
            }else
            {
                id=data.left(4);                //获取首部id标识
                sign=data.mid(4,4);             //获取类型标识
                size=data.mid(8,8);             //获取文件大小
                data.remove(0,16);              //移除所有标识
            }

            if(sign=="mess")
            {
                //如果为消息类型
                QTcpSocket *defaultsockt=new QTcpSocket();
                reid=data.left(4);
                data.remove(0,4);           //移除接收方id标识
                if(socketmap.key(QString(reid),defaultsockt)==defaultsockt)
                {
                    qDebug()<<QString(reid)<<"接收用户未连接"<<QString(id);
                }else
                {
                    data.prepend(id);//添加发送方id
                    data.prepend(size);//添加大小
                    data.prepend(sign);//添加mess类型
                    client=socketmap.key(QString(reid));//指向接收方对象
                    client->write(data);//转发给接收方
                    delete defaultsockt;
                }
                return;
            }


            first=true;
        }
        qDebug()<<"传输类型"<<sign;
        byte+=data;
        cursize=byte.size();
        qDebug()<<"这次读取:"<<data.size()<<"个字节";
        qDebug()<<"cursize:"<<cursize<<"个字节";
        while(first)
        {
            if(sign=="img;")
            {
                path="D:/server_inidata/all_img/"+QString(id)+".png";
                QFile file(path);
                if(!file.open(QIODevice::Append))
                {
                    qDebug()<<"file open false";
                    return;
                }
                temp=byte.left(size.toInt());
                file.write(temp);  //存入服务器端文件
                file.close();
                qDebug()<<"保存图片成功";
                //图片路径写入数据库
                QSqlQuery query;
                QString sql=("insert into img(uid,imgpath) values("+QString(id)+",'"+path+"') "
                             "ON DUPLICATE KEY UPDATE imgpath ='"+path+"';");
                qDebug()<<sql;
                if(!query.exec(sql))
                {
                    qDebug()<<"更新数据库失败";
                }
                //byte.clear();
                byte.remove(0,size.toInt());
                first=false;
                return;
            }
            if(sign=="gini")
            {
                path="D:/server_inidata/groups/groups_"+QString(id)+".ini";
                QFile file(path);
                if(!file.open(QIODevice::WriteOnly))
                {
                    qDebug()<<"file open false";
                    return;
                }
                file.write(byte);
                file.close();
                qDebug()<<"groups_"+QString(id)+".ini 更新成功";
                //byte.clear();
                byte.remove(0,size.toInt());
                first=false;
                return;
            }
            else if(sign=="data") //data : id+类型+文件大小+接收方id+文件名+数据文件
            {
                QString reid=QString(byte.left(4));
                QString dataname=QString(byte.mid(4,100));
                byte.remove(0,104);
                temp=byte.left(size.toInt());
                byte.remove(0,size.toInt());
                QString path="D:/server_inidata/data/"+QString(id)+"/"+reid+"/"+dataname;
                qDebug()<<path;
                QDir().mkpath("D:/server_inidata/data/"+QString(id)+"/"+reid);
                QFile file(path);
                if(!file.open(QIODevice::WriteOnly))
                {
                    qDebug() << file.errorString();
                    return;
                }
                file.write(temp);  //存入服务器端文件
                file.close();
                //byte.clear();
                first=false;
            }


        }


    }
    else   //连接对象导入id
    {
        QByteArray data=client->readAll();
        QString uid=QString(data.left(4));
        qDebug()<<"导入用户id:"+uid;
        socketmap.insert(client,uid);
        //获取对应用户联系人列表所需ini文件,然后发送给用户端：
        sendini(client,uid);
        SendiconsThread *iconthread=new SendDataThread();
        iconthread->initSend(uid);
        connect(iconthread,&SendiconsThread::sendicon,this,[=](QByteArray icondata){
            client->write(icondata);
        });
        conn
    }

}
//用户端readRead函数
void MainWidget::SocketreadyReadSlot()
{
    QString path;
    QFile *file=new QFile();

    static QByteArray byte;         //单次读取
    QByteArray data;
    QByteArray temp;
    data=tcpSocket->readAll();
    QByteArray sign=data.left(4);      //获取类型标识
    qDebug()<<"本次接收ini:";
    qDebug()<<data.size();
    if(sign=="fini")
    {
        data.remove(0,4);   //移除类型标识
        int size=data.left(8).toInt();
        data.remove(0,8);
        temp+=data.left(size);
        data.remove(0,size);
        path="D:/myini_data/friends/friends_"+accountid+".ini";
        file->setFileName(path);
        if(!file->open(QIODevice::WriteOnly))
        {
            qDebug()<<"更新本地联系人列表失败";

        }
        file->write(temp);
        temp.clear();
        file->close();
    }
    sign=data.left(4);
    if(sign=="gini")
    {
        data.remove(0,4);   //移除类型标识
        int size=data.left(8).toInt();
        data.remove(0,8);
        temp+=data.left(size);
        data.remove(0,size);
        path="D:/myini_data/friends/groups_"+accountid+".ini";
        file->setFileName(path);
        if(!file->open(QIODevice::WriteOnly))
        {
            qDebug()<<"更新本地联系人列表失败";

        }
        file->write(temp);
        temp.clear();
        file->close();
    }
    sign=data.left(4);
    if(sign=="mess")
    {
        int size=data.mid(4,8).toInt();
        QString sendid=QString(data.mid(12,4));
        data.remove(0,16);
        temp+=data.left(size);//获取数据
        data.remove(0,size);
        qDebug()<<sendid<<"发送：";
        Messegeitem *Messwid=messageWidgets.key(sendid);
        //更新消息到顶部
        if(!ChatOpen.value(sendid))
        {
            QListWidgetItem *getit=messageIds.key(sendid);
            Messegeitem *newwind=new Messegeitem();
            newwind->setStringPic("D:/myini_data/img/"+sendid+".png");
            newwind->setRed(Messwid->rednum+1);
            newwind->setInformMessage(QString(temp));
            newwind->setName(Messwid->name);
            newwind->setTime(QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm"));
            messageWidgets.remove(Messwid);
            delete Messwid;
            messageWidgets.insert(newwind,sendid);
            ui->listMessage->takeItem(ui->listMessage->row(getit));
            ui->listMessage->insertItem(0,getit);
            ui->listMessage->setItemWidget(getit,newwind);
            qDebug()<<sendid<<"窗口未打开";
            if(ChatWinds.contains(sendid))
            {
                ChatWinds.value(sendid)->getMessage(QString(temp));
            }
        }else
        {
            QListWidgetItem *getit=messageIds.key(sendid);
            Messegeitem *newwind=new Messegeitem();
            newwind->setStringPic("D:/myini_data/img/"+sendid+".png");
            newwind->setRed(0);
            newwind->setInformMessage(QString(temp));
            newwind->setName(Messwid->name);
            newwind->setTime(QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm"));
            messageWidgets.remove(Messwid);
            delete Messwid;
            messageWidgets.insert(newwind,sendid);
            ui->listMessage->takeItem(ui->listMessage->row(getit));
            ui->listMessage->insertItem(0,getit);
            ui->listMessage->setItemWidget(getit,newwind);
            qDebug()<<sendid<<"窗口已经打开";
            ChatWinds.value(sendid)->getMessage(QString(temp));
        }
    }

}

//用户更换头像
void MainWidget::on_pushButton_changeimg_clicked()
{
    QString imgpath,iconpath;
    imgpath=QFileDialog::getOpenFileName(this,"图片","\home","(*.jpg *.jpeg *.png)");
    if(imgpath.isEmpty()){return;}
    //裁剪图片为圆形头像
    QPixmap changedpix(imgpath);
    changedpix=changedpix.scaled(QSize(500,500));
    QPixmap pix(changedpix.width(), changedpix.height());  //创建一个新的pixmap作为painter的绘图设备
    pix.fill(Qt::transparent);  //设置图片透明
    QPainter painter(&pix);  //在创建的新的pix上进行绘制
    painter.setRenderHints(QPainter::Antialiasing|QPainter::SmoothPixmapTransform); //抗锯齿效果
    //设置裁切区域
    QPainterPath cut;
    int radius = changedpix.height()<changedpix.width() ? changedpix.height()/2:changedpix.width()/2;
    cut.addEllipse(changedpix.rect().center(), radius,radius);  //绘制裁切区域的大小
    painter.setClipPath(cut);  //设置裁切区域，设置后，图片只显示设定的裁切区域内容
    //把源图片的内容绘制到创建的pix上，非裁切区域的内容将不显示

    painter.drawPixmap(pix.rect(), changedpix);
    iconpath="D:/myini_data/img/"+accountid+".png";
    //pix.scaled(QSize(400,400), Qt::KeepAspectRatio, Qt::SmoothTransformation);
    pix.save(iconpath);
    ui->label_img->setPixmap(pix);
    sendicon(iconpath);
}

void MainWidget::on_closeButton_clicked()
{
    updateGroup();
    qDebug()<<"结束";
    this->close();
}

void MainWidget::sendMessageSlot(QString senid, QString reid, QString message)
{
    QByteArray mdata,mid,sign,fid,size;
    mdata+=message;
    mid+=senid;
    mid.resize(4);//4字节id
    fid+=reid;
    fid.resize(4);
    sign+="mess";
    size+=QString::number(mdata.size());
    size.resize(8);
    mdata.prepend(fid);
    mdata.prepend(size);
    mdata.prepend(sign);
    mdata.prepend(mid);
    //mdata : id+类型+大小+接收方id+数据文件
    //qDebug()<<"发送给"<<QString(fid);
    tcpSocket->write(mdata);

}
//关闭窗口,释放
void MainWidget::CloseChatSlot(QString wid)
{
    qDebug()<<"关闭窗口"<<wid;
//    delete ChatWinds.value(wid);
//    ChatWinds.remove(wid);
    ChatOpen.insert(wid,false);
}

void MainWidget::on_minButton_clicked()
{
    this->showMinimized();
}

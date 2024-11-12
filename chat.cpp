#include"chat.h"
#include "ui_chat.h"
#include<QDebug>
#include<thread>

Chat::Chat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Chat)
{
    ui->setupUi(this);

    ui->listWidget->setViewMode(QListWidget::ListMode);

    //this->setWindowFlags(Qt::FramelessWindowHint);

    //QSizeGrip *sizeGrip=new QSizeGrip(this);
    //ui->horizontalLayout_3->addWidget(sizeGrip,0,Qt::AlignBottom|Qt::AlignRight);
    this->setStyleSheet("alignment: Center;");
    ui->listWidget->setStyleSheet("QListWidget::Item:hover{background-color: white;}"
                                  "QListWidget::Item:selected { background-color: white; }");

    listWidget=ui->listWidget;
    ui->groupBox_history->setHidden(true);

}

Chat::~Chat()
{
    delete ui;
}

void Chat::setid(int id,int mid)
{
    fid=id; myid=mid;
}

void Chat::dealMessage(Chatpop *messageW,QListWidgetItem *item, QString text, QString time, Chatpop::User_Type type)
{
    messageW->setFixedWidth(ui->listWidget->width());
    QSize size=messageW->fontRect(text);
    item->setSizeHint(size);
    messageW->setText(text,time,size,type);
    ui->listWidget->setItemWidget(item,messageW);

}

void Chat::dealMessageTime(QString curMsgTime)
{

    bool isShowTime = false;
    if(ui->listWidget->count() > 0) //(有上一条消息)
    {
        QListWidgetItem* lastItem = ui->listWidget->item(ui->listWidget->count() - 1);
        Chatpop* messageW = (Chatpop*)ui->listWidget->itemWidget(lastItem);//指向上一条(当前最后一条消息
        QDateTime lastTime = QDateTime::fromString(messageW->time(),"yyyy/MM/dd hh:mm:ss ddd");
        QDateTime curTime = QDateTime::fromString(curMsgTime,"yyyy/MM/dd hh:mm:ss ddd");
        int cmp=lastTime.secsTo(curTime);
        //qDebug() << "curTime lastTime:" << cmp;
        isShowTime = (cmp > 120); // 两个消息相差两分钟不显示

    } else {
        isShowTime = true;
    }
    if(isShowTime)
    {
        Chatpop *messageTime = new Chatpop(ui->listWidget->parentWidget());
        QListWidgetItem* itemTime = new QListWidgetItem(ui->listWidget);

        QSize size = QSize(ui->listWidget->width(), 40);
        messageTime->resize(size);
        itemTime->setSizeHint(size);
        messageTime->setText(curMsgTime, curMsgTime, size, Chatpop::User_Time);
        ui->listWidget->setItemWidget(itemTime, messageTime);
    }
}

void Chat::resizeEvent(QResizeEvent *event)
{
    Q_UNUSED(event);
    for(int i=0;i<ui->listWidget->count();i++)
    {
        Chatpop* message=(Chatpop*)ui->listWidget->itemWidget(ui->listWidget->item(i));
        QListWidgetItem* item=ui->listWidget->item(i);

        dealMessage(message,item,message->text(),message->time(),message->userType());
    }
}

void Chat::getMessage(QString text)
{
    QString time=QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss");
    dealMessageTime(time);
    Chatpop *messageW=new Chatpop(ui->listWidget->parentWidget());
    messageW->setIconpath("D:/myini_data/img/"+QString::number(fid)+".png",Chatpop::User_She);
    QListWidgetItem *newitem=new QListWidgetItem(ui->listWidget);
    dealMessage(messageW,newitem,text,time,Chatpop::User_She);
}

void Chat::update20()
{
    QSqlQuery query;
    QString f_id=QString::number(fid);
    QString my_id=QString::number(myid);
    QString sql="SELECT sendid,message,time FROM history where"
                "(sendid='"+f_id+"' and reid='"+my_id+"') or (sendid='"+my_id+"' and reid='"+f_id+"') "
                "order by time limit 20;";
    query.exec(sql);
    int index=0;
    while(query.next())
    {
        QString sendid=query.record().value(0).toString();
        QString message=query.record().value(1).toString();
        QString time=query.record().value(2).toString();
        dealMessageTime(time);
        Chatpop *messageW=new Chatpop(ui->listWidget->parentWidget());
        QListWidgetItem *newitem=new QListWidgetItem(ui->listWidget);
        //ui->listWidget->insertItem(index,newitem);
        index++;
        if(sendid==my_id)
        {
            messageW->setIconpath("D:/myini_data/img/"+my_id+".png",Chatpop::User_Me);
            dealMessage(messageW,newitem,message,time,Chatpop::User_Me);
        }else
        {
            messageW->setIconpath("D:/myini_data/img/"+f_id+".png",Chatpop::User_She);
            dealMessage(messageW,newitem,message,time,Chatpop::User_She);
        }
        //ui->listWidget->setItemWidget(newitem,messageW);

    }
}
//发送文件
void Chat::DataSend(QString path)
{
    QByteArray data;
    QFile dataFile(path);
    dataFile.open(QIODevice::ReadOnly);
    data=dataFile.readAll();
    QFileInfo info(path);
    QString filename=info.fileName();
    dataFile.close();

    int allsize=data.size();
    int oncedata=6000;
    qDebug()<<data.size();
    //data : id+类型+文件大小+接收方id+文件名+数据文件
    QByteArray sendid;sendid+=QString::number(myid); sendid.resize(4);
    QByteArray sign; sign+="data";
    QByteArray size;
    QByteArray reid;reid+=QString::number(fid); reid.resize(4);
    QByteArray dataname; dataname+=filename; dataname.resize(100);
    while(allsize>0)
    {
        QByteArray byte=data.left(oncedata);
        data.remove(0,oncedata);
        size+=QString::number(byte.size()); size.resize(8);
        byte.append(dataname);
        byte.append(reid);
        byte.append(size);
        byte.append(sign);
        byte.append(sendid);
        qDebug()<<byte.size();
        emit sendData(byte);
    }
}

bool Chat::eventFilter(QObject *obj, QEvent *event)
{
    if(obj==ui->textEdit)
    {
        if(event->type()==QEvent::KeyPress)
        {
            QKeyEvent *k = static_cast<QKeyEvent *>(event);
            if(k->key() == Qt::Key_Return||k->key()==Qt::Key_Enter)
            {
                on_pushButton_enter_clicked();
                return true;
            }

       }
   }
    return QWidget::eventFilter(obj,event);
}



void Chat::closeEvent(QCloseEvent *event)
{
    emit closeChat(QString::number(fid));
    event->accept();
}


//发送消息
void Chat::on_pushButton_enter_clicked()
{
    QSqlQuery query;
    QString sendid=QString::number(myid);
    QString reid=QString::number(fid);
    QString message=ui->textEdit->toPlainText().trimmed();

    if(message.isEmpty())
    {
        return;
    }
    QString time=QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss ddd");
    QString sql="insert into history(sendid,reid,message,time) Values('"+sendid+"','"+reid+"','"+message+"','"+time+"')";
    qDebug()<<sql;
    if(!query.exec(sql))
    {
        qDebug()<<"sql发送失败";
        return;
    }
    dealMessageTime(time);
    Chatpop *messageW=new Chatpop(ui->listWidget->parentWidget());
    QListWidgetItem *item=new QListWidgetItem(ui->listWidget);
    dealMessage(messageW,item,message,time,Chatpop::User_Me);
    ui->textEdit->clear();
    emit sendMessage(sendid,reid,message);//发送给服务器转发消息
}


//发送文件1
void Chat::on_pushButton_data_clicked()
{
    QString path;
    path=QFileDialog::getOpenFileName(this,"文件","\home");
    if(path.isEmpty()){return;}
    qDebug()<<path;
    //DataSend(path);
    Dataitem *newdata=new Dataitem(ui->listWidget_Data->parentWidget());
    newdata->setStringIcon(path);
    newdata->setDataName(path);
    Allhistoryitem *newhis=new Allhistoryitem(ui->listWidget_Data->parentWidget());
    QListWidgetItem *newitem=new QListWidgetItem(ui->listWidget_Data);
    newitem->setSizeHint(QSize(400,152));
    newhis->setWidget(newdata);
    newhis->setname(mname);
    //ui->listWidget->setItemWidget(newitem,newdata);
    ui->listWidget_Data->setItemWidget(newitem,newhis);

    //打开文件页面
    ui->groupBox_history->setHidden(false);
    on_history_data_Button_clicked();
    //开启线程传输,连接相关槽函数
    SendDataThread *sendThread=new SendDataThread();

    sendThread->initdata(path,QString::number(myid),QString::number(fid));
    connect(sendThread,SIGNAL(sendProgress(int)),newdata,SLOT(updateProgressSlot(int)));
    connect(newdata,SIGNAL(stopandstart()),sendThread,SLOT(stopandstartSlot()));
    connect(newdata,&Dataitem::cancel,this,[=](){
        sendThread->quit();
        delete newdata; ui->listWidget_Data->removeItemWidget(newitem);
        delete newhis;delete newitem;
    });
    connect(newdata,&Dataitem::sendover,this,[=](){
        QListWidgetItem *newitem2=new QListWidgetItem(ui->listWidget_history);
        newitem2->setSizeHint(QSize(400,152));
        Dataitem *newdata2=new Dataitem(ui->listWidget_history->parentWidget());
        Allhistoryitem *newhis2=new Allhistoryitem(ui->listWidget_history->parentWidget());
        newdata2->copyDataitem(newdata);
        newhis2->setWidget(newdata2);
        ui->listWidget_history->setItemWidget(newitem2,newhis2);
        QString time=QDateTime::currentDateTime().toString("yyyy/MM/dd hh:mm:ss");
        newhis2->setname(mname);
        newhis2->settime(time);
        newhis->settime(time);
        delete sendThread;
    });
    connect(sendThread,&SendDataThread::sendbyte,this,[=](QByteArray byte){
       mysockt->write(byte);
    });
    sendThread->start();

}

void Chat::on_pushButton_history_clicked()
{
    if(!ui->groupBox_history->isHidden())
    {
        ui->groupBox_history->setHidden(true);
    }else
    {
        ui->groupBox_history->setHidden(false);
    }
}

void Chat::on_history_data_Button_clicked()
{
    ui->stackedWidget_history->setCurrentIndex(1);
}

void Chat::on_history_all_pushButton_clicked()
{
    ui->stackedWidget_history->setCurrentIndex(0);
}

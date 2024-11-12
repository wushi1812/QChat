#include "chatwind.h"
#include "ui_chatwind.h"

ChatWind::ChatWind(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChatWind)
{
    ui->setupUi(this);
}

ChatWind::~ChatWind()
{
    delete ui;
}

void ChatWind::dealMessage(Chatpop *messageW, QListWidgetItem *item, QString text, QString time, Chatpop::User_Type type)
{
    messageW->setFixedWidth(ui->listWidget->width());
    QSize size=messageW->fontRect(text);
    item->setSizeHint(size);
    messageW->setText(text,time,size,type);
    ui->listWidget->setItemWidget(item,messageW);
}

void ChatWind::dealMessageTime(QString curMsgTime)
{
    bool isShowTime = false;
    if(ui->listWidget->count() > 0) //(有上一条消息)
    {
        QListWidgetItem* lastItem = ui->listWidget->item(ui->listWidget->count() - 1);
        Chatpop* messageW = (Chatpop*)ui->listWidget->itemWidget(lastItem);//指向上一条(当前最后一条消息
        int lastTime = messageW->time().toInt();
        int curTime = curMsgTime.toInt();
        qDebug() << "curTime lastTime:" << curTime - lastTime;
        isShowTime = ((curTime - lastTime) > 60); // 两个消息相差一分钟不显示

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

bool ChatWind::eventFilter(QObject *obj, QEvent *event)
{
    if(obj==ui->textEdit)
    {
        if(event->type()==QEvent::KeyPress)
        {
            QKeyEvent *k = static_cast<QKeyEvent *>(event);

            if(k->key() == Qt::Key_Return)
            {
                on_pushButton_enter_clicked();
                return true;
            }
       }
   }
   return QWidget::eventFilter(obj,event);
}

void ChatWind::on_pushButton_enter_clicked()
{
    //historyW history;
    QString message=ui->textEdit->toPlainText().trimmed();
    QString time=QDateTime::currentDateTime().toString("YYYY/MMMM/DD  hh:mm:ss");
    dealMessageTime(time);



    Chatpop *messageW=new Chatpop(ui->listWidget->parentWidget());
    QListWidgetItem *item=new QListWidgetItem(ui->listWidget);


//    for(int i=0;i<chatdata.size();i++)
//    {
//        historyW temp=chatdata.at(i);
//        dealMessageTime(temp.time);
//        dealMessage(temp.messageW,temp.item,temp.text,temp.time,temp.type);
//    }

    dealMessage(messageW,item,message,time,Chatpop::User_Me);
//    history.text=message;
//    history.time=time;
//    history.messageW=messageW;
//    history.item=item;
//    history.type=Chatpop::User_Me;
//    chatdata.append(history);

}

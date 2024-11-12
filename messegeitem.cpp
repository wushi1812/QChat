#include "messegeitem.h"
#include "ui_messegeitem.h"

Messegeitem::Messegeitem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Messegeitem)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_StyledBackground); //设置样式表

    this->setStyleSheet("QWidget{border:1px; background:white; border-radius:1px;}");
    this->setStyleSheet("QWidget{background:transparent; border-radius:8px;}"
                        "QWidget:hover{background:transparent;}"
                        );
    rednum=0;
}

Messegeitem::~Messegeitem()
{
    delete ui;
}

void Messegeitem::setRed(int flog)
{
    if(flog+rednum)
    {
        rednum+=flog;
        //ui->labred->setPixmap(QPixmap(":/img/icon/red.png"));
        ui->labred->setText(QString::number(rednum));
        ui->labred->show();
    }else{
       ui->labred->hide();
    }
}
void Messegeitem::setStringPic(QString url)
{
    QString str = "QWidget{border-image:url("+url+");}";
    ui->widPicturePer->setStyleSheet(str);
}

void Messegeitem::setName(QString str)
{
    name=str;
    ui->labNameMess->setText(str);
    ui->labNameMess->setStyleSheet("QLabel#labNameMess{color:rgb(91,133,180);}");
}

void Messegeitem::setTime(QString str)
{

    ui->labTimer->setText(str);
    ui->labTimer->setStyleSheet("QLabel#labTimer{color:rgb(217,217,217);}");
}

void Messegeitem::setInformMessage(QString str)
{
    ui->labInform->setText(str);
    ui->labInform->setStyleSheet("QLabel#labInform{color:rgb(49,49,49);}");
}

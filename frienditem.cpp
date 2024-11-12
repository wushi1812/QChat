#include "frienditem.h"
#include "ui_frienditem.h"

Frienditem::Frienditem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Frienditem)
{
    ui->setupUi(this);
    setAttribute(Qt::WA_StyledBackground); //设置样式表

    this->setStyleSheet("QWidget{border:1px; background:white; border-radius:1px;}");
    this->setStyleSheet("QWidget{background:transparent; border-radius:8px;}"
                        "QWidget:hover{background:transparent;}"
                        );
}

Frienditem::~Frienditem()
{
    delete ui;
}

void Frienditem::setStringPic(QString url)
{
    QString str = "QWidget{border-image:url("+url+");}";
    ui->widPicturePer->setStyleSheet(str);
}

void Frienditem::setName(QString str)
{
    ui->labName->setText(str);
    ui->labName->setStyleSheet("QLabel#labName{color:rgb(91,133,180);}");
}

void Frienditem::setInformMessage(QString str)
{
    ui->labInform->setText(str);
    ui->labInform->setStyleSheet("QLabel#labName{color:rgb(49,49,49);}");
}

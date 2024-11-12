#include "allhistoryitem.h"
#include "ui_allhistoryitem.h"

Allhistoryitem::Allhistoryitem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Allhistoryitem)
{
    ui->setupUi(this);
    ui->verticalLayout_5->setSizeConstraint(QLayout::SetFixedSize);
}

Allhistoryitem::~Allhistoryitem()
{
    delete ui;
}

void Allhistoryitem::setWidget(QWidget *wid)
{

    ui->verticalLayout_mess->addWidget(wid);
}

void Allhistoryitem::setname(QString name)
{
    ui->label_name->setText(name);
}

void Allhistoryitem::settime(QString time)
{
    ui->label_time->setText(time);
}

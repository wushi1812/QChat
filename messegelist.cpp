#include "messegelist.h"
#include "ui_messegelist.h"

MessegeList::MessegeList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MessegeList)
{
    ui->setupUi(this);
}

MessegeList::~MessegeList()
{
    delete ui;
}

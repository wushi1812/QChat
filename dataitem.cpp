#include "dataitem.h"
#include "ui_dataitem.h"

Dataitem::Dataitem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Dataitem)
{
    ui->setupUi(this);
    ui->progressBar_send->setHidden(true);
    ui->pushButton_download->setStyleSheet("QPushButton:hover{background-color: rgb(240, 0, 0);}"
                                           "QPushButton{border:0px;background-color: rgb(222, 222, 222);}");
    ui->pushButton_open->setStyleSheet("QPushButton:hover{background-color: rgb(240, 0, 0);}"
                                       "QPushButton{border:0px;background-color: rgb(222, 222, 222);}");
    ui->pushButton_openfile->setStyleSheet("QPushButton:hover{background-color: rgb(240, 0, 0);}"
                                           "QPushButton{border:0px;background-color: rgb(222, 222, 222);}");
    ui->pushButton_stop_start->setStyleSheet("QPushButton:hover{background-color: rgb(240, 0, 0);}"
                                             "QPushButton{border:0px;background-color: rgb(222, 222, 222);}");
    ui->pushButton_cancel->setStyleSheet("QPushButton:hover{background-color: rgb(240, 0, 0);}"
                                         "QPushButton{border:0px;background-color: rgb(222, 222, 222);}");
    ui->groupBox_over->setHidden(true);
    loading=true;
}

Dataitem::~Dataitem()
{
    delete ui;
}

void Dataitem::copyDataitem(const Dataitem *other)
{
    ui->label_datainfo->setText("");
    datapath=other->datapath;
    setStringIcon(datapath);
    setDataName(datapath);
    loading=false;
    ui->groupBox_loading->setHidden(true);
    ui->groupBox_over->setHidden(false);
}

void Dataitem::setStringIcon(QString path)
{
    datapath=path;
    QFileInfo info(path);
    QFileIconProvider provider;
    QIcon icon = provider.icon(info);
    QPixmap pixmap=icon.pixmap(QSize(40,40));
    //icon = icon_provider.icon(info);
    ui->Dataicon->setPixmap(pixmap);
}

void Dataitem::setDataName(QString path)
{
    datapath=path;
    QFileInfo info(path);
    dataname=info.fileName();
    ui->labNameData->setText(dataname);
}

void Dataitem::on_pushButton_openfile_clicked()
{
    QFileInfo info(datapath);
    QDesktopServices::openUrl(QUrl::fromLocalFile(info.absolutePath()));
}

void Dataitem::on_pushButton_open_clicked()
{
    QDesktopServices::openUrl(QUrl::fromLocalFile(datapath));
}

void Dataitem::updateProgressSlot(int pro)
{
    if(pro==100)
    {
        ui->label_datainfo->setText("完成");
        ui->progressBar_send->setHidden(true);
        ui->groupBox_over->setHidden(false);
        ui->groupBox_loading->setHidden((true));
        emit sendover();
        return;
    }
    ui->progressBar_send->setHidden(false);
    ui->progressBar_send->setValue(pro);
    ui->label_datainfo->setText(QString::number(pro)+"%");
}

void Dataitem::on_pushButton_stop_start_clicked()
{
    if(loading)
    {
        ui->pushButton_stop_start->setText("继续");
        ui->progressBar_send->setStyleSheet("QProgressBar::chunk {  background-color: grey;}");
        loading=false;
    }else
    {
        ui->pushButton_stop_start->setText("暂停");
        ui->progressBar_send->setStyleSheet("QProgressBar::chunk {  background-color: green;}");
        loading=true;
    }
    emit stopandstart();
}

void Dataitem::on_pushButton_cancel_clicked()
{
    emit cancel();
}

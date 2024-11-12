#include "logindialog.h"
#include "ui_logindialog.h"

#include <QMessageBox>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);
    //this->setWindowFlags(Qt::FramelessWindowHint);
}

LoginDialog::~LoginDialog()
{
    delete ui;
}

void LoginDialog::on_btnLogin_clicked()
{
    QString account=ui->lineEdit_account->text().trimmed();
    QString pw=ui->lineEdit_pw->text().trimmed();

    if(account.isEmpty())
    {
        ui->lineEdit_account->setPlaceholderText("请输入账号");
        return;
    }else if(pw.isEmpty())
    {
        ui->lineEdit_pw->setFocus();
        return;
    }

    if(account=="admin"&&"123456"==pw)//管理员
    {
        mainwind=new MainWidget();
        mainwind->accountid="1";
        mainwind->initSever();
        mainwind->show();

    }
    else if(account=="wushi"&&"123456"==pw)
    {
        mainwind=new MainWidget();
        mainwind->accountid="11";
        mainwind->initSocket();
        mainwind->show();

    }else if(account=="xiaomin"&&"123456"==pw)
    {
        mainwind=new MainWidget();
        mainwind->accountid="4";
        mainwind->initSocket();
        mainwind->show();
    }
    else
    {
        QMessageBox::warning(this,"账号密码不正确","请重试");
        ui->lineEdit_pw->clear();
        ui->lineEdit_pw->setFocus();
        return;
    }
    this->close();



}

void LoginDialog::on_btnresgister_clicked()
{

}

void LoginDialog::on_btnMenu_Close_clicked()
{
    this->close();
}

void LoginDialog::on_btnMenu_Min_clicked()
{
    this->showMinimized();
}

bool LoginDialog::eventFilter(QObject *obj, QEvent *event)
{
    if(event->type()==QEvent::KeyPress)
    {
        QKeyEvent* key=static_cast<QKeyEvent*>(event);
        if(key->key()==Qt::Key_Return||key->key()==Qt::Key_Enter)
        {
            on_btnLogin_clicked();
            return true;
        }
    }
    return QObject::eventFilter(obj,event);
}

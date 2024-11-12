#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QEvent>
#include <QKeyEvent>

#include"mainwidget.h"
namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

private slots:
    void on_btnLogin_clicked();

    void on_btnresgister_clicked();

    void on_btnMenu_Close_clicked();

    void on_btnMenu_Min_clicked();
protected:
    bool eventFilter(QObject *obj, QEvent *event);
private:
    Ui::LoginDialog *ui;
    MainWidget *mainwind;  //主窗口
};

#endif // LOGINDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDialog
{
public:
    QGroupBox *groupBox;
    QLabel *labUserName;
    QLabel *labUserPwd;
    QLineEdit *lineEdit_pw;
    QLineEdit *lineEdit_account;
    QPushButton *btnLogin;
    QPushButton *btnresgister;
    QLabel *labelbg;

    void setupUi(QDialog *LoginDialog)
    {
        if (LoginDialog->objectName().isEmpty())
            LoginDialog->setObjectName(QStringLiteral("LoginDialog"));
        LoginDialog->resize(611, 419);
        groupBox = new QGroupBox(LoginDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(100, 130, 431, 131));
        groupBox->setStyleSheet(QLatin1String("\n"
"background-color: rgb(163, 245, 245,98);"));
        labUserName = new QLabel(groupBox);
        labUserName->setObjectName(QStringLiteral("labUserName"));
        labUserName->setGeometry(QRect(20, 20, 71, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        labUserName->setFont(font);
        labUserName->setStyleSheet(QStringLiteral("background-color: transparent;"));
        labUserPwd = new QLabel(groupBox);
        labUserPwd->setObjectName(QStringLiteral("labUserPwd"));
        labUserPwd->setGeometry(QRect(20, 60, 91, 31));
        labUserPwd->setFont(font);
        labUserPwd->setStyleSheet(QStringLiteral("background-color: transparent;"));
        lineEdit_pw = new QLineEdit(groupBox);
        lineEdit_pw->setObjectName(QStringLiteral("lineEdit_pw"));
        lineEdit_pw->setGeometry(QRect(120, 60, 161, 28));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        lineEdit_pw->setFont(font1);
        lineEdit_pw->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255,80);"));
        lineEdit_pw->setEchoMode(QLineEdit::Password);
        lineEdit_pw->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lineEdit_account = new QLineEdit(groupBox);
        lineEdit_account->setObjectName(QStringLiteral("lineEdit_account"));
        lineEdit_account->setGeometry(QRect(120, 19, 161, 28));
        lineEdit_account->setFont(font);
        lineEdit_account->setStyleSheet(QStringLiteral("background-color: rgb(170, 255, 255,80);"));
        btnLogin = new QPushButton(groupBox);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));
        btnLogin->setGeometry(QRect(300, 20, 101, 28));
        btnLogin->setFont(font);
        btnLogin->setCursor(QCursor(Qt::OpenHandCursor));
        btnLogin->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLogin->setIcon(icon);
        btnLogin->setIconSize(QSize(20, 20));
        btnresgister = new QPushButton(groupBox);
        btnresgister->setObjectName(QStringLiteral("btnresgister"));
        btnresgister->setGeometry(QRect(300, 60, 101, 28));
        btnresgister->setFont(font);
        btnresgister->setCursor(QCursor(Qt::OpenHandCursor));
        btnresgister->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnresgister->setIcon(icon1);
        btnresgister->setIconSize(QSize(20, 20));
        labUserName->raise();
        labUserPwd->raise();
        lineEdit_account->raise();
        lineEdit_pw->raise();
        btnLogin->raise();
        btnresgister->raise();
        labelbg = new QLabel(LoginDialog);
        labelbg->setObjectName(QStringLiteral("labelbg"));
        labelbg->setGeometry(QRect(0, 0, 611, 421));
        labelbg->setStyleSheet(QLatin1String("background-image: url(:/img/background/login.jpg);\n"
"background-repeat: no-repeat;\n"
"background-position: center;\n"
""));
        labelbg->raise();
        groupBox->raise();

        retranslateUi(LoginDialog);

        QMetaObject::connectSlotsByName(LoginDialog);
    } // setupUi

    void retranslateUi(QDialog *LoginDialog)
    {
        LoginDialog->setWindowTitle(QApplication::translate("LoginDialog", "Dialog", 0));
        groupBox->setTitle(QString());
        labUserName->setText(QApplication::translate("LoginDialog", "\350\264\246\345\217\267:", 0));
        labUserPwd->setText(QApplication::translate("LoginDialog", "\345\257\206\347\240\201\357\274\232", 0));
#ifndef QT_NO_TOOLTIP
        lineEdit_pw->setToolTip(QApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
#endif // QT_NO_TOOLTIP
        lineEdit_pw->setText(QString());
        lineEdit_pw->setPlaceholderText(QApplication::translate("LoginDialog", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        btnLogin->setText(QApplication::translate("LoginDialog", "\347\231\273\345\275\225(&L)", 0));
#ifndef QT_NO_TOOLTIP
        btnresgister->setToolTip(QApplication::translate("LoginDialog", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        btnresgister->setWhatsThis(QApplication::translate("LoginDialog", "<html><head/><body><p><br/></p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        btnresgister->setText(QApplication::translate("LoginDialog", "\346\263\250\345\206\214(&R)", 0));
        labelbg->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LoginDialog: public Ui_LoginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H

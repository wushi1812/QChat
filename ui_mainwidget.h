/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *Titleicon;
    QLabel *label_Title;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *setingButton;
    QPushButton *minButton;
    QPushButton *closeButton;
    QHBoxLayout *horizontalLayout;
    QLabel *label_img;
    QSpacerItem *horizontalSpacer;
    QLabel *label_name;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_changeimg;
    QPushButton *pushButton_changeinfo;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_seach;
    QLineEdit *lineEdit_find;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_messege;
    QPushButton *pushButton_friend;
    QPushButton *pushButton_space;
    QStackedWidget *stackedWidget;
    QWidget *page_mes;
    QVBoxLayout *verticalLayout_3;
    QListWidget *listMessage;
    QHBoxLayout *horizontalLayout_8;

    void setupUi(QWidget *MainWidget)
    {
        if (MainWidget->objectName().isEmpty())
            MainWidget->setObjectName(QStringLiteral("MainWidget"));
        MainWidget->resize(467, 800);
        MainWidget->setMinimumSize(QSize(400, 800));
        MainWidget->setStyleSheet(QLatin1String("QPushButton::hover{background-color: rgb(202, 202, 202);}\n"
"\n"
"    QPushButton:pressed {\n"
"        background-color: #2c3e50;\n"
"        bottom: 5px;\n"
"    }"));
        verticalLayout_2 = new QVBoxLayout(MainWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Titleicon = new QLabel(MainWidget);
        Titleicon->setObjectName(QStringLiteral("Titleicon"));
        Titleicon->setPixmap(QPixmap(QString::fromUtf8(":/img/icon/per3.png")));

        horizontalLayout_5->addWidget(Titleicon);

        label_Title = new QLabel(MainWidget);
        label_Title->setObjectName(QStringLiteral("label_Title"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_Title->sizePolicy().hasHeightForWidth());
        label_Title->setSizePolicy(sizePolicy);
        label_Title->setStyleSheet(QLatin1String("background-color: rgb(230, 230, 230);\n"
""));

        horizontalLayout_5->addWidget(label_Title);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        setingButton = new QPushButton(MainWidget);
        setingButton->setObjectName(QStringLiteral("setingButton"));
        setingButton->setMinimumSize(QSize(40, 40));
        setingButton->setMaximumSize(QSize(40, 40));
        setingButton->setStyleSheet(QLatin1String("border:0px;\n"
"background-color: rgb(222, 222, 222);\n"
"\n"
""));

        horizontalLayout_4->addWidget(setingButton);

        minButton = new QPushButton(MainWidget);
        minButton->setObjectName(QStringLiteral("minButton"));
        minButton->setMinimumSize(QSize(40, 40));
        minButton->setMaximumSize(QSize(40, 40));
        minButton->setStyleSheet(QLatin1String("border:0px;\n"
"background-color: rgb(222, 222, 222);\n"
"\n"
""));

        horizontalLayout_4->addWidget(minButton);

        closeButton = new QPushButton(MainWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        closeButton->setMinimumSize(QSize(40, 40));
        closeButton->setMaximumSize(QSize(40, 40));
        closeButton->setStyleSheet(QLatin1String("border:0px;\n"
"background-color: rgb(222, 222, 222);\n"
""));

        horizontalLayout_4->addWidget(closeButton);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(7, -1, 7, -1);
        label_img = new QLabel(MainWidget);
        label_img->setObjectName(QStringLiteral("label_img"));
        label_img->setMinimumSize(QSize(80, 80));
        label_img->setMaximumSize(QSize(80, 80));
        label_img->setFrameShape(QFrame::Box);
        label_img->setTextFormat(Qt::AutoText);
        label_img->setPixmap(QPixmap(QString::fromUtf8(":/img/headimg/my.png")));
        label_img->setScaledContents(true);

        horizontalLayout->addWidget(label_img);

        horizontalSpacer = new QSpacerItem(20, 17, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_name = new QLabel(MainWidget);
        label_name->setObjectName(QStringLiteral("label_name"));
        sizePolicy.setHeightForWidth(label_name->sizePolicy().hasHeightForWidth());
        label_name->setSizePolicy(sizePolicy);
        label_name->setMinimumSize(QSize(200, 80));
        label_name->setSizeIncrement(QSize(0, 0));
        label_name->setLayoutDirection(Qt::LeftToRight);
        label_name->setStyleSheet(QString::fromUtf8("font: 14pt \"Arial\";\n"
"font: 12pt \"\351\273\221\344\275\223\";"));
        label_name->setLineWidth(1);
        label_name->setTextFormat(Qt::AutoText);
        label_name->setScaledContents(false);
        label_name->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_name->setWordWrap(false);
        label_name->setMargin(27);

        horizontalLayout->addWidget(label_name);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_changeimg = new QPushButton(MainWidget);
        pushButton_changeimg->setObjectName(QStringLiteral("pushButton_changeimg"));

        verticalLayout->addWidget(pushButton_changeimg);

        pushButton_changeinfo = new QPushButton(MainWidget);
        pushButton_changeinfo->setObjectName(QStringLiteral("pushButton_changeinfo"));

        verticalLayout->addWidget(pushButton_changeinfo);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(7, -1, 7, -1);
        label_seach = new QLabel(MainWidget);
        label_seach->setObjectName(QStringLiteral("label_seach"));
        label_seach->setMinimumSize(QSize(30, 30));
        label_seach->setMaximumSize(QSize(30, 30));
        label_seach->setPixmap(QPixmap(QString::fromUtf8(":/img/icon/search.png")));

        horizontalLayout_3->addWidget(label_seach);

        lineEdit_find = new QLineEdit(MainWidget);
        lineEdit_find->setObjectName(QStringLiteral("lineEdit_find"));
        lineEdit_find->setMinimumSize(QSize(200, 30));

        horizontalLayout_3->addWidget(lineEdit_find);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(7, -1, 7, -1);
        pushButton_messege = new QPushButton(MainWidget);
        pushButton_messege->setObjectName(QStringLiteral("pushButton_messege"));
        pushButton_messege->setStyleSheet(QLatin1String("QPushButton::hover{background-color: rgb(202, 202, 202);}\n"
"\n"
"    QPushButton:pressed {\n"
"        background-color: #2c3e50;\n"
"        bottom: 5px;\n"
"    }"));

        horizontalLayout_2->addWidget(pushButton_messege);

        pushButton_friend = new QPushButton(MainWidget);
        pushButton_friend->setObjectName(QStringLiteral("pushButton_friend"));
        pushButton_friend->setStyleSheet(QLatin1String("QPushButton::hover{background-color: rgb(202, 202, 202);}\n"
"\n"
"    QPushButton:pressed {\n"
"        background-color: #2c3e50;\n"
"        bottom: 5px;\n"
"    }"));

        horizontalLayout_2->addWidget(pushButton_friend);

        pushButton_space = new QPushButton(MainWidget);
        pushButton_space->setObjectName(QStringLiteral("pushButton_space"));
        pushButton_space->setStyleSheet(QLatin1String("QPushButton::hover{background-color: rgb(202, 202, 202);}\n"
"\n"
"    QPushButton:pressed {\n"
"        background-color: #2c3e50;\n"
"        bottom: 5px;\n"
"    }"));

        horizontalLayout_2->addWidget(pushButton_space);


        verticalLayout_2->addLayout(horizontalLayout_2);

        stackedWidget = new QStackedWidget(MainWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy1);
        page_mes = new QWidget();
        page_mes->setObjectName(QStringLiteral("page_mes"));
        verticalLayout_3 = new QVBoxLayout(page_mes);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        listMessage = new QListWidget(page_mes);
        listMessage->setObjectName(QStringLiteral("listMessage"));
        sizePolicy1.setHeightForWidth(listMessage->sizePolicy().hasHeightForWidth());
        listMessage->setSizePolicy(sizePolicy1);
        listMessage->setStyleSheet(QStringLiteral("outline:0px;"));

        verticalLayout_3->addWidget(listMessage);

        stackedWidget->addWidget(page_mes);

        verticalLayout_2->addWidget(stackedWidget);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, 0, -1);

        verticalLayout_2->addLayout(horizontalLayout_8);


        retranslateUi(MainWidget);

        QMetaObject::connectSlotsByName(MainWidget);
    } // setupUi

    void retranslateUi(QWidget *MainWidget)
    {
        MainWidget->setWindowTitle(QApplication::translate("MainWidget", "MainWidget", 0));
        Titleicon->setText(QString());
        label_Title->setText(QString());
        setingButton->setText(QApplication::translate("MainWidget", "*", 0));
        minButton->setText(QApplication::translate("MainWidget", "-", 0));
        closeButton->setText(QApplication::translate("MainWidget", "X", 0));
        label_img->setText(QString());
        label_name->setText(QApplication::translate("MainWidget", "\346\227\240\350\247\206\344\270\200\344\270\200", 0));
        pushButton_changeimg->setText(QApplication::translate("MainWidget", "\346\233\264\346\215\242\345\244\264\345\203\217", 0));
        pushButton_changeinfo->setText(QApplication::translate("MainWidget", "\344\277\256\346\224\271\346\266\210\346\201\257", 0));
        label_seach->setText(QString());
        lineEdit_find->setPlaceholderText(QApplication::translate("MainWidget", "\346\220\234\347\264\242", 0));
        pushButton_messege->setText(QApplication::translate("MainWidget", "\346\266\210\346\201\257", 0));
        pushButton_friend->setText(QApplication::translate("MainWidget", "\350\201\224\347\263\273\344\272\272", 0));
        pushButton_space->setText(QApplication::translate("MainWidget", "\347\251\272\351\227\264", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWidget: public Ui_MainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H

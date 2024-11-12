/********************************************************************************
** Form generated from reading UI file 'dataitem.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATAITEM_H
#define UI_DATAITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dataitem
{
public:
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *Dataicon;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labNameData;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QProgressBar *progressBar_send;
    QLabel *label_datainfo;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_loading;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_stop_start;
    QPushButton *pushButton_cancel;
    QGroupBox *groupBox_over;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_download;
    QPushButton *pushButton_open;
    QPushButton *pushButton_openfile;

    void setupUi(QWidget *Dataitem)
    {
        if (Dataitem->objectName().isEmpty())
            Dataitem->setObjectName(QStringLiteral("Dataitem"));
        Dataitem->resize(395, 120);
        Dataitem->setMinimumSize(QSize(395, 120));
        Dataitem->setMaximumSize(QSize(395, 126));
        Dataitem->setStyleSheet(QStringLiteral(""));
        horizontalLayout_5 = new QHBoxLayout(Dataitem);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(2, 5, 2, 2);
        groupBox = new QGroupBox(Dataitem);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMaximumSize(QSize(400, 16777215));
        groupBox->setStyleSheet(QStringLiteral(""));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 5);
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(10, -1, -1, -1);
        Dataicon = new QLabel(groupBox_2);
        Dataicon->setObjectName(QStringLiteral("Dataicon"));
        Dataicon->setMinimumSize(QSize(45, 45));
        Dataicon->setMaximumSize(QSize(45, 45));

        horizontalLayout_4->addWidget(Dataicon);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(7, -1, -1, -1);
        labNameData = new QLabel(groupBox_2);
        labNameData->setObjectName(QStringLiteral("labNameData"));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setPointSize(10);
        labNameData->setFont(font);

        horizontalLayout->addWidget(labNameData);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(10, -1, -1, -1);
        progressBar_send = new QProgressBar(groupBox_2);
        progressBar_send->setObjectName(QStringLiteral("progressBar_send"));
        progressBar_send->setMinimumSize(QSize(250, 0));
        progressBar_send->setMaximumSize(QSize(16777215, 10));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(8);
        progressBar_send->setFont(font1);
        progressBar_send->setStyleSheet(QStringLiteral("QProgressBar::chunk {  background-color: green;}"));
        progressBar_send->setValue(0);

        horizontalLayout_2->addWidget(progressBar_send);

        label_datainfo = new QLabel(groupBox_2);
        label_datainfo->setObjectName(QStringLiteral("label_datainfo"));
        QFont font2;
        font2.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font2.setPointSize(8);
        label_datainfo->setFont(font2);

        horizontalLayout_2->addWidget(label_datainfo);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(groupBox_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(8);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 6, 15, 0);
        horizontalSpacer_3 = new QSpacerItem(213, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        groupBox_loading = new QGroupBox(groupBox);
        groupBox_loading->setObjectName(QStringLiteral("groupBox_loading"));
        groupBox_loading->setStyleSheet(QStringLiteral("border:0px;"));
        horizontalLayout_7 = new QHBoxLayout(groupBox_loading);
        horizontalLayout_7->setSpacing(8);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_stop_start = new QPushButton(groupBox_loading);
        pushButton_stop_start->setObjectName(QStringLiteral("pushButton_stop_start"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font3.setPointSize(7);
        pushButton_stop_start->setFont(font3);
        pushButton_stop_start->setStyleSheet(QStringLiteral("border:0px;"));

        horizontalLayout_7->addWidget(pushButton_stop_start);

        pushButton_cancel = new QPushButton(groupBox_loading);
        pushButton_cancel->setObjectName(QStringLiteral("pushButton_cancel"));
        pushButton_cancel->setFont(font3);
        pushButton_cancel->setStyleSheet(QStringLiteral("border:0px;"));

        horizontalLayout_7->addWidget(pushButton_cancel);


        horizontalLayout_3->addWidget(groupBox_loading);

        groupBox_over = new QGroupBox(groupBox);
        groupBox_over->setObjectName(QStringLiteral("groupBox_over"));
        groupBox_over->setStyleSheet(QStringLiteral("border:0px;"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_over);
        horizontalLayout_6->setSpacing(8);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_download = new QPushButton(groupBox_over);
        pushButton_download->setObjectName(QStringLiteral("pushButton_download"));
        pushButton_download->setMaximumSize(QSize(50, 16777215));
        QFont font4;
        font4.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font4.setPointSize(7);
        pushButton_download->setFont(font4);
        pushButton_download->setStyleSheet(QStringLiteral("border:0px;"));

        horizontalLayout_6->addWidget(pushButton_download);

        pushButton_open = new QPushButton(groupBox_over);
        pushButton_open->setObjectName(QStringLiteral("pushButton_open"));
        pushButton_open->setMaximumSize(QSize(45, 16777215));
        pushButton_open->setFont(font4);
        pushButton_open->setStyleSheet(QStringLiteral("border:0px;"));

        horizontalLayout_6->addWidget(pushButton_open);

        pushButton_openfile = new QPushButton(groupBox_over);
        pushButton_openfile->setObjectName(QStringLiteral("pushButton_openfile"));
        pushButton_openfile->setMaximumSize(QSize(80, 16777215));
        pushButton_openfile->setFont(font4);
        pushButton_openfile->setStyleSheet(QStringLiteral("border:0px;"));

        horizontalLayout_6->addWidget(pushButton_openfile);


        horizontalLayout_3->addWidget(groupBox_over);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);


        horizontalLayout_5->addWidget(groupBox);


        retranslateUi(Dataitem);

        QMetaObject::connectSlotsByName(Dataitem);
    } // setupUi

    void retranslateUi(QWidget *Dataitem)
    {
        Dataitem->setWindowTitle(QApplication::translate("Dataitem", "Form", 0));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        Dataicon->setText(QString());
        labNameData->setText(QApplication::translate("Dataitem", "name1", 0));
        progressBar_send->setFormat(QString());
        label_datainfo->setText(QApplication::translate("Dataitem", "Text", 0));
        groupBox_loading->setTitle(QString());
        pushButton_stop_start->setText(QApplication::translate("Dataitem", "\346\232\202\345\201\234", 0));
        pushButton_cancel->setText(QApplication::translate("Dataitem", "\345\217\226\346\266\210", 0));
        groupBox_over->setTitle(QString());
        pushButton_download->setText(QApplication::translate("Dataitem", "\344\270\213\350\275\275", 0));
        pushButton_open->setText(QApplication::translate("Dataitem", "\346\211\223\345\274\200", 0));
        pushButton_openfile->setText(QApplication::translate("Dataitem", "\346\211\223\345\274\200\346\226\207\344\273\266\345\244\271", 0));
    } // retranslateUi

};

namespace Ui {
    class Dataitem: public Ui_Dataitem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATAITEM_H

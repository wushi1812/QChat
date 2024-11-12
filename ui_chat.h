/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_biaoqing;
    QPushButton *pushButton_jieping;
    QPushButton *pushButton_data;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_history;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_enter;
    QGroupBox *groupBox_history;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_history;
    QHBoxLayout *horizontalLayout;
    QPushButton *history_all_pushButton;
    QPushButton *history_data_Button;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QStackedWidget *stackedWidget_history;
    QWidget *page;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget_history;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QListWidget *listWidget_Data;
    QWidget *page_2;

    void setupUi(QWidget *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName(QStringLiteral("Chat"));
        Chat->resize(955, 679);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Chat->sizePolicy().hasHeightForWidth());
        Chat->setSizePolicy(sizePolicy);
        Chat->setStyleSheet(QStringLiteral("Chat::titlebar{alignment: Center;}"));
        horizontalLayout_4 = new QHBoxLayout(Chat);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(Chat);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setMinimumSize(QSize(500, 300));

        verticalLayout->addWidget(listWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(7);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(11, 0, 11, -1);
        pushButton_biaoqing = new QPushButton(Chat);
        pushButton_biaoqing->setObjectName(QStringLiteral("pushButton_biaoqing"));
        pushButton_biaoqing->setMinimumSize(QSize(40, 40));
        pushButton_biaoqing->setMaximumSize(QSize(40, 40));
        QIcon icon;
        icon.addFile(QStringLiteral(":/img/icon/biaoqing.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_biaoqing->setIcon(icon);
        pushButton_biaoqing->setIconSize(QSize(35, 35));

        horizontalLayout_2->addWidget(pushButton_biaoqing);

        pushButton_jieping = new QPushButton(Chat);
        pushButton_jieping->setObjectName(QStringLiteral("pushButton_jieping"));
        pushButton_jieping->setMinimumSize(QSize(40, 40));
        pushButton_jieping->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButton_jieping);

        pushButton_data = new QPushButton(Chat);
        pushButton_data->setObjectName(QStringLiteral("pushButton_data"));
        pushButton_data->setMinimumSize(QSize(40, 40));
        pushButton_data->setMaximumSize(QSize(40, 40));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/img/icon/data.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_data->setIcon(icon1);
        pushButton_data->setIconSize(QSize(36, 36));

        horizontalLayout_2->addWidget(pushButton_data);

        horizontalSpacer = new QSpacerItem(500, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_history = new QPushButton(Chat);
        pushButton_history->setObjectName(QStringLiteral("pushButton_history"));
        pushButton_history->setMinimumSize(QSize(40, 40));
        pushButton_history->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(pushButton_history);


        verticalLayout->addLayout(horizontalLayout_2);

        textEdit = new QTextEdit(Chat);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy1);
        textEdit->setMaximumSize(QSize(16777215, 300));

        verticalLayout->addWidget(textEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(7);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, -1, 0, 2);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton_enter = new QPushButton(Chat);
        pushButton_enter->setObjectName(QStringLiteral("pushButton_enter"));

        horizontalLayout_3->addWidget(pushButton_enter);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_4->addLayout(verticalLayout);

        groupBox_history = new QGroupBox(Chat);
        groupBox_history->setObjectName(QStringLiteral("groupBox_history"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_history->sizePolicy().hasHeightForWidth());
        groupBox_history->setSizePolicy(sizePolicy2);
        groupBox_history->setMaximumSize(QSize(425, 16777215));
        verticalLayout_3 = new QVBoxLayout(groupBox_history);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_history = new QVBoxLayout();
        verticalLayout_history->setSpacing(0);
        verticalLayout_history->setObjectName(QStringLiteral("verticalLayout_history"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, -1, -1, -1);
        history_all_pushButton = new QPushButton(groupBox_history);
        history_all_pushButton->setObjectName(QStringLiteral("history_all_pushButton"));
        history_all_pushButton->setMinimumSize(QSize(50, 30));
        history_all_pushButton->setMaximumSize(QSize(50, 16777215));
        history_all_pushButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(history_all_pushButton);

        history_data_Button = new QPushButton(groupBox_history);
        history_data_Button->setObjectName(QStringLiteral("history_data_Button"));
        history_data_Button->setMinimumSize(QSize(50, 30));
        history_data_Button->setMaximumSize(QSize(50, 16777215));
        history_data_Button->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(history_data_Button);

        pushButton = new QPushButton(groupBox_history);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(50, 30));
        pushButton->setMaximumSize(QSize(50, 16777215));
        pushButton->setStyleSheet(QStringLiteral(""));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(20, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout_history->addLayout(horizontalLayout);

        stackedWidget_history = new QStackedWidget(groupBox_history);
        stackedWidget_history->setObjectName(QStringLiteral("stackedWidget_history"));
        stackedWidget_history->setMaximumSize(QSize(420, 16777215));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_2 = new QVBoxLayout(page);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        listWidget_history = new QListWidget(page);
        listWidget_history->setObjectName(QStringLiteral("listWidget_history"));
        listWidget_history->setMinimumSize(QSize(400, 0));
        listWidget_history->setMaximumSize(QSize(400, 16777215));

        verticalLayout_2->addWidget(listWidget_history);

        stackedWidget_history->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        listWidget_Data = new QListWidget(page_3);
        listWidget_Data->setObjectName(QStringLiteral("listWidget_Data"));

        verticalLayout_4->addWidget(listWidget_Data);

        stackedWidget_history->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget_history->addWidget(page_2);

        verticalLayout_history->addWidget(stackedWidget_history);


        verticalLayout_3->addLayout(verticalLayout_history);


        horizontalLayout_4->addWidget(groupBox_history);


        retranslateUi(Chat);

        stackedWidget_history->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QWidget *Chat)
    {
        Chat->setWindowTitle(QApplication::translate("Chat", "Form", 0));
        pushButton_biaoqing->setText(QString());
        pushButton_jieping->setText(QApplication::translate("Chat", "Y", 0));
        pushButton_data->setText(QString());
        pushButton_history->setText(QApplication::translate("Chat", "O", 0));
        pushButton_enter->setText(QApplication::translate("Chat", "\345\217\221\351\200\201", 0));
        groupBox_history->setTitle(QString());
        history_all_pushButton->setText(QApplication::translate("Chat", "\345\205\250\351\203\250", 0));
        history_data_Button->setText(QApplication::translate("Chat", "\346\226\207\344\273\266", 0));
        pushButton->setText(QApplication::translate("Chat", "\345\233\276\347\211\207", 0));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H

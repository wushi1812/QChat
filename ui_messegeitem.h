/********************************************************************************
** Form generated from reading UI file 'messegeitem.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSEGEITEM_H
#define UI_MESSEGEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Messegeitem
{
public:
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widPicturePer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labNameMess;
    QSpacerItem *horizontalSpacer;
    QLabel *labTimer;
    QLabel *labInform;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QLabel *labred;

    void setupUi(QWidget *Messegeitem)
    {
        if (Messegeitem->objectName().isEmpty())
            Messegeitem->setObjectName(QStringLiteral("Messegeitem"));
        Messegeitem->resize(431, 87);
        Messegeitem->setMinimumSize(QSize(15, 15));
        horizontalLayout_4 = new QHBoxLayout(Messegeitem);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        widPicturePer = new QWidget(Messegeitem);
        widPicturePer->setObjectName(QStringLiteral("widPicturePer"));
        widPicturePer->setMinimumSize(QSize(40, 40));
        widPicturePer->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(widPicturePer);


        horizontalLayout_3->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labNameMess = new QLabel(Messegeitem);
        labNameMess->setObjectName(QStringLiteral("labNameMess"));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setPointSize(10);
        labNameMess->setFont(font);

        horizontalLayout_2->addWidget(labNameMess);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        labTimer = new QLabel(Messegeitem);
        labTimer->setObjectName(QStringLiteral("labTimer"));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei UI"));
        labTimer->setFont(font1);
        labTimer->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labTimer);


        verticalLayout->addLayout(horizontalLayout_2);

        labInform = new QLabel(Messegeitem);
        labInform->setObjectName(QStringLiteral("labInform"));
        labInform->setFont(font1);

        verticalLayout->addWidget(labInform);


        horizontalLayout_3->addLayout(verticalLayout);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(7);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, 0, 0);
        verticalSpacer = new QSpacerItem(22, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        labred = new QLabel(Messegeitem);
        labred->setObjectName(QStringLiteral("labred"));
        labred->setMinimumSize(QSize(20, 20));
        labred->setMaximumSize(QSize(16777215, 20));
        labred->setStyleSheet(QLatin1String("min-width:20px;min-height:20px;max-height:20px;border-radius:10px;border:0px solid black;background:red;\n"
"color: white;\n"
""));
        labred->setFrameShape(QFrame::NoFrame);
        labred->setAlignment(Qt::AlignCenter);
        labred->setIndent(-1);

        verticalLayout_2->addWidget(labred);


        horizontalLayout_4->addLayout(verticalLayout_2);


        retranslateUi(Messegeitem);

        QMetaObject::connectSlotsByName(Messegeitem);
    } // setupUi

    void retranslateUi(QWidget *Messegeitem)
    {
        Messegeitem->setWindowTitle(QApplication::translate("Messegeitem", "Form", 0));
        labNameMess->setText(QApplication::translate("Messegeitem", "name1", 0));
        labTimer->setText(QApplication::translate("Messegeitem", "time", 0));
        labInform->setText(QApplication::translate("Messegeitem", "inform", 0));
        labred->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Messegeitem: public Ui_Messegeitem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSEGEITEM_H

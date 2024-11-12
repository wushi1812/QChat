/********************************************************************************
** Form generated from reading UI file 'allhistoryitem.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLHISTORYITEM_H
#define UI_ALLHISTORYITEM_H

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

class Ui_Allhistoryitem
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_t;
    QLabel *label_name;
    QLabel *label_time;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_mess;

    void setupUi(QWidget *Allhistoryitem)
    {
        if (Allhistoryitem->objectName().isEmpty())
            Allhistoryitem->setObjectName(QStringLiteral("Allhistoryitem"));
        Allhistoryitem->resize(408, 159);
        Allhistoryitem->setMinimumSize(QSize(408, 150));
        Allhistoryitem->setMaximumSize(QSize(408, 16777215));
        verticalLayout_5 = new QVBoxLayout(Allhistoryitem);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(2, 2, 0, 2);
        horizontalLayout_t = new QHBoxLayout();
        horizontalLayout_t->setSpacing(20);
        horizontalLayout_t->setObjectName(QStringLiteral("horizontalLayout_t"));
        horizontalLayout_t->setContentsMargins(10, -1, -1, -1);
        label_name = new QLabel(Allhistoryitem);
        label_name->setObjectName(QStringLiteral("label_name"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_name->sizePolicy().hasHeightForWidth());
        label_name->setSizePolicy(sizePolicy);
        label_name->setMinimumSize(QSize(0, 30));
        label_name->setMaximumSize(QSize(16777215, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        label_name->setFont(font);
        label_name->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_t->addWidget(label_name);

        label_time = new QLabel(Allhistoryitem);
        label_time->setObjectName(QStringLiteral("label_time"));
        sizePolicy.setHeightForWidth(label_time->sizePolicy().hasHeightForWidth());
        label_time->setSizePolicy(sizePolicy);
        label_time->setMinimumSize(QSize(0, 30));
        label_time->setMaximumSize(QSize(16777215, 30));
        label_time->setFont(font);
        label_time->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_t->addWidget(label_time);

        horizontalSpacer = new QSpacerItem(40, 30, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_t->addItem(horizontalSpacer);


        verticalLayout_5->addLayout(horizontalLayout_t);

        verticalLayout_mess = new QVBoxLayout();
        verticalLayout_mess->setSpacing(0);
        verticalLayout_mess->setObjectName(QStringLiteral("verticalLayout_mess"));
        verticalLayout_mess->setContentsMargins(-1, 0, -1, -1);

        verticalLayout_5->addLayout(verticalLayout_mess);


        retranslateUi(Allhistoryitem);

        QMetaObject::connectSlotsByName(Allhistoryitem);
    } // setupUi

    void retranslateUi(QWidget *Allhistoryitem)
    {
        Allhistoryitem->setWindowTitle(QApplication::translate("Allhistoryitem", "Form", 0));
        label_name->setText(QString());
        label_time->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Allhistoryitem: public Ui_Allhistoryitem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLHISTORYITEM_H

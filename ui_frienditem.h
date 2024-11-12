/********************************************************************************
** Form generated from reading UI file 'frienditem.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDITEM_H
#define UI_FRIENDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Frienditem
{
public:
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *labred;
    QWidget *widPicturePer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labName;
    QSpacerItem *horizontalSpacer;
    QLabel *labInform;

    void setupUi(QDialog *Frienditem)
    {
        if (Frienditem->objectName().isEmpty())
            Frienditem->setObjectName(QStringLiteral("Frienditem"));
        Frienditem->resize(462, 87);
        horizontalLayout_4 = new QHBoxLayout(Frienditem);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labred = new QLabel(Frienditem);
        labred->setObjectName(QStringLiteral("labred"));
        labred->setMinimumSize(QSize(10, 10));
        labred->setMaximumSize(QSize(10, 10));

        horizontalLayout->addWidget(labred);

        widPicturePer = new QWidget(Frienditem);
        widPicturePer->setObjectName(QStringLiteral("widPicturePer"));
        widPicturePer->setMinimumSize(QSize(40, 40));
        widPicturePer->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(widPicturePer);


        horizontalLayout_3->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labName = new QLabel(Frienditem);
        labName->setObjectName(QStringLiteral("labName"));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI"));
        font.setPointSize(10);
        labName->setFont(font);

        horizontalLayout_2->addWidget(labName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        labInform = new QLabel(Frienditem);
        labInform->setObjectName(QStringLiteral("labInform"));
        QFont font1;
        font1.setFamily(QStringLiteral("Microsoft YaHei UI"));
        labInform->setFont(font1);

        verticalLayout->addWidget(labInform);


        horizontalLayout_3->addLayout(verticalLayout);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        retranslateUi(Frienditem);

        QMetaObject::connectSlotsByName(Frienditem);
    } // setupUi

    void retranslateUi(QDialog *Frienditem)
    {
        Frienditem->setWindowTitle(QApplication::translate("Frienditem", "Dialog", 0));
        labred->setText(QString());
        labName->setText(QApplication::translate("Frienditem", "name1", 0));
        labInform->setText(QApplication::translate("Frienditem", "inform", 0));
    } // retranslateUi

};

namespace Ui {
    class Frienditem: public Ui_Frienditem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDITEM_H

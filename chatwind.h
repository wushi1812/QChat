#ifndef CHATWIND_H
#define CHATWIND_H

#include <QWidget>
#include"chatpop/chatpop.h"
#include<QListWidgetItem>
#include<QDateTime>
#include<QKeyEvent>

namespace Ui {
class ChatWind;
}

class ChatWind : public QWidget
{
    Q_OBJECT

public:
    explicit ChatWind(QWidget *parent = 0);
    ~ChatWind();

private:
    Ui::ChatWind *ui;

};

#endif // CHATWIND_H

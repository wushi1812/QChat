#ifndef FRIENDITEM_H
#define FRIENDITEM_H

#include <QDialog>

namespace Ui {
class Frienditem;
}

class Frienditem : public QDialog
{
    Q_OBJECT

public:
    explicit Frienditem(QWidget *parent = 0);
    ~Frienditem();
    //设置用户图片路径
    void setStringPic(QString url);
    //设置用户名字
    void setName(QString str);
    //设置签名
    void setInformMessage(QString str);

private:
    Ui::Frienditem *ui;
};

#endif // FRIENDITEM_H

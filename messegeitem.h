#ifndef MESSEGEITEM_H
#define MESSEGEITEM_H

#include <QWidget>

namespace Ui {
class Messegeitem;
}

class Messegeitem : public QWidget
{
    Q_OBJECT

public:
    explicit Messegeitem(QWidget *parent = 0);
    ~Messegeitem();
    //设置是否有红点flog true 为红 false 为false
    void setRed(int flog);
    //设置用户图片路径
    void setStringPic(QString url);
    //设置用户名字
    void setName(QString str);
    //设置时间
    void setTime(QString str);
    //设置说明
    void setInformMessage(QString str);
private:
    Ui::Messegeitem *ui;
public:
    QString name;
    int rednum;
};

#endif // MESSEGEITEM_H

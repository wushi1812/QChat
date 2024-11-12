#ifndef ALLHISTORYITEM_H
#define ALLHISTORYITEM_H

#include <QWidget>
#include <QLayout>
namespace Ui {
class Allhistoryitem;
}

class Allhistoryitem : public QWidget
{
    Q_OBJECT

public:
    explicit Allhistoryitem(QWidget *parent = 0);
    ~Allhistoryitem();
    void setWidget(QWidget *wid);
    void setname(QString name);
    void settime(QString time);
private:
    Ui::Allhistoryitem *ui;
public:
    QString sendid;
    QString sendname;
    QString time;
};

#endif // ALLHISTORYITEM_H

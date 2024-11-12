#ifndef DATAITEM_H
#define DATAITEM_H

#include <QWidget>
#include<QFile>
#include<QFileIconProvider>
#include<QFileDialog>
#include<QDesktopServices>
namespace Ui {
class Dataitem;
}

class Dataitem : public QWidget
{
    Q_OBJECT

public:
    explicit Dataitem(QWidget *parent = 0);
    ~Dataitem();
    void copyDataitem(const Dataitem *other);
    //设置图标
    void setStringIcon(QString path);
    //设置文件名
    void setDataName(QString path);
    //设置信息
    void setDataInform(QString str);

private:
    Ui::Dataitem *ui;
public:
    bool loading;
    QString datapath;
    QString dataname;
    QString sendid;
    QString time;
    int datasize;
signals:
    void stopandstart();
    void cancel();
    void sendover();
private slots:
    void on_pushButton_openfile_clicked();
    void on_pushButton_open_clicked();
    void updateProgressSlot(int pro);
    void on_pushButton_stop_start_clicked();
    void on_pushButton_cancel_clicked();
};

#endif // DATAITEM_H

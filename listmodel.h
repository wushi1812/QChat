#ifndef LISTMODEL_H
#define LISTMODEL_H

#include <QObject>
#include<QAbstractListModel>


struct ListItemData
{
    QString  iconPath;
    QString  Name;

};
class ListModel : public QAbstractItemModel
{
    Q_OBJECT
public:
    ListModel(QObject *parent = NULL);
    ~ListModel();

    void init();
    QVariant data ( const QModelIndex & index, int role = Qt::DisplayRole ) const ;
    void deleteItem(int index);
    void addItem(ListItemData *pItem);
    int rowCount ( const QModelIndex & parent = QModelIndex() ) const;
    ListItemData* getItem(int index );


private:
    vector<ListItemData*> m_ItemDataVec;

};

#endif // LISTMODEL_H

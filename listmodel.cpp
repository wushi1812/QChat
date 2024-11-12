#include "listmodel.h"

ListModel::ListModel(QObject *parent) : QAbstractItemModel(parent)
{
    init();
}

ListModel::~ListModel()
{

}

void ListModel::init()
{
    for (int i = 1; i < 26; ++i)
        {
            ListItemData *pItem = new ListItemData;
            pItem->Name = QString::number(i);
            pItem->iconPath = QString(":/img/icon/per1.png").arg(i);
            QFile Iconfile(pItem->iconPath);
            if (Iconfile.exists())
            {
                m_ItemDataVec.push_back(pItem);
            }

        }
}

QVariant ListModel::data(const QModelIndex &index, int role) const
{
    if (index.row() > m_ItemDataVec.size())
        {
            return QVariant();
        }
        else
        {
           switch (role)
           {
           case Qt::DisplayRole:
               {
                   return m_ItemDataVec[index.row()]->Name;
               }
            break;
           case Qt::DecorationRole:
               {
                   return QIcon(m_ItemDataVec[index.row()]->iconPath);
               }
               break;
         case Qt::SizeHintRole:
               {
                   return QSize(10,50);

               }
           }
        }
    return QVariant();
}

void ListModel::deleteItem(int index)
{
    vector<ListItemData*>::iterator it = m_ItemDataVec.begin();
    m_ItemDataVec.erase(it + index);
}

void ListModel::addItem(ListItemData *pItem)
{
    if (pItem)
    {
        this->beginInsertRows(QModelIndex(),m_ItemDataVec.size(),m_ItemDataVec.size() + 1);
        this->endInsertRows();
    }

}

int ListModel::rowCount(const QModelIndex &parent) const
{
    return m_ItemDataVec.size();
}

ListItemData *ListModel::getItem(int index)
{
    if (index > -1 && index < m_ItemDataVec.size())
        {
            return m_ItemDataVec[index];
        }
}


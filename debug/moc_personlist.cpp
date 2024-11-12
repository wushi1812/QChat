/****************************************************************************
** Meta object code from reading C++ file 'personlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../personlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'personlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_personList_t {
    QByteArrayData data[14];
    char stringdata[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_personList_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_personList_t qt_meta_stringdata_personList = {
    {
QT_MOC_LITERAL(0, 0, 10), // "personList"
QT_MOC_LITERAL(1, 11, 8), // "openChat"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 2), // "id"
QT_MOC_LITERAL(4, 24, 8), // "addGroup"
QT_MOC_LITERAL(5, 33, 3), // "gid"
QT_MOC_LITERAL(6, 37, 9), // "groupname"
QT_MOC_LITERAL(7, 47, 9), // "deleGroup"
QT_MOC_LITERAL(8, 57, 12), // "slotAddGroup"
QT_MOC_LITERAL(9, 70, 12), // "slotDelGroup"
QT_MOC_LITERAL(10, 83, 12), // "slotAddBuddy"
QT_MOC_LITERAL(11, 96, 12), // "slotDelBuddy"
QT_MOC_LITERAL(12, 109, 10), // "slotRename"
QT_MOC_LITERAL(13, 120, 19) // "slotRenameEditFshed"

    },
    "personList\0openChat\0\0id\0addGroup\0gid\0"
    "groupname\0deleGroup\0slotAddGroup\0"
    "slotDelGroup\0slotAddBuddy\0slotDelBuddy\0"
    "slotRename\0slotRenameEditFshed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_personList[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       4,    2,   62,    2, 0x06 /* Public */,
       7,    2,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   72,    2, 0x0a /* Public */,
       9,    0,   73,    2, 0x0a /* Public */,
      10,    0,   74,    2, 0x0a /* Public */,
      11,    0,   75,    2, 0x0a /* Public */,
      12,    0,   76,    2, 0x0a /* Public */,
      13,    0,   77,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void personList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        personList *_t = static_cast<personList *>(_o);
        switch (_id) {
        case 0: _t->openChat((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->addGroup((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->deleGroup((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->slotAddGroup(); break;
        case 4: _t->slotDelGroup(); break;
        case 5: _t->slotAddBuddy(); break;
        case 6: _t->slotDelBuddy(); break;
        case 7: _t->slotRename(); break;
        case 8: _t->slotRenameEditFshed(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (personList::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&personList::openChat)) {
                *result = 0;
            }
        }
        {
            typedef void (personList::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&personList::addGroup)) {
                *result = 1;
            }
        }
        {
            typedef void (personList::*_t)(QString , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&personList::deleGroup)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject personList::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_personList.data,
      qt_meta_data_personList,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *personList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *personList::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_personList.stringdata))
        return static_cast<void*>(const_cast< personList*>(this));
    return QListWidget::qt_metacast(_clname);
}

int personList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void personList::openChat(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void personList::addGroup(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void personList::deleGroup(QString _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

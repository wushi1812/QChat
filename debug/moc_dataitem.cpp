/****************************************************************************
** Meta object code from reading C++ file 'dataitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../dataitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dataitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Dataitem_t {
    QByteArrayData data[11];
    char stringdata[182];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dataitem_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dataitem_t qt_meta_stringdata_Dataitem = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Dataitem"
QT_MOC_LITERAL(1, 9, 12), // "stopandstart"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 6), // "cancel"
QT_MOC_LITERAL(4, 30, 8), // "sendover"
QT_MOC_LITERAL(5, 39, 30), // "on_pushButton_openfile_clicked"
QT_MOC_LITERAL(6, 70, 26), // "on_pushButton_open_clicked"
QT_MOC_LITERAL(7, 97, 18), // "updateProgressSlot"
QT_MOC_LITERAL(8, 116, 3), // "pro"
QT_MOC_LITERAL(9, 120, 32), // "on_pushButton_stop_start_clicked"
QT_MOC_LITERAL(10, 153, 28) // "on_pushButton_cancel_clicked"

    },
    "Dataitem\0stopandstart\0\0cancel\0sendover\0"
    "on_pushButton_openfile_clicked\0"
    "on_pushButton_open_clicked\0"
    "updateProgressSlot\0pro\0"
    "on_pushButton_stop_start_clicked\0"
    "on_pushButton_cancel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dataitem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    1,   59,    2, 0x08 /* Private */,
       9,    0,   62,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dataitem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dataitem *_t = static_cast<Dataitem *>(_o);
        switch (_id) {
        case 0: _t->stopandstart(); break;
        case 1: _t->cancel(); break;
        case 2: _t->sendover(); break;
        case 3: _t->on_pushButton_openfile_clicked(); break;
        case 4: _t->on_pushButton_open_clicked(); break;
        case 5: _t->updateProgressSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_stop_start_clicked(); break;
        case 7: _t->on_pushButton_cancel_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Dataitem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dataitem::stopandstart)) {
                *result = 0;
            }
        }
        {
            typedef void (Dataitem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dataitem::cancel)) {
                *result = 1;
            }
        }
        {
            typedef void (Dataitem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Dataitem::sendover)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject Dataitem::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Dataitem.data,
      qt_meta_data_Dataitem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dataitem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dataitem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dataitem.stringdata))
        return static_cast<void*>(const_cast< Dataitem*>(this));
    return QWidget::qt_metacast(_clname);
}

int Dataitem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Dataitem::stopandstart()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Dataitem::cancel()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Dataitem::sendover()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE

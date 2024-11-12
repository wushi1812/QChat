/****************************************************************************
** Meta object code from reading C++ file 'senddatathread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../senddatathread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'senddatathread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SendDataThread_t {
    QByteArrayData data[9];
    char stringdata[82];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SendDataThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SendDataThread_t qt_meta_stringdata_SendDataThread = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SendDataThread"
QT_MOC_LITERAL(1, 15, 12), // "sendProgress"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "pro"
QT_MOC_LITERAL(4, 33, 9), // "sigFinish"
QT_MOC_LITERAL(5, 43, 8), // "sendbyte"
QT_MOC_LITERAL(6, 52, 4), // "byte"
QT_MOC_LITERAL(7, 57, 7), // "endSlot"
QT_MOC_LITERAL(8, 65, 16) // "stopandstartSlot"

    },
    "SendDataThread\0sendProgress\0\0pro\0"
    "sigFinish\0sendbyte\0byte\0endSlot\0"
    "stopandstartSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SendDataThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    0,   42,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   46,    2, 0x08 /* Private */,
       8,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SendDataThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SendDataThread *_t = static_cast<SendDataThread *>(_o);
        switch (_id) {
        case 0: _t->sendProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sigFinish(); break;
        case 2: _t->sendbyte((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 3: _t->endSlot(); break;
        case 4: _t->stopandstartSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SendDataThread::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendDataThread::sendProgress)) {
                *result = 0;
            }
        }
        {
            typedef void (SendDataThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendDataThread::sigFinish)) {
                *result = 1;
            }
        }
        {
            typedef void (SendDataThread::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SendDataThread::sendbyte)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject SendDataThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_SendDataThread.data,
      qt_meta_data_SendDataThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SendDataThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SendDataThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SendDataThread.stringdata))
        return static_cast<void*>(const_cast< SendDataThread*>(this));
    return QThread::qt_metacast(_clname);
}

int SendDataThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SendDataThread::sendProgress(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SendDataThread::sigFinish()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void SendDataThread::sendbyte(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE

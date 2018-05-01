/****************************************************************************
** Meta object code from reading C++ file 'waiting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "waiting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waiting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_waiting_t {
    QByteArrayData data[12];
    char stringdata0[103];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_waiting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_waiting_t qt_meta_stringdata_waiting = {
    {
QT_MOC_LITERAL(0, 0, 7), // "waiting"
QT_MOC_LITERAL(1, 8, 7), // "backres"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 1), // "i"
QT_MOC_LITERAL(4, 19, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(5, 36, 4), // "item"
QT_MOC_LITERAL(6, 41, 14), // "back_data_cmds"
QT_MOC_LITERAL(7, 56, 4), // "data"
QT_MOC_LITERAL(8, 61, 4), // "code"
QT_MOC_LITERAL(9, 66, 5), // "error"
QT_MOC_LITERAL(10, 72, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(11, 100, 2) // "er"

    },
    "waiting\0backres\0\0i\0QListWidgetItem*\0"
    "item\0back_data_cmds\0data\0code\0error\0"
    "QNetworkReply::NetworkError\0er"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_waiting[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   34,    2, 0x0a /* Public */,
       9,    1,   39,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,    7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void waiting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        waiting *_t = static_cast<waiting *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backres((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 1: _t->back_data_cmds((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (waiting::*_t)(int , QListWidgetItem * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&waiting::backres)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject waiting::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_waiting.data,
      qt_meta_data_waiting,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *waiting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *waiting::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_waiting.stringdata0))
        return static_cast<void*>(const_cast< waiting*>(this));
    return QDialog::qt_metacast(_clname);
}

int waiting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void waiting::backres(int _t1, QListWidgetItem * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

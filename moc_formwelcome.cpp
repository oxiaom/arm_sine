/****************************************************************************
** Meta object code from reading C++ file 'formwelcome.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "formwelcome.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'formwelcome.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FormWelcome_t {
    QByteArrayData data[17];
    char stringdata0[280];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FormWelcome_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FormWelcome_t qt_meta_stringdata_FormWelcome = {
    {
QT_MOC_LITERAL(0, 0, 11), // "FormWelcome"
QT_MOC_LITERAL(1, 12, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(4, 59, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(5, 83, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(6, 107, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(7, 131, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(8, 155, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(9, 179, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(10, 203, 14), // "back_data_cmds"
QT_MOC_LITERAL(11, 218, 4), // "data"
QT_MOC_LITERAL(12, 223, 4), // "code"
QT_MOC_LITERAL(13, 228, 10), // "back_error"
QT_MOC_LITERAL(14, 239, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(15, 267, 2), // "er"
QT_MOC_LITERAL(16, 270, 9) // "timerout_"

    },
    "FormWelcome\0on_pushButton_clicked\0\0"
    "on_pushButton_5_clicked\0on_pushButton_6_clicked\0"
    "on_pushButton_7_clicked\0on_pushButton_8_clicked\0"
    "on_pushButton_9_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_4_clicked\0back_data_cmds\0"
    "data\0code\0back_error\0QNetworkReply::NetworkError\0"
    "er\0timerout_"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FormWelcome[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    0,   71,    2, 0x0a /* Public */,
       5,    0,   72,    2, 0x0a /* Public */,
       6,    0,   73,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    2,   77,    2, 0x0a /* Public */,
      13,    1,   82,    2, 0x0a /* Public */,
      16,    0,   85,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   11,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

       0        // eod
};

void FormWelcome::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FormWelcome *_t = static_cast<FormWelcome *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_5_clicked(); break;
        case 2: _t->on_pushButton_6_clicked(); break;
        case 3: _t->on_pushButton_7_clicked(); break;
        case 4: _t->on_pushButton_8_clicked(); break;
        case 5: _t->on_pushButton_9_clicked(); break;
        case 6: _t->on_pushButton_2_clicked(); break;
        case 7: _t->on_pushButton_4_clicked(); break;
        case 8: _t->back_data_cmds((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->back_error((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 10: _t->timerout_(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject FormWelcome::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_FormWelcome.data,
      qt_meta_data_FormWelcome,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FormWelcome::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FormWelcome::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FormWelcome.stringdata0))
        return static_cast<void*>(const_cast< FormWelcome*>(this));
    return QWidget::qt_metacast(_clname);
}

int FormWelcome::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_RenderArea_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RenderArea_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RenderArea_t qt_meta_stringdata_RenderArea = {
    {
QT_MOC_LITERAL(0, 0, 10) // "RenderArea"

    },
    "RenderArea"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RenderArea[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void RenderArea::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject RenderArea::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_RenderArea.data,
      qt_meta_data_RenderArea,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *RenderArea::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RenderArea::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_RenderArea.stringdata0))
        return static_cast<void*>(const_cast< RenderArea*>(this));
    return QWidget::qt_metacast(_clname);
}

int RenderArea::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_Dialog_t {
    QByteArrayData data[23];
    char stringdata0[327];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dialog_t qt_meta_stringdata_Dialog = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Dialog"
QT_MOC_LITERAL(1, 7, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 9), // "connected"
QT_MOC_LITERAL(4, 40, 12), // "disconnected"
QT_MOC_LITERAL(5, 53, 5), // "error"
QT_MOC_LITERAL(6, 59, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(7, 88, 2), // "er"
QT_MOC_LITERAL(8, 91, 3), // "rdy"
QT_MOC_LITERAL(9, 95, 4), // "urdy"
QT_MOC_LITERAL(10, 100, 30), // "on_verticalSlider_valueChanged"
QT_MOC_LITERAL(11, 131, 5), // "value"
QT_MOC_LITERAL(12, 137, 13), // "on_save_value"
QT_MOC_LITERAL(13, 151, 14), // "on_save_value1"
QT_MOC_LITERAL(14, 166, 14), // "on_save_value2"
QT_MOC_LITERAL(15, 181, 19), // "localprot_connected"
QT_MOC_LITERAL(16, 201, 14), // "localprot_urdy"
QT_MOC_LITERAL(17, 216, 13), // "back_chaonima"
QT_MOC_LITERAL(18, 230, 1), // "v"
QT_MOC_LITERAL(19, 232, 13), // "fuck_chaonima"
QT_MOC_LITERAL(20, 246, 32), // "on_verticalSlider_2_valueChanged"
QT_MOC_LITERAL(21, 279, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(22, 303, 23) // "on_pushButton_3_clicked"

    },
    "Dialog\0on_pushButton_clicked\0\0connected\0"
    "disconnected\0error\0QAbstractSocket::SocketError\0"
    "er\0rdy\0urdy\0on_verticalSlider_valueChanged\0"
    "value\0on_save_value\0on_save_value1\0"
    "on_save_value2\0localprot_connected\0"
    "localprot_urdy\0back_chaonima\0v\0"
    "fuck_chaonima\0on_verticalSlider_2_valueChanged\0"
    "on_pushButton_2_clicked\0on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    1,  102,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    0,  106,    2, 0x08 /* Private */,
      10,    1,  107,    2, 0x08 /* Private */,
      12,    1,  110,    2, 0x08 /* Private */,
      13,    1,  113,    2, 0x08 /* Private */,
      14,    1,  116,    2, 0x08 /* Private */,
      15,    0,  119,    2, 0x08 /* Private */,
      16,    0,  120,    2, 0x08 /* Private */,
      17,    1,  121,    2, 0x08 /* Private */,
      19,    1,  124,    2, 0x08 /* Private */,
      20,    1,  127,    2, 0x08 /* Private */,
      21,    0,  130,    2, 0x08 /* Private */,
      22,    0,  131,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,   18,
    QMetaType::Int, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Dialog *_t = static_cast<Dialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->connected(); break;
        case 2: _t->disconnected(); break;
        case 3: _t->error((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 4: _t->rdy(); break;
        case 5: _t->urdy(); break;
        case 6: _t->on_verticalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_save_value((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_save_value1((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_save_value2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->localprot_connected(); break;
        case 11: _t->localprot_urdy(); break;
        case 12: { int _r = _t->back_chaonima((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 13: { int _r = _t->fuck_chaonima((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 14: _t->on_verticalSlider_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_pushButton_2_clicked(); break;
        case 16: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

const QMetaObject Dialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Dialog.data,
      qt_meta_data_Dialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Dialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Dialog.stringdata0))
        return static_cast<void*>(const_cast< Dialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int Dialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'maintictactoe.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TicTacToe/maintictactoe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintictactoe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mainTicTacToe_t {
    QByteArrayData data[8];
    char stringdata0[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainTicTacToe_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mainTicTacToe_t qt_meta_stringdata_mainTicTacToe = {
    {
QT_MOC_LITERAL(0, 0, 13), // "mainTicTacToe"
QT_MOC_LITERAL(1, 14, 21), // "on_helpButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "on_quitButton_clicked"
QT_MOC_LITERAL(4, 59, 22), // "on_loginButton_clicked"
QT_MOC_LITERAL(5, 82, 23), // "on_signUpButton_clicked"
QT_MOC_LITERAL(6, 106, 30), // "on_passwordResetButton_clicked"
QT_MOC_LITERAL(7, 137, 22) // "on_playAsGuest_clicked"

    },
    "mainTicTacToe\0on_helpButton_clicked\0"
    "\0on_quitButton_clicked\0on_loginButton_clicked\0"
    "on_signUpButton_clicked\0"
    "on_passwordResetButton_clicked\0"
    "on_playAsGuest_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mainTicTacToe[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mainTicTacToe::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mainTicTacToe *_t = static_cast<mainTicTacToe *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_helpButton_clicked(); break;
        case 1: _t->on_quitButton_clicked(); break;
        case 2: _t->on_loginButton_clicked(); break;
        case 3: _t->on_signUpButton_clicked(); break;
        case 4: _t->on_passwordResetButton_clicked(); break;
        case 5: _t->on_playAsGuest_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject mainTicTacToe::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_mainTicTacToe.data,
      qt_meta_data_mainTicTacToe,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mainTicTacToe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainTicTacToe::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mainTicTacToe.stringdata0))
        return static_cast<void*>(const_cast< mainTicTacToe*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int mainTicTacToe::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

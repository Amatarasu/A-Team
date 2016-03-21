/****************************************************************************
** Meta object code from reading C++ file 'maintictactoe.h'
**
<<<<<<< HEAD
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
=======
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TicTacToe/maintictactoe.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'maintictactoe.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
<<<<<<< HEAD
#error "This file was generated using the moc from 5.2.1. It"
=======
#error "This file was generated using the moc from 5.4.2. It"
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mainTicTacToe_t {
    QByteArrayData data[8];
<<<<<<< HEAD
    char stringdata[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_mainTicTacToe_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_mainTicTacToe_t qt_meta_stringdata_mainTicTacToe = {
    {
QT_MOC_LITERAL(0, 0, 13),
QT_MOC_LITERAL(1, 14, 21),
QT_MOC_LITERAL(2, 36, 0),
QT_MOC_LITERAL(3, 37, 21),
QT_MOC_LITERAL(4, 59, 22),
QT_MOC_LITERAL(5, 82, 23),
QT_MOC_LITERAL(6, 106, 22),
QT_MOC_LITERAL(7, 129, 30)
=======
    char stringdata[160];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mainTicTacToe_t, stringdata) + ofs \
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
QT_MOC_LITERAL(6, 106, 22), // "on_playAsGuess_clicked"
QT_MOC_LITERAL(7, 129, 30) // "on_passwordResetButton_clicked"

>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
    },
    "mainTicTacToe\0on_helpButton_clicked\0"
    "\0on_quitButton_clicked\0on_loginButton_clicked\0"
    "on_signUpButton_clicked\0on_playAsGuess_clicked\0"
<<<<<<< HEAD
    "on_passwordResetButton_clicked\0"
=======
    "on_passwordResetButton_clicked"
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
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
<<<<<<< HEAD
       1,    0,   44,    2, 0x08,
       3,    0,   45,    2, 0x08,
       4,    0,   46,    2, 0x08,
       5,    0,   47,    2, 0x08,
       6,    0,   48,    2, 0x08,
       7,    0,   49,    2, 0x08,
=======
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373

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
        switch (_id) {
        case 0: _t->on_helpButton_clicked(); break;
        case 1: _t->on_quitButton_clicked(); break;
        case 2: _t->on_loginButton_clicked(); break;
        case 3: _t->on_signUpButton_clicked(); break;
        case 4: _t->on_playAsGuess_clicked(); break;
        case 5: _t->on_passwordResetButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject mainTicTacToe::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_mainTicTacToe.data,
<<<<<<< HEAD
      qt_meta_data_mainTicTacToe,  qt_static_metacall, 0, 0}
=======
      qt_meta_data_mainTicTacToe,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
};


const QMetaObject *mainTicTacToe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainTicTacToe::qt_metacast(const char *_clname)
{
<<<<<<< HEAD
    if (!_clname) return 0;
=======
    if (!_clname) return Q_NULLPTR;
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
    if (!strcmp(_clname, qt_meta_stringdata_mainTicTacToe.stringdata))
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

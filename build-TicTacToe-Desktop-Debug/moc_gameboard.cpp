/****************************************************************************
** Meta object code from reading C++ file 'gameboard.h'
**
<<<<<<< HEAD
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
=======
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TicTacToe/gameboard.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameboard.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_gameBoard_t {
    QByteArrayData data[1];
<<<<<<< HEAD
    char stringdata[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_gameBoard_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_gameBoard_t qt_meta_stringdata_gameBoard = {
    {
QT_MOC_LITERAL(0, 0, 9)
    },
    "gameBoard\0"
=======
    char stringdata[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gameBoard_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gameBoard_t qt_meta_stringdata_gameBoard = {
    {
QT_MOC_LITERAL(0, 0, 9) // "gameBoard"

    },
    "gameBoard"
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gameBoard[] = {

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

void gameBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject gameBoard::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_gameBoard.data,
<<<<<<< HEAD
      qt_meta_data_gameBoard,  qt_static_metacall, 0, 0}
=======
      qt_meta_data_gameBoard,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
};


const QMetaObject *gameBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gameBoard::qt_metacast(const char *_clname)
{
<<<<<<< HEAD
    if (!_clname) return 0;
=======
    if (!_clname) return Q_NULLPTR;
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
    if (!strcmp(_clname, qt_meta_stringdata_gameBoard.stringdata))
        return static_cast<void*>(const_cast< gameBoard*>(this));
    return QDialog::qt_metacast(_clname);
}

int gameBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
/****************************************************************************
** Meta object code from reading C++ file 'registrationscene.h'
**
<<<<<<< HEAD
<<<<<<< HEAD
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
=======
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TicTacToe/registrationscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'registrationscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
<<<<<<< HEAD
<<<<<<< HEAD
#error "This file was generated using the moc from 5.2.1. It"
=======
#error "This file was generated using the moc from 5.4.2. It"
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
#error "This file was generated using the moc from 5.2.1. It"
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_registrationScene_t {
    QByteArrayData data[4];
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
    char stringdata[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_registrationScene_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_registrationScene_t qt_meta_stringdata_registrationScene = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 23),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 33)
    },
    "registrationScene\0on_signupButton_clicked\0"
    "\0on_registrationHelpButton_clicked\0"
<<<<<<< HEAD
=======
    char stringdata[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_registrationScene_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_registrationScene_t qt_meta_stringdata_registrationScene = {
    {
QT_MOC_LITERAL(0, 0, 17), // "registrationScene"
QT_MOC_LITERAL(1, 18, 23), // "on_signupButton_clicked"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 33) // "on_registrationHelpButton_cli..."

    },
    "registrationScene\0on_signupButton_clicked\0"
    "\0on_registrationHelpButton_clicked"
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_registrationScene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
<<<<<<< HEAD
<<<<<<< HEAD
       1,    0,   24,    2, 0x08,
       3,    0,   25,    2, 0x08,
=======
       1,    0,   24,    2, 0x08 /* Private */,
       3,    0,   25,    2, 0x08 /* Private */,
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
       1,    0,   24,    2, 0x08,
       3,    0,   25,    2, 0x08,
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void registrationScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        registrationScene *_t = static_cast<registrationScene *>(_o);
        switch (_id) {
        case 0: _t->on_signupButton_clicked(); break;
        case 1: _t->on_registrationHelpButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject registrationScene::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_registrationScene.data,
<<<<<<< HEAD
<<<<<<< HEAD
      qt_meta_data_registrationScene,  qt_static_metacall, 0, 0}
=======
      qt_meta_data_registrationScene,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
      qt_meta_data_registrationScene,  qt_static_metacall, 0, 0}
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
};


const QMetaObject *registrationScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *registrationScene::qt_metacast(const char *_clname)
{
<<<<<<< HEAD
<<<<<<< HEAD
    if (!_clname) return 0;
=======
    if (!_clname) return Q_NULLPTR;
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
    if (!_clname) return 0;
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
    if (!strcmp(_clname, qt_meta_stringdata_registrationScene.stringdata))
        return static_cast<void*>(const_cast< registrationScene*>(this));
    return QDialog::qt_metacast(_clname);
}

int registrationScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'GameController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Tic-Tac-Toe-master/GameController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GameController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameController_t {
    QByteArrayData data[15];
    char stringdata0[146];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameController_t qt_meta_stringdata_GameController = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GameController"
QT_MOC_LITERAL(1, 15, 14), // "onReceivedData"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "data"
QT_MOC_LITERAL(4, 36, 4), // "user"
QT_MOC_LITERAL(5, 41, 10), // "onGameInit"
QT_MOC_LITERAL(6, 52, 6), // "Player"
QT_MOC_LITERAL(7, 59, 2), // "p1"
QT_MOC_LITERAL(8, 62, 2), // "p2"
QT_MOC_LITERAL(9, 65, 18), // "onGameStateUpdated"
QT_MOC_LITERAL(10, 84, 10), // "BoardModel"
QT_MOC_LITERAL(11, 95, 5), // "board"
QT_MOC_LITERAL(12, 101, 11), // "onGameEnded"
QT_MOC_LITERAL(13, 113, 13), // "winningPlayer"
QT_MOC_LITERAL(14, 127, 18) // "onUserDisconnected"

    },
    "GameController\0onReceivedData\0\0data\0"
    "user\0onGameInit\0Player\0p1\0p2\0"
    "onGameStateUpdated\0BoardModel\0board\0"
    "onGameEnded\0winningPlayer\0onUserDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x08 /* Private */,
       5,    2,   44,    2, 0x08 /* Private */,
       9,    3,   49,    2, 0x08 /* Private */,
      12,    1,   56,    2, 0x08 /* Private */,
      14,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6, 0x80000000 | 10,    7,    8,   11,
    QMetaType::Void, 0x80000000 | 6,   13,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void GameController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onReceivedData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->onGameInit((*reinterpret_cast< Player(*)>(_a[1])),(*reinterpret_cast< Player(*)>(_a[2]))); break;
        case 2: _t->onGameStateUpdated((*reinterpret_cast< Player(*)>(_a[1])),(*reinterpret_cast< Player(*)>(_a[2])),(*reinterpret_cast< BoardModel(*)>(_a[3]))); break;
        case 3: _t->onGameEnded((*reinterpret_cast< Player(*)>(_a[1]))); break;
        case 4: _t->onUserDisconnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GameController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_GameController.data,
    qt_meta_data_GameController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GameController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GameController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

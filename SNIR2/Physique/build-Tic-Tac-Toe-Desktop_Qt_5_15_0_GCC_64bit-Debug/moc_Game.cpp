/****************************************************************************
** Meta object code from reading C++ file 'Game.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Tic-Tac-Toe-master/Game.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Game_t {
    QByteArrayData data[13];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Game_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Game_t qt_meta_stringdata_Game = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Game"
QT_MOC_LITERAL(1, 5, 16), // "update_msg_label"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 3), // "msg"
QT_MOC_LITERAL(4, 27, 8), // "gameInit"
QT_MOC_LITERAL(5, 36, 6), // "Player"
QT_MOC_LITERAL(6, 43, 2), // "p1"
QT_MOC_LITERAL(7, 46, 2), // "p2"
QT_MOC_LITERAL(8, 49, 16), // "gameStateUpdated"
QT_MOC_LITERAL(9, 66, 10), // "BoardModel"
QT_MOC_LITERAL(10, 77, 5), // "board"
QT_MOC_LITERAL(11, 83, 9), // "gameEnded"
QT_MOC_LITERAL(12, 93, 13) // "winningPlayer"

    },
    "Game\0update_msg_label\0\0msg\0gameInit\0"
    "Player\0p1\0p2\0gameStateUpdated\0BoardModel\0"
    "board\0gameEnded\0winningPlayer"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Game[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    2,   37,    2, 0x06 /* Public */,
       8,    3,   42,    2, 0x06 /* Public */,
      11,    1,   49,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5, 0x80000000 | 9,    6,    7,   10,
    QMetaType::Void, 0x80000000 | 5,   12,

       0        // eod
};

void Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Game *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update_msg_label((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->gameInit((*reinterpret_cast< Player(*)>(_a[1])),(*reinterpret_cast< Player(*)>(_a[2]))); break;
        case 2: _t->gameStateUpdated((*reinterpret_cast< Player(*)>(_a[1])),(*reinterpret_cast< Player(*)>(_a[2])),(*reinterpret_cast< BoardModel(*)>(_a[3]))); break;
        case 3: _t->gameEnded((*reinterpret_cast< Player(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Game::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::update_msg_label)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Game::*)(Player , Player );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::gameInit)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Game::*)(Player , Player , BoardModel );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::gameStateUpdated)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Game::*)(Player );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Game::gameEnded)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Game::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Game.data,
    qt_meta_data_Game,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Game::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Game.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Game::update_msg_label(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Game::gameInit(Player _t1, Player _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Game::gameStateUpdated(Player _t1, Player _t2, BoardModel _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Game::gameEnded(Player _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

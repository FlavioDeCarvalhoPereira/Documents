/****************************************************************************
** Meta object code from reading C++ file 'GamePlayWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Tic-Tac-Toe-master/widgets/GamePlayWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GamePlayWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GamePlayWidget_t {
    QByteArrayData data[8];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GamePlayWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GamePlayWidget_t qt_meta_stringdata_GamePlayWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GamePlayWidget"
QT_MOC_LITERAL(1, 15, 12), // "clickedLeave"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 16), // "clickedValidCell"
QT_MOC_LITERAL(4, 46, 4), // "Cell"
QT_MOC_LITERAL(5, 51, 4), // "cell"
QT_MOC_LITERAL(6, 56, 22), // "on_buttonLeave_clicked"
QT_MOC_LITERAL(7, 79, 25) // "onBoardWidgetBoardClicked"

    },
    "GamePlayWidget\0clickedLeave\0\0"
    "clickedValidCell\0Cell\0cell\0"
    "on_buttonLeave_clicked\0onBoardWidgetBoardClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GamePlayWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   38,    2, 0x08 /* Private */,
       7,    1,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void GamePlayWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GamePlayWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clickedLeave(); break;
        case 1: _t->clickedValidCell((*reinterpret_cast< Cell(*)>(_a[1]))); break;
        case 2: _t->on_buttonLeave_clicked(); break;
        case 3: _t->onBoardWidgetBoardClicked((*reinterpret_cast< Cell(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GamePlayWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GamePlayWidget::clickedLeave)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GamePlayWidget::*)(Cell );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GamePlayWidget::clickedValidCell)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GamePlayWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_GamePlayWidget.data,
    qt_meta_data_GamePlayWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GamePlayWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GamePlayWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GamePlayWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GamePlayWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void GamePlayWidget::clickedLeave()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void GamePlayWidget::clickedValidCell(Cell _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

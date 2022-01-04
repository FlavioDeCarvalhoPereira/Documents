/****************************************************************************
** Meta object code from reading C++ file 'ClientMainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Tic-Tac-Toe-master/ClientMainWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ClientMainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ClientMainWindow_t {
    QByteArrayData data[19];
    char stringdata0[377];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ClientMainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ClientMainWindow_t qt_meta_stringdata_ClientMainWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ClientMainWindow"
QT_MOC_LITERAL(1, 17, 34), // "onWelcomeWidgetClickedSingleP..."
QT_MOC_LITERAL(2, 52, 0), // ""
QT_MOC_LITERAL(3, 53, 33), // "onWelcomeWidgetClickedMultiPl..."
QT_MOC_LITERAL(4, 87, 33), // "onSelectDifficultyWidgetClick..."
QT_MOC_LITERAL(5, 121, 37), // "onSelectDifficultyWidgetClick..."
QT_MOC_LITERAL(6, 159, 28), // "onGamePlayWidgetClickedLeave"
QT_MOC_LITERAL(7, 188, 32), // "onGamePlayWidgetClickedValidCell"
QT_MOC_LITERAL(8, 221, 4), // "Cell"
QT_MOC_LITERAL(9, 226, 4), // "cell"
QT_MOC_LITERAL(10, 231, 17), // "onTcpClientReport"
QT_MOC_LITERAL(11, 249, 3), // "msg"
QT_MOC_LITERAL(12, 253, 23), // "onTcpClientReceivedData"
QT_MOC_LITERAL(13, 277, 4), // "data"
QT_MOC_LITERAL(14, 282, 20), // "onTcpClientConnected"
QT_MOC_LITERAL(15, 303, 23), // "onTcpClientDisconnected"
QT_MOC_LITERAL(16, 327, 16), // "onTcpClientError"
QT_MOC_LITERAL(17, 344, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(18, 373, 3) // "err"

    },
    "ClientMainWindow\0onWelcomeWidgetClickedSinglePlayer\0"
    "\0onWelcomeWidgetClickedMultiPlayer\0"
    "onSelectDifficultyWidgetClickedOk\0"
    "onSelectDifficultyWidgetClickedCancel\0"
    "onGamePlayWidgetClickedLeave\0"
    "onGamePlayWidgetClickedValidCell\0Cell\0"
    "cell\0onTcpClientReport\0msg\0"
    "onTcpClientReceivedData\0data\0"
    "onTcpClientConnected\0onTcpClientDisconnected\0"
    "onTcpClientError\0QAbstractSocket::SocketError\0"
    "err"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ClientMainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    0,   72,    2, 0x08 /* Private */,
       6,    0,   73,    2, 0x08 /* Private */,
       7,    1,   74,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      12,    1,   80,    2, 0x08 /* Private */,
      14,    0,   83,    2, 0x08 /* Private */,
      15,    0,   84,    2, 0x08 /* Private */,
      16,    1,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QByteArray,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

void ClientMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientMainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onWelcomeWidgetClickedSinglePlayer(); break;
        case 1: _t->onWelcomeWidgetClickedMultiPlayer(); break;
        case 2: _t->onSelectDifficultyWidgetClickedOk(); break;
        case 3: _t->onSelectDifficultyWidgetClickedCancel(); break;
        case 4: _t->onGamePlayWidgetClickedLeave(); break;
        case 5: _t->onGamePlayWidgetClickedValidCell((*reinterpret_cast< Cell(*)>(_a[1]))); break;
        case 6: _t->onTcpClientReport((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onTcpClientReceivedData((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 8: _t->onTcpClientConnected(); break;
        case 9: _t->onTcpClientDisconnected(); break;
        case 10: _t->onTcpClientError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ClientMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_ClientMainWindow.data,
    qt_meta_data_ClientMainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ClientMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ClientMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ClientMainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ClientMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE

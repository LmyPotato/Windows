/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Bluetooth/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[445];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 35), // "on_pushButton_OpenBluetooth_c..."
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 36), // "on_pushButton_CloseBluetooth_..."
QT_MOC_LITERAL(4, 85, 35), // "on_pushButton_BluetoothScan_c..."
QT_MOC_LITERAL(5, 121, 25), // "addBlueToothDevicesToList"
QT_MOC_LITERAL(6, 147, 20), // "QBluetoothDeviceInfo"
QT_MOC_LITERAL(7, 168, 35), // "on_pushButton_DeviceVisible_c..."
QT_MOC_LITERAL(8, 204, 30), // "on_pushButton_StopScan_clicked"
QT_MOC_LITERAL(9, 235, 22), // "readBluetoothDataEvent"
QT_MOC_LITERAL(10, 258, 23), // "bluetoothConnectedEvent"
QT_MOC_LITERAL(11, 282, 26), // "bluetoothDisconnectedEvent"
QT_MOC_LITERAL(12, 309, 30), // "on_pushButton_SendData_clicked"
QT_MOC_LITERAL(13, 340, 27), // "on_pushButton_Clear_clicked"
QT_MOC_LITERAL(14, 368, 8), // "SetStyle"
QT_MOC_LITERAL(15, 377, 7), // "qssFile"
QT_MOC_LITERAL(16, 385, 32), // "on_pushButton_ConnectDev_clicked"
QT_MOC_LITERAL(17, 418, 26) // "on_pushButton_help_clicked"

    },
    "MainWindow\0on_pushButton_OpenBluetooth_clicked\0"
    "\0on_pushButton_CloseBluetooth_clicked\0"
    "on_pushButton_BluetoothScan_clicked\0"
    "addBlueToothDevicesToList\0"
    "QBluetoothDeviceInfo\0"
    "on_pushButton_DeviceVisible_clicked\0"
    "on_pushButton_StopScan_clicked\0"
    "readBluetoothDataEvent\0bluetoothConnectedEvent\0"
    "bluetoothDisconnectedEvent\0"
    "on_pushButton_SendData_clicked\0"
    "on_pushButton_Clear_clicked\0SetStyle\0"
    "qssFile\0on_pushButton_ConnectDev_clicked\0"
    "on_pushButton_help_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    1,   87,    2, 0x08 /* Private */,
       7,    0,   90,    2, 0x08 /* Private */,
       8,    0,   91,    2, 0x08 /* Private */,
       9,    0,   92,    2, 0x08 /* Private */,
      10,    0,   93,    2, 0x08 /* Private */,
      11,    0,   94,    2, 0x08 /* Private */,
      12,    0,   95,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    1,   97,    2, 0x08 /* Private */,
      16,    0,  100,    2, 0x08 /* Private */,
      17,    0,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_OpenBluetooth_clicked(); break;
        case 1: _t->on_pushButton_CloseBluetooth_clicked(); break;
        case 2: _t->on_pushButton_BluetoothScan_clicked(); break;
        case 3: _t->addBlueToothDevicesToList((*reinterpret_cast< const QBluetoothDeviceInfo(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_DeviceVisible_clicked(); break;
        case 5: _t->on_pushButton_StopScan_clicked(); break;
        case 6: _t->readBluetoothDataEvent(); break;
        case 7: _t->bluetoothConnectedEvent(); break;
        case 8: _t->bluetoothDisconnectedEvent(); break;
        case 9: _t->on_pushButton_SendData_clicked(); break;
        case 10: _t->on_pushButton_Clear_clicked(); break;
        case 11: _t->SetStyle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_pushButton_ConnectDev_clicked(); break;
        case 13: _t->on_pushButton_help_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QBluetoothDeviceInfo >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'mypaint.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MyPaint/mypaint.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mypaint.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MyPaint_t {
    QByteArrayData data[10];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MyPaint_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MyPaint_t qt_meta_stringdata_MyPaint = {
    {
QT_MOC_LITERAL(0, 0, 7), // "MyPaint"
QT_MOC_LITERAL(1, 8, 5), // "Lines"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 7), // "SavePic"
QT_MOC_LITERAL(4, 23, 5), // "Rects"
QT_MOC_LITERAL(5, 29, 8), // "Ellipses"
QT_MOC_LITERAL(6, 38, 4), // "Line"
QT_MOC_LITERAL(7, 43, 7), // "OpenPic"
QT_MOC_LITERAL(8, 51, 5), // "Texts"
QT_MOC_LITERAL(9, 57, 8) // "AddTexts"

    },
    "MyPaint\0Lines\0\0SavePic\0Rects\0Ellipses\0"
    "Line\0OpenPic\0Texts\0AddTexts"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MyPaint[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    0,   57,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MyPaint::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MyPaint *_t = static_cast<MyPaint *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Lines(); break;
        case 1: _t->SavePic(); break;
        case 2: _t->Rects(); break;
        case 3: _t->Ellipses(); break;
        case 4: _t->Line(); break;
        case 5: _t->OpenPic(); break;
        case 6: _t->Texts(); break;
        case 7: _t->AddTexts(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject MyPaint::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MyPaint.data,
      qt_meta_data_MyPaint,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MyPaint::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyPaint::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MyPaint.stringdata0))
        return static_cast<void*>(const_cast< MyPaint*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MyPaint::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

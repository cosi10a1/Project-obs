/****************************************************************************
** Meta object code from reading C++ file 'visibility-item-widget.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "C:/file obs/obs-studio-master/obs-studio-master/obs/visibility-item-widget.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'visibility-item-widget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VisibilityItemWidget_t {
    QByteArrayData data[8];
    char stringdata[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VisibilityItemWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VisibilityItemWidget_t qt_meta_stringdata_VisibilityItemWidget = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 17),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 7),
QT_MOC_LITERAL(4, 48, 13),
QT_MOC_LITERAL(5, 62, 7),
QT_MOC_LITERAL(6, 70, 13),
QT_MOC_LITERAL(7, 84, 4)
    },
    "VisibilityItemWidget\0VisibilityClicked\0"
    "\0visible\0SourceEnabled\0enabled\0"
    "SourceRenamed\0name"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisibilityItemWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       4,    1,   32,    2, 0x08 /* Private */,
       6,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void VisibilityItemWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VisibilityItemWidget *_t = static_cast<VisibilityItemWidget *>(_o);
        switch (_id) {
        case 0: _t->VisibilityClicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->SourceEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->SourceRenamed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject VisibilityItemWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VisibilityItemWidget.data,
      qt_meta_data_VisibilityItemWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *VisibilityItemWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisibilityItemWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VisibilityItemWidget.stringdata))
        return static_cast<void*>(const_cast< VisibilityItemWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int VisibilityItemWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_VisibilityItemDelegate_t {
    QByteArrayData data[1];
    char stringdata[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VisibilityItemDelegate_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VisibilityItemDelegate_t qt_meta_stringdata_VisibilityItemDelegate = {
    {
QT_MOC_LITERAL(0, 0, 22)
    },
    "VisibilityItemDelegate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VisibilityItemDelegate[] = {

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

void VisibilityItemDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject VisibilityItemDelegate::staticMetaObject = {
    { &QStyledItemDelegate::staticMetaObject, qt_meta_stringdata_VisibilityItemDelegate.data,
      qt_meta_data_VisibilityItemDelegate,  qt_static_metacall, 0, 0}
};


const QMetaObject *VisibilityItemDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VisibilityItemDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VisibilityItemDelegate.stringdata))
        return static_cast<void*>(const_cast< VisibilityItemDelegate*>(this));
    return QStyledItemDelegate::qt_metacast(_clname);
}

int VisibilityItemDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStyledItemDelegate::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

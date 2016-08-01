/****************************************************************************
** Meta object code from reading C++ file 'volume-control.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "C:/file obs/obs-studio-master/obs-studio-master/obs/volume-control.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'volume-control.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VolumeMeter_t {
    QByteArrayData data[7];
    char stringdata[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VolumeMeter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VolumeMeter_t qt_meta_stringdata_VolumeMeter = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 10),
QT_MOC_LITERAL(2, 23, 0),
QT_MOC_LITERAL(3, 24, 7),
QT_MOC_LITERAL(4, 32, 8),
QT_MOC_LITERAL(5, 41, 9),
QT_MOC_LITERAL(6, 51, 13)
    },
    "VolumeMeter\0resetState\0\0bkColor\0"
    "magColor\0peakColor\0peakHoldColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VolumeMeter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       4,   20, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       3, QMetaType::QColor, 0x00095103,
       4, QMetaType::QColor, 0x00095103,
       5, QMetaType::QColor, 0x00095103,
       6, QMetaType::QColor, 0x00095103,

       0        // eod
};

void VolumeMeter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VolumeMeter *_t = static_cast<VolumeMeter *>(_o);
        switch (_id) {
        case 0: _t->resetState(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject VolumeMeter::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VolumeMeter.data,
      qt_meta_data_VolumeMeter,  qt_static_metacall, 0, 0}
};


const QMetaObject *VolumeMeter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolumeMeter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VolumeMeter.stringdata))
        return static_cast<void*>(const_cast< VolumeMeter*>(this));
    return QWidget::qt_metacast(_clname);
}

int VolumeMeter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = getBkColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = getMagColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = getPeakColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = getPeakHoldColor(); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBkColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setMagColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: setPeakColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: setPeakHoldColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_VolControl_t {
    QByteArrayData data[15];
    char stringdata[134];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VolControl_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VolControl_t qt_meta_stringdata_VolControl = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 13),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 13),
QT_MOC_LITERAL(4, 40, 11),
QT_MOC_LITERAL(5, 52, 5),
QT_MOC_LITERAL(6, 58, 11),
QT_MOC_LITERAL(7, 70, 3),
QT_MOC_LITERAL(8, 74, 4),
QT_MOC_LITERAL(9, 79, 8),
QT_MOC_LITERAL(10, 88, 8),
QT_MOC_LITERAL(11, 97, 7),
QT_MOC_LITERAL(12, 105, 13),
QT_MOC_LITERAL(13, 119, 3),
QT_MOC_LITERAL(14, 123, 10)
    },
    "VolControl\0ConfigClicked\0\0VolumeChanged\0"
    "VolumeMuted\0muted\0VolumeLevel\0mag\0"
    "peak\0peakHold\0SetMuted\0checked\0"
    "SliderChanged\0vol\0updateText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VolControl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   50,    2, 0x08 /* Private */,
       4,    1,   51,    2, 0x08 /* Private */,
       6,    4,   54,    2, 0x08 /* Private */,
      10,    1,   63,    2, 0x08 /* Private */,
      12,    1,   66,    2, 0x08 /* Private */,
      14,    0,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float, QMetaType::Bool,    7,    8,    9,    5,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

void VolControl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VolControl *_t = static_cast<VolControl *>(_o);
        switch (_id) {
        case 0: _t->ConfigClicked(); break;
        case 1: _t->VolumeChanged(); break;
        case 2: _t->VolumeMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->VolumeLevel((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 4: _t->SetMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->SliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateText(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VolControl::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VolControl::ConfigClicked)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject VolControl::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VolControl.data,
      qt_meta_data_VolControl,  qt_static_metacall, 0, 0}
};


const QMetaObject *VolControl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VolControl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VolControl.stringdata))
        return static_cast<void*>(const_cast< VolControl*>(this));
    return QWidget::qt_metacast(_clname);
}

int VolControl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void VolControl::ConfigClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE

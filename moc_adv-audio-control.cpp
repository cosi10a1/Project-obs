/****************************************************************************
** Meta object code from reading C++ file 'adv-audio-control.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "C:/file obs/obs-studio-master/obs-studio-master/obs/adv-audio-control.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adv-audio-control.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OBSAdvAudioCtrl_t {
    QByteArrayData data[24];
    char stringdata[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSAdvAudioCtrl_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSAdvAudioCtrl_t qt_meta_stringdata_OBSAdvAudioCtrl = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 18),
QT_MOC_LITERAL(2, 35, 0),
QT_MOC_LITERAL(3, 36, 8),
QT_MOC_LITERAL(4, 45, 5),
QT_MOC_LITERAL(5, 51, 19),
QT_MOC_LITERAL(6, 71, 6),
QT_MOC_LITERAL(7, 78, 17),
QT_MOC_LITERAL(8, 96, 7),
QT_MOC_LITERAL(9, 104, 6),
QT_MOC_LITERAL(10, 111, 19),
QT_MOC_LITERAL(11, 131, 6),
QT_MOC_LITERAL(12, 138, 13),
QT_MOC_LITERAL(13, 152, 10),
QT_MOC_LITERAL(14, 163, 18),
QT_MOC_LITERAL(15, 182, 7),
QT_MOC_LITERAL(16, 190, 14),
QT_MOC_LITERAL(17, 205, 3),
QT_MOC_LITERAL(18, 209, 17),
QT_MOC_LITERAL(19, 227, 12),
QT_MOC_LITERAL(20, 240, 13),
QT_MOC_LITERAL(21, 254, 13),
QT_MOC_LITERAL(22, 268, 13),
QT_MOC_LITERAL(23, 282, 13)
    },
    "OBSAdvAudioCtrl\0SourceFlagsChanged\0\0"
    "uint32_t\0flags\0SourceVolumeChanged\0"
    "volume\0SourceSyncChanged\0int64_t\0"
    "offset\0SourceMixersChanged\0mixers\0"
    "volumeChanged\0percentage\0downmixMonoChanged\0"
    "checked\0panningChanged\0val\0syncOffsetChanged\0"
    "milliseconds\0mixer1Changed\0mixer2Changed\0"
    "mixer3Changed\0mixer4Changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSAdvAudioCtrl[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       5,    1,   77,    2, 0x0a /* Public */,
       7,    1,   80,    2, 0x0a /* Public */,
      10,    1,   83,    2, 0x0a /* Public */,
      12,    1,   86,    2, 0x0a /* Public */,
      14,    1,   89,    2, 0x0a /* Public */,
      16,    1,   92,    2, 0x0a /* Public */,
      18,    1,   95,    2, 0x0a /* Public */,
      20,    1,   98,    2, 0x0a /* Public */,
      21,    1,  101,    2, 0x0a /* Public */,
      22,    1,  104,    2, 0x0a /* Public */,
      23,    1,  107,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Float,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   15,

       0        // eod
};

void OBSAdvAudioCtrl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OBSAdvAudioCtrl *_t = static_cast<OBSAdvAudioCtrl *>(_o);
        switch (_id) {
        case 0: _t->SourceFlagsChanged((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 1: _t->SourceVolumeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 2: _t->SourceSyncChanged((*reinterpret_cast< int64_t(*)>(_a[1]))); break;
        case 3: _t->SourceMixersChanged((*reinterpret_cast< uint32_t(*)>(_a[1]))); break;
        case 4: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->downmixMonoChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->panningChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->syncOffsetChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->mixer1Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->mixer2Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->mixer3Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->mixer4Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject OBSAdvAudioCtrl::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OBSAdvAudioCtrl.data,
      qt_meta_data_OBSAdvAudioCtrl,  qt_static_metacall, 0, 0}
};


const QMetaObject *OBSAdvAudioCtrl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSAdvAudioCtrl::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OBSAdvAudioCtrl.stringdata))
        return static_cast<void*>(const_cast< OBSAdvAudioCtrl*>(this));
    return QObject::qt_metacast(_clname);
}

int OBSAdvAudioCtrl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'window-basic-interaction.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "C:/file obs/obs-studio-master/obs-studio-master/obs/window-basic-interaction.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'window-basic-interaction.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OBSBasicInteraction_t {
    QByteArrayData data[1];
    char stringdata[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSBasicInteraction_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSBasicInteraction_t qt_meta_stringdata_OBSBasicInteraction = {
    {
QT_MOC_LITERAL(0, 0, 19)
    },
    "OBSBasicInteraction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSBasicInteraction[] = {

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

void OBSBasicInteraction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OBSBasicInteraction::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_OBSBasicInteraction.data,
      qt_meta_data_OBSBasicInteraction,  qt_static_metacall, 0, 0}
};


const QMetaObject *OBSBasicInteraction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSBasicInteraction::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OBSBasicInteraction.stringdata))
        return static_cast<void*>(const_cast< OBSBasicInteraction*>(this));
    return QDialog::qt_metacast(_clname);
}

int OBSBasicInteraction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_OBSEventFilter_t {
    QByteArrayData data[1];
    char stringdata[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OBSEventFilter_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OBSEventFilter_t qt_meta_stringdata_OBSEventFilter = {
    {
QT_MOC_LITERAL(0, 0, 14)
    },
    "OBSEventFilter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OBSEventFilter[] = {

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

void OBSEventFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OBSEventFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_OBSEventFilter.data,
      qt_meta_data_OBSEventFilter,  qt_static_metacall, 0, 0}
};


const QMetaObject *OBSEventFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OBSEventFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OBSEventFilter.stringdata))
        return static_cast<void*>(const_cast< OBSEventFilter*>(this));
    return QObject::qt_metacast(_clname);
}

int OBSEventFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE

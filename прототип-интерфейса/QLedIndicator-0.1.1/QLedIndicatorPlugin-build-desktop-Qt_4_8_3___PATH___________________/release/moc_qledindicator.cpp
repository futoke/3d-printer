/****************************************************************************
** Meta object code from reading C++ file 'qledindicator.h'
**
** Created: Mon Mar 18 16:26:39 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qledindicator.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qledindicator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QLedIndicator[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
      21,   14, 0x43095103,
      30,   14, 0x43095103,
      39,   14, 0x43095103,
      49,   14, 0x43095103,

       0        // eod
};

static const char qt_meta_stringdata_QLedIndicator[] = {
    "QLedIndicator\0QColor\0onColor1\0onColor2\0"
    "offColor1\0offColor2\0"
};

void QLedIndicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QLedIndicator::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QLedIndicator::staticMetaObject = {
    { &QAbstractButton::staticMetaObject, qt_meta_stringdata_QLedIndicator,
      qt_meta_data_QLedIndicator, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QLedIndicator::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QLedIndicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QLedIndicator::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QLedIndicator))
        return static_cast<void*>(const_cast< QLedIndicator*>(this));
    return QAbstractButton::qt_metacast(_clname);
}

int QLedIndicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
     if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = getOnColor1(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = getOnColor2(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = getOffColor1(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = getOffColor2(); break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setOnColor1(*reinterpret_cast< QColor*>(_v)); break;
        case 1: setOnColor2(*reinterpret_cast< QColor*>(_v)); break;
        case 2: setOffColor1(*reinterpret_cast< QColor*>(_v)); break;
        case 3: setOffColor2(*reinterpret_cast< QColor*>(_v)); break;
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
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE

/****************************************************************************
** Meta object code from reading C++ file 'networkmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../networkmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networkmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NetworkManager_t {
    QByteArrayData data[10];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NetworkManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NetworkManager_t qt_meta_stringdata_NetworkManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "NetworkManager"
QT_MOC_LITERAL(1, 15, 9), // "highValue"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 1), // "x"
QT_MOC_LITERAL(4, 28, 1), // "y"
QT_MOC_LITERAL(5, 30, 8), // "lowValue"
QT_MOC_LITERAL(6, 39, 10), // "closeValue"
QT_MOC_LITERAL(7, 50, 15), // "myreplyFinished"
QT_MOC_LITERAL(8, 66, 14), // "QNetworkReply*"
QT_MOC_LITERAL(9, 81, 5) // "reply"

    },
    "NetworkManager\0highValue\0\0x\0y\0lowValue\0"
    "closeValue\0myreplyFinished\0QNetworkReply*\0"
    "reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NetworkManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       5,    2,   39,    2, 0x06 /* Public */,
       6,    2,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariant,    3,    4,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariant,    3,    4,
    QMetaType::Void, QMetaType::QVariant, QMetaType::QVariant,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void NetworkManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NetworkManager *_t = static_cast<NetworkManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->highValue((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 1: _t->lowValue((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 2: _t->closeValue((*reinterpret_cast< QVariant(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 3: _t->myreplyFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NetworkManager::*)(QVariant , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkManager::highValue)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NetworkManager::*)(QVariant , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkManager::lowValue)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NetworkManager::*)(QVariant , QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NetworkManager::closeValue)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject NetworkManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_NetworkManager.data,
      qt_meta_data_NetworkManager,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *NetworkManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetworkManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NetworkManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NetworkManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void NetworkManager::highValue(QVariant _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void NetworkManager::lowValue(QVariant _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void NetworkManager::closeValue(QVariant _t1, QVariant _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

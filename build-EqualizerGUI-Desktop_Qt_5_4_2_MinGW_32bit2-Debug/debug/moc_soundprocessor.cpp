/****************************************************************************
** Meta object code from reading C++ file 'soundprocessor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../EqualizerGUI/soundprocessor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soundprocessor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SoundProcessor_t {
    QByteArrayData data[12];
    char stringdata[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SoundProcessor_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SoundProcessor_t qt_meta_stringdata_SoundProcessor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "SoundProcessor"
QT_MOC_LITERAL(1, 15, 9), // "barsReady"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "QVector<int>"
QT_MOC_LITERAL(4, 39, 4), // "cols"
QT_MOC_LITERAL(5, 44, 9), // "plotReady"
QT_MOC_LITERAL(6, 54, 15), // "QVector<double>"
QT_MOC_LITERAL(7, 70, 1), // "x"
QT_MOC_LITERAL(8, 72, 1), // "y"
QT_MOC_LITERAL(9, 74, 12), // "processAudio"
QT_MOC_LITERAL(10, 87, 5), // "value"
QT_MOC_LITERAL(11, 93, 4) // "time"

    },
    "SoundProcessor\0barsReady\0\0QVector<int>\0"
    "cols\0plotReady\0QVector<double>\0x\0y\0"
    "processAudio\0value\0time"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SoundProcessor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    2,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,    7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 6,   10,   11,

       0        // eod
};

void SoundProcessor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SoundProcessor *_t = static_cast<SoundProcessor *>(_o);
        switch (_id) {
        case 0: _t->barsReady((*reinterpret_cast< QVector<int>(*)>(_a[1]))); break;
        case 1: _t->plotReady((*reinterpret_cast< QVector<double>(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2]))); break;
        case 2: _t->processAudio((*reinterpret_cast< QVector<double>(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SoundProcessor::*_t)(QVector<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SoundProcessor::barsReady)) {
                *result = 0;
            }
        }
        {
            typedef void (SoundProcessor::*_t)(QVector<double> , QVector<double> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SoundProcessor::plotReady)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject SoundProcessor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SoundProcessor.data,
      qt_meta_data_SoundProcessor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SoundProcessor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoundProcessor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SoundProcessor.stringdata))
        return static_cast<void*>(const_cast< SoundProcessor*>(this));
    return QObject::qt_metacast(_clname);
}

int SoundProcessor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SoundProcessor::barsReady(QVector<int> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SoundProcessor::plotReady(QVector<double> _t1, QVector<double> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE

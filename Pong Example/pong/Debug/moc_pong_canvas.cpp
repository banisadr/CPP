/****************************************************************************
** Meta object code from reading C++ file 'pong_canvas.h'
**
** Created: Sat Nov 17 13:37:14 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../pong_canvas.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pong_canvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PongCanvas[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   11,   11,   11, 0x0a,
      57,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_PongCanvas[] = {
    "PongCanvas\0\0str\0needsButtonChange(QString)\0"
    "buttonPress()\0timerTicked()\0"
};

void PongCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PongCanvas *_t = static_cast<PongCanvas *>(_o);
        switch (_id) {
        case 0: _t->needsButtonChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->buttonPress(); break;
        case 2: _t->timerTicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PongCanvas::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PongCanvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_PongCanvas,
      qt_meta_data_PongCanvas, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PongCanvas::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PongCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PongCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PongCanvas))
        return static_cast<void*>(const_cast< PongCanvas*>(this));
    return QWidget::qt_metacast(_clname);
}

int PongCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PongCanvas::needsButtonChange(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

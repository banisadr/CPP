/****************************************************************************
** Meta object code from reading C++ file 'breakout_canvas.h'
**
** Created: Sat Nov 17 16:51:57 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../hw8.2/breakout_canvas.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'breakout_canvas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BreakoutCanvas[] = {

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
      20,   16,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   15,   15,   15, 0x0a,
      61,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BreakoutCanvas[] = {
    "BreakoutCanvas\0\0str\0needsButtonChange(QString)\0"
    "buttonPress()\0timerTicked()\0"
};

void BreakoutCanvas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BreakoutCanvas *_t = static_cast<BreakoutCanvas *>(_o);
        switch (_id) {
        case 0: _t->needsButtonChange((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->buttonPress(); break;
        case 2: _t->timerTicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BreakoutCanvas::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BreakoutCanvas::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BreakoutCanvas,
      qt_meta_data_BreakoutCanvas, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BreakoutCanvas::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BreakoutCanvas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BreakoutCanvas::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BreakoutCanvas))
        return static_cast<void*>(const_cast< BreakoutCanvas*>(this));
    return QWidget::qt_metacast(_clname);
}

int BreakoutCanvas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void BreakoutCanvas::needsButtonChange(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE

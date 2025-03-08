/****************************************************************************
** Meta object code from reading C++ file 'DockOverlay.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../libs/Qt-Advanced-Docking-System/src/DockOverlay.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockOverlay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSadsSCOPECDockOverlayENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSadsSCOPECDockOverlayENDCLASS = QtMocHelpers::stringData(
    "ads::CDockOverlay"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSadsSCOPECDockOverlayENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSadsSCOPECDockOverlayENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSadsSCOPECDockOverlayENDCLASS_t qt_meta_stringdata_CLASSadsSCOPECDockOverlayENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17)   // "ads::CDockOverlay"
    },
    "ads::CDockOverlay"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSadsSCOPECDockOverlayENDCLASS[] = {

 // content:
      12,       // revision
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

Q_CONSTINIT const QMetaObject ads::CDockOverlay::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSadsSCOPECDockOverlayENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSadsSCOPECDockOverlayENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSadsSCOPECDockOverlayENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CDockOverlay, std::true_type>
    >,
    nullptr
} };

void ads::CDockOverlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *ads::CDockOverlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CDockOverlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSadsSCOPECDockOverlayENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ads::CDockOverlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSadsSCOPECDockOverlayCrossENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSadsSCOPECDockOverlayCrossENDCLASS = QtMocHelpers::stringData(
    "ads::CDockOverlayCross",
    "iconColors",
    "iconFrameColor",
    "iconBackgroundColor",
    "iconOverlayColor",
    "iconArrowColor",
    "iconShadowColor"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSadsSCOPECDockOverlayCrossENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[23];
    char stringdata1[11];
    char stringdata2[15];
    char stringdata3[20];
    char stringdata4[17];
    char stringdata5[15];
    char stringdata6[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSadsSCOPECDockOverlayCrossENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSadsSCOPECDockOverlayCrossENDCLASS_t qt_meta_stringdata_CLASSadsSCOPECDockOverlayCrossENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "ads::CDockOverlayCross"
        QT_MOC_LITERAL(23, 10),  // "iconColors"
        QT_MOC_LITERAL(34, 14),  // "iconFrameColor"
        QT_MOC_LITERAL(49, 19),  // "iconBackgroundColor"
        QT_MOC_LITERAL(69, 16),  // "iconOverlayColor"
        QT_MOC_LITERAL(86, 14),  // "iconArrowColor"
        QT_MOC_LITERAL(101, 15)   // "iconShadowColor"
    },
    "ads::CDockOverlayCross",
    "iconColors",
    "iconFrameColor",
    "iconBackgroundColor",
    "iconOverlayColor",
    "iconArrowColor",
    "iconShadowColor"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSadsSCOPECDockOverlayCrossENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QString, 0x00015103, uint(-1), 0,
       2, QMetaType::QColor, 0x00015103, uint(-1), 0,
       3, QMetaType::QColor, 0x00015103, uint(-1), 0,
       4, QMetaType::QColor, 0x00015103, uint(-1), 0,
       5, QMetaType::QColor, 0x00015103, uint(-1), 0,
       6, QMetaType::QColor, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ads::CDockOverlayCross::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSadsSCOPECDockOverlayCrossENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSadsSCOPECDockOverlayCrossENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSadsSCOPECDockOverlayCrossENDCLASS_t,
        // property 'iconColors'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'iconFrameColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'iconBackgroundColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'iconOverlayColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'iconArrowColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'iconShadowColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CDockOverlayCross, std::true_type>
    >,
    nullptr
} };

void ads::CDockOverlayCross::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CDockOverlayCross *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->iconColors(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->iconColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->iconColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->iconColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->iconColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->iconColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CDockOverlayCross *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setIconColors(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setIconFrameColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setIconBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setIconOverlayColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setIconArrowColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setIconShadowColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *ads::CDockOverlayCross::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CDockOverlayCross::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSadsSCOPECDockOverlayCrossENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ads::CDockOverlayCross::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP

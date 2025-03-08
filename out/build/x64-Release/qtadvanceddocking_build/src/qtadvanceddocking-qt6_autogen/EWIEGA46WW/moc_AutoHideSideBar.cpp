/****************************************************************************
** Meta object code from reading C++ file 'AutoHideSideBar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../libs/Qt-Advanced-Docking-System/src/AutoHideSideBar.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoHideSideBar.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSadsSCOPECAutoHideSideBarENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSadsSCOPECAutoHideSideBarENDCLASS = QtMocHelpers::stringData(
    "ads::CAutoHideSideBar",
    "sideBarLocation",
    "orientation",
    "Qt::Orientation",
    "spacing"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSadsSCOPECAutoHideSideBarENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[22];
    char stringdata1[16];
    char stringdata2[12];
    char stringdata3[16];
    char stringdata4[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSadsSCOPECAutoHideSideBarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSadsSCOPECAutoHideSideBarENDCLASS_t qt_meta_stringdata_CLASSadsSCOPECAutoHideSideBarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "ads::CAutoHideSideBar"
        QT_MOC_LITERAL(22, 15),  // "sideBarLocation"
        QT_MOC_LITERAL(38, 11),  // "orientation"
        QT_MOC_LITERAL(50, 15),  // "Qt::Orientation"
        QT_MOC_LITERAL(66, 7)   // "spacing"
    },
    "ads::CAutoHideSideBar",
    "sideBarLocation",
    "orientation",
    "Qt::Orientation",
    "spacing"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSadsSCOPECAutoHideSideBarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::Int, 0x00015001, uint(-1), 0,
       2, 0x80000000 | 3, 0x00015009, uint(-1), 0,
       4, QMetaType::Int, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ads::CAutoHideSideBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QScrollArea::staticMetaObject>(),
    qt_meta_stringdata_CLASSadsSCOPECAutoHideSideBarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSadsSCOPECAutoHideSideBarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSadsSCOPECAutoHideSideBarENDCLASS_t,
        // property 'sideBarLocation'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'orientation'
        QtPrivate::TypeAndForceComplete<Qt::Orientation, std::true_type>,
        // property 'spacing'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CAutoHideSideBar, std::true_type>
    >,
    nullptr
} };

void ads::CAutoHideSideBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CAutoHideSideBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->sideBarLocation(); break;
        case 1: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->spacing(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CAutoHideSideBar *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setSpacing(*reinterpret_cast< int*>(_v)); break;
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

const QMetaObject *ads::CAutoHideSideBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CAutoHideSideBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSadsSCOPECAutoHideSideBarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QScrollArea::qt_metacast(_clname);
}

int ads::CAutoHideSideBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP

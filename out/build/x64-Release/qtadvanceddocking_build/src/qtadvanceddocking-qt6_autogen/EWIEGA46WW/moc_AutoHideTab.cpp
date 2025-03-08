/****************************************************************************
** Meta object code from reading C++ file 'AutoHideTab.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../libs/Qt-Advanced-Docking-System/src/AutoHideTab.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutoHideTab.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSadsSCOPECAutoHideTabENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSadsSCOPECAutoHideTabENDCLASS = QtMocHelpers::stringData(
    "ads::CAutoHideTab",
    "onAutoHideToActionClicked",
    "",
    "onDragHoverDelayExpired",
    "setDockWidgetFloating",
    "unpinDockWidget",
    "requestCloseDockWidget",
    "sideBarLocation",
    "orientation",
    "Qt::Orientation",
    "activeTab",
    "iconOnly"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSadsSCOPECAutoHideTabENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[18];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[22];
    char stringdata5[16];
    char stringdata6[23];
    char stringdata7[16];
    char stringdata8[12];
    char stringdata9[16];
    char stringdata10[10];
    char stringdata11[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSadsSCOPECAutoHideTabENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSadsSCOPECAutoHideTabENDCLASS_t qt_meta_stringdata_CLASSadsSCOPECAutoHideTabENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "ads::CAutoHideTab"
        QT_MOC_LITERAL(18, 25),  // "onAutoHideToActionClicked"
        QT_MOC_LITERAL(44, 0),  // ""
        QT_MOC_LITERAL(45, 23),  // "onDragHoverDelayExpired"
        QT_MOC_LITERAL(69, 21),  // "setDockWidgetFloating"
        QT_MOC_LITERAL(91, 15),  // "unpinDockWidget"
        QT_MOC_LITERAL(107, 22),  // "requestCloseDockWidget"
        QT_MOC_LITERAL(130, 15),  // "sideBarLocation"
        QT_MOC_LITERAL(146, 11),  // "orientation"
        QT_MOC_LITERAL(158, 15),  // "Qt::Orientation"
        QT_MOC_LITERAL(174, 9),  // "activeTab"
        QT_MOC_LITERAL(184, 8)   // "iconOnly"
    },
    "ads::CAutoHideTab",
    "onAutoHideToActionClicked",
    "",
    "onDragHoverDelayExpired",
    "setDockWidgetFloating",
    "unpinDockWidget",
    "requestCloseDockWidget",
    "sideBarLocation",
    "orientation",
    "Qt::Orientation",
    "activeTab",
    "iconOnly"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSadsSCOPECAutoHideTabENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   49, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    5 /* Private */,
       3,    0,   45,    2, 0x08,    6 /* Private */,
       4,    0,   46,    2, 0x0a,    7 /* Public */,
       5,    0,   47,    2, 0x0a,    8 /* Public */,
       6,    0,   48,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       7, QMetaType::Int, 0x00015001, uint(-1), 0,
       8, 0x80000000 | 9, 0x00015009, uint(-1), 0,
      10, QMetaType::Bool, 0x00015001, uint(-1), 0,
      11, QMetaType::Bool, 0x00015001, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ads::CAutoHideTab::staticMetaObject = { {
    QMetaObject::SuperData::link<CPushButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSadsSCOPECAutoHideTabENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSadsSCOPECAutoHideTabENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSadsSCOPECAutoHideTabENDCLASS_t,
        // property 'sideBarLocation'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'orientation'
        QtPrivate::TypeAndForceComplete<Qt::Orientation, std::true_type>,
        // property 'activeTab'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'iconOnly'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CAutoHideTab, std::true_type>,
        // method 'onAutoHideToActionClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDragHoverDelayExpired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setDockWidgetFloating'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'unpinDockWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestCloseDockWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ads::CAutoHideTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CAutoHideTab *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onAutoHideToActionClicked(); break;
        case 1: _t->onDragHoverDelayExpired(); break;
        case 2: _t->setDockWidgetFloating(); break;
        case 3: _t->unpinDockWidget(); break;
        case 4: _t->requestCloseDockWidget(); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CAutoHideTab *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->sideBarLocation(); break;
        case 1: *reinterpret_cast< Qt::Orientation*>(_v) = _t->orientation(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isActiveTab(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->iconOnly(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *ads::CAutoHideTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CAutoHideTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSadsSCOPECAutoHideTabENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return CPushButton::qt_metacast(_clname);
}

int ads::CAutoHideTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP

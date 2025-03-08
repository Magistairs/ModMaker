/****************************************************************************
** Meta object code from reading C++ file 'DockFocusController.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../libs/Qt-Advanced-Docking-System/src/DockFocusController.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockFocusController.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSadsSCOPECDockFocusControllerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSadsSCOPECDockFocusControllerENDCLASS = QtMocHelpers::stringData(
    "ads::CDockFocusController",
    "onApplicationFocusChanged",
    "",
    "QWidget*",
    "old",
    "now",
    "onFocusWindowChanged",
    "QWindow*",
    "focusWindow",
    "onFocusedDockAreaViewToggled",
    "Open",
    "onStateRestored",
    "onDockWidgetVisibilityChanged",
    "Visible",
    "setDockWidgetFocused",
    "CDockWidget*",
    "focusedNow"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSadsSCOPECDockFocusControllerENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[26];
    char stringdata1[26];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[4];
    char stringdata5[4];
    char stringdata6[21];
    char stringdata7[9];
    char stringdata8[12];
    char stringdata9[29];
    char stringdata10[5];
    char stringdata11[16];
    char stringdata12[30];
    char stringdata13[8];
    char stringdata14[21];
    char stringdata15[13];
    char stringdata16[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSadsSCOPECDockFocusControllerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSadsSCOPECDockFocusControllerENDCLASS_t qt_meta_stringdata_CLASSadsSCOPECDockFocusControllerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "ads::CDockFocusController"
        QT_MOC_LITERAL(26, 25),  // "onApplicationFocusChanged"
        QT_MOC_LITERAL(52, 0),  // ""
        QT_MOC_LITERAL(53, 8),  // "QWidget*"
        QT_MOC_LITERAL(62, 3),  // "old"
        QT_MOC_LITERAL(66, 3),  // "now"
        QT_MOC_LITERAL(70, 20),  // "onFocusWindowChanged"
        QT_MOC_LITERAL(91, 8),  // "QWindow*"
        QT_MOC_LITERAL(100, 11),  // "focusWindow"
        QT_MOC_LITERAL(112, 28),  // "onFocusedDockAreaViewToggled"
        QT_MOC_LITERAL(141, 4),  // "Open"
        QT_MOC_LITERAL(146, 15),  // "onStateRestored"
        QT_MOC_LITERAL(162, 29),  // "onDockWidgetVisibilityChanged"
        QT_MOC_LITERAL(192, 7),  // "Visible"
        QT_MOC_LITERAL(200, 20),  // "setDockWidgetFocused"
        QT_MOC_LITERAL(221, 12),  // "CDockWidget*"
        QT_MOC_LITERAL(234, 10)   // "focusedNow"
    },
    "ads::CDockFocusController",
    "onApplicationFocusChanged",
    "",
    "QWidget*",
    "old",
    "now",
    "onFocusWindowChanged",
    "QWindow*",
    "focusWindow",
    "onFocusedDockAreaViewToggled",
    "Open",
    "onStateRestored",
    "onDockWidgetVisibilityChanged",
    "Visible",
    "setDockWidgetFocused",
    "CDockWidget*",
    "focusedNow"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSadsSCOPECDockFocusControllerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x08,    1 /* Private */,
       6,    1,   55,    2, 0x08,    4 /* Private */,
       9,    1,   58,    2, 0x08,    6 /* Private */,
      11,    0,   61,    2, 0x08,    8 /* Private */,
      12,    1,   62,    2, 0x08,    9 /* Private */,
      14,    1,   65,    2, 0x0a,   11 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 15,   16,

       0        // eod
};

Q_CONSTINIT const QMetaObject ads::CDockFocusController::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSadsSCOPECDockFocusControllerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSadsSCOPECDockFocusControllerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSadsSCOPECDockFocusControllerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CDockFocusController, std::true_type>,
        // method 'onApplicationFocusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWidget *, std::false_type>,
        // method 'onFocusWindowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QWindow *, std::false_type>,
        // method 'onFocusedDockAreaViewToggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onStateRestored'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDockWidgetVisibilityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setDockWidgetFocused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<CDockWidget *, std::false_type>
    >,
    nullptr
} };

void ads::CDockFocusController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CDockFocusController *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onApplicationFocusChanged((*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QWidget*>>(_a[2]))); break;
        case 1: _t->onFocusWindowChanged((*reinterpret_cast< std::add_pointer_t<QWindow*>>(_a[1]))); break;
        case 2: _t->onFocusedDockAreaViewToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->onStateRestored(); break;
        case 4: _t->onDockWidgetVisibilityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->setDockWidgetFocused((*reinterpret_cast< std::add_pointer_t<CDockWidget*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QWidget* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< CDockWidget* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ads::CDockFocusController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CDockFocusController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSadsSCOPECDockFocusControllerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ads::CDockFocusController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP

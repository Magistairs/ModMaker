/****************************************************************************
** Meta object code from reading C++ file 'DockContainerWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../libs/Qt-Advanced-Docking-System/src/DockContainerWidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockContainerWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSadsSCOPECDockContainerWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSadsSCOPECDockContainerWidgetENDCLASS = QtMocHelpers::stringData(
    "ads::CDockContainerWidget",
    "dockAreasAdded",
    "",
    "autoHideWidgetCreated",
    "ads::CAutoHideDockContainer*",
    "AutoHideWidget",
    "dockAreasRemoved",
    "dockAreaViewToggled",
    "ads::CDockAreaWidget*",
    "DockArea",
    "Open"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSadsSCOPECDockContainerWidgetENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[26];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[29];
    char stringdata5[15];
    char stringdata6[17];
    char stringdata7[20];
    char stringdata8[22];
    char stringdata9[9];
    char stringdata10[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSadsSCOPECDockContainerWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSadsSCOPECDockContainerWidgetENDCLASS_t qt_meta_stringdata_CLASSadsSCOPECDockContainerWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 25),  // "ads::CDockContainerWidget"
        QT_MOC_LITERAL(26, 14),  // "dockAreasAdded"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 21),  // "autoHideWidgetCreated"
        QT_MOC_LITERAL(64, 28),  // "ads::CAutoHideDockContainer*"
        QT_MOC_LITERAL(93, 14),  // "AutoHideWidget"
        QT_MOC_LITERAL(108, 16),  // "dockAreasRemoved"
        QT_MOC_LITERAL(125, 19),  // "dockAreaViewToggled"
        QT_MOC_LITERAL(145, 21),  // "ads::CDockAreaWidget*"
        QT_MOC_LITERAL(167, 8),  // "DockArea"
        QT_MOC_LITERAL(176, 4)   // "Open"
    },
    "ads::CDockContainerWidget",
    "dockAreasAdded",
    "",
    "autoHideWidgetCreated",
    "ads::CAutoHideDockContainer*",
    "AutoHideWidget",
    "dockAreasRemoved",
    "dockAreaViewToggled",
    "ads::CDockAreaWidget*",
    "DockArea",
    "Open"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSadsSCOPECDockContainerWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    1,   39,    2, 0x06,    2 /* Public */,
       6,    0,   42,    2, 0x06,    4 /* Public */,
       7,    2,   43,    2, 0x06,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject ads::CDockContainerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSadsSCOPECDockContainerWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSadsSCOPECDockContainerWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSadsSCOPECDockContainerWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CDockContainerWidget, std::true_type>,
        // method 'dockAreasAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'autoHideWidgetCreated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ads::CAutoHideDockContainer *, std::false_type>,
        // method 'dockAreasRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dockAreaViewToggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ads::CDockAreaWidget *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void ads::CDockContainerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CDockContainerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dockAreasAdded(); break;
        case 1: _t->autoHideWidgetCreated((*reinterpret_cast< std::add_pointer_t<ads::CAutoHideDockContainer*>>(_a[1]))); break;
        case 2: _t->dockAreasRemoved(); break;
        case 3: _t->dockAreaViewToggled((*reinterpret_cast< std::add_pointer_t<ads::CDockAreaWidget*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CDockContainerWidget::*)();
            if (_t _q_method = &CDockContainerWidget::dockAreasAdded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CDockContainerWidget::*)(ads::CAutoHideDockContainer * );
            if (_t _q_method = &CDockContainerWidget::autoHideWidgetCreated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CDockContainerWidget::*)();
            if (_t _q_method = &CDockContainerWidget::dockAreasRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CDockContainerWidget::*)(ads::CDockAreaWidget * , bool );
            if (_t _q_method = &CDockContainerWidget::dockAreaViewToggled; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *ads::CDockContainerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CDockContainerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSadsSCOPECDockContainerWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ads::CDockContainerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ads::CDockContainerWidget::dockAreasAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ads::CDockContainerWidget::autoHideWidgetCreated(ads::CAutoHideDockContainer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ads::CDockContainerWidget::dockAreasRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ads::CDockContainerWidget::dockAreaViewToggled(ads::CDockAreaWidget * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP

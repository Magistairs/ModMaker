/****************************************************************************
** Meta object code from reading C++ file 'DockAreaTitleBar.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../libs/Qt-Advanced-Docking-System/src/DockAreaTitleBar.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockAreaTitleBar.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSadsSCOPECTitleBarButtonENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSadsSCOPECTitleBarButtonENDCLASS = QtMocHelpers::stringData(
    "ads::CTitleBarButton"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSadsSCOPECTitleBarButtonENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSadsSCOPECTitleBarButtonENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSadsSCOPECTitleBarButtonENDCLASS_t qt_meta_stringdata_CLASSadsSCOPECTitleBarButtonENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20)   // "ads::CTitleBarButton"
    },
    "ads::CTitleBarButton"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSadsSCOPECTitleBarButtonENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject ads::CTitleBarButton::staticMetaObject = { {
    QMetaObject::SuperData::link<tTitleBarButton::staticMetaObject>(),
    qt_meta_stringdata_CLASSadsSCOPECTitleBarButtonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSadsSCOPECTitleBarButtonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSadsSCOPECTitleBarButtonENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CTitleBarButton, std::true_type>
    >,
    nullptr
} };

void ads::CTitleBarButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *ads::CTitleBarButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CTitleBarButton::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSadsSCOPECTitleBarButtonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return tTitleBarButton::qt_metacast(_clname);
}

int ads::CTitleBarButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = tTitleBarButton::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSadsSCOPECDockAreaTitleBarENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSadsSCOPECDockAreaTitleBarENDCLASS = QtMocHelpers::stringData(
    "ads::CDockAreaTitleBar",
    "tabBarClicked",
    "",
    "index",
    "onTabsMenuAboutToShow",
    "onCloseButtonClicked",
    "onAutoHideCloseActionTriggered",
    "minimizeAutoHideContainer",
    "onUndockButtonClicked",
    "onTabsMenuActionTriggered",
    "QAction*",
    "Action",
    "onCurrentTabChanged",
    "Index",
    "onAutoHideButtonClicked",
    "onAutoHideDockAreaActionClicked",
    "onAutoHideToActionClicked",
    "markTabsMenuOutdated"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSadsSCOPECDockAreaTitleBarENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[23];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[22];
    char stringdata5[21];
    char stringdata6[31];
    char stringdata7[26];
    char stringdata8[22];
    char stringdata9[26];
    char stringdata10[9];
    char stringdata11[7];
    char stringdata12[20];
    char stringdata13[6];
    char stringdata14[24];
    char stringdata15[32];
    char stringdata16[26];
    char stringdata17[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSadsSCOPECDockAreaTitleBarENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSadsSCOPECDockAreaTitleBarENDCLASS_t qt_meta_stringdata_CLASSadsSCOPECDockAreaTitleBarENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22),  // "ads::CDockAreaTitleBar"
        QT_MOC_LITERAL(23, 13),  // "tabBarClicked"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 5),  // "index"
        QT_MOC_LITERAL(44, 21),  // "onTabsMenuAboutToShow"
        QT_MOC_LITERAL(66, 20),  // "onCloseButtonClicked"
        QT_MOC_LITERAL(87, 30),  // "onAutoHideCloseActionTriggered"
        QT_MOC_LITERAL(118, 25),  // "minimizeAutoHideContainer"
        QT_MOC_LITERAL(144, 21),  // "onUndockButtonClicked"
        QT_MOC_LITERAL(166, 25),  // "onTabsMenuActionTriggered"
        QT_MOC_LITERAL(192, 8),  // "QAction*"
        QT_MOC_LITERAL(201, 6),  // "Action"
        QT_MOC_LITERAL(208, 19),  // "onCurrentTabChanged"
        QT_MOC_LITERAL(228, 5),  // "Index"
        QT_MOC_LITERAL(234, 23),  // "onAutoHideButtonClicked"
        QT_MOC_LITERAL(258, 31),  // "onAutoHideDockAreaActionClicked"
        QT_MOC_LITERAL(290, 25),  // "onAutoHideToActionClicked"
        QT_MOC_LITERAL(316, 20)   // "markTabsMenuOutdated"
    },
    "ads::CDockAreaTitleBar",
    "tabBarClicked",
    "",
    "index",
    "onTabsMenuAboutToShow",
    "onCloseButtonClicked",
    "onAutoHideCloseActionTriggered",
    "minimizeAutoHideContainer",
    "onUndockButtonClicked",
    "onTabsMenuActionTriggered",
    "QAction*",
    "Action",
    "onCurrentTabChanged",
    "Index",
    "onAutoHideButtonClicked",
    "onAutoHideDockAreaActionClicked",
    "onAutoHideToActionClicked",
    "markTabsMenuOutdated"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSadsSCOPECDockAreaTitleBarENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   89,    2, 0x08,    3 /* Private */,
       5,    0,   90,    2, 0x08,    4 /* Private */,
       6,    0,   91,    2, 0x08,    5 /* Private */,
       7,    0,   92,    2, 0x08,    6 /* Private */,
       8,    0,   93,    2, 0x08,    7 /* Private */,
       9,    1,   94,    2, 0x08,    8 /* Private */,
      12,    1,   97,    2, 0x08,   10 /* Private */,
      14,    0,  100,    2, 0x08,   12 /* Private */,
      15,    0,  101,    2, 0x08,   13 /* Private */,
      16,    0,  102,    2, 0x08,   14 /* Private */,
      17,    0,  103,    2, 0x0a,   15 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ads::CDockAreaTitleBar::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSadsSCOPECDockAreaTitleBarENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSadsSCOPECDockAreaTitleBarENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSadsSCOPECDockAreaTitleBarENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CDockAreaTitleBar, std::true_type>,
        // method 'tabBarClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onTabsMenuAboutToShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCloseButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAutoHideCloseActionTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'minimizeAutoHideContainer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUndockButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTabsMenuActionTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'onCurrentTabChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onAutoHideButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAutoHideDockAreaActionClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAutoHideToActionClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'markTabsMenuOutdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ads::CDockAreaTitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CDockAreaTitleBar *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->tabBarClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->onTabsMenuAboutToShow(); break;
        case 2: _t->onCloseButtonClicked(); break;
        case 3: _t->onAutoHideCloseActionTriggered(); break;
        case 4: _t->minimizeAutoHideContainer(); break;
        case 5: _t->onUndockButtonClicked(); break;
        case 6: _t->onTabsMenuActionTriggered((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 7: _t->onCurrentTabChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->onAutoHideButtonClicked(); break;
        case 9: _t->onAutoHideDockAreaActionClicked(); break;
        case 10: _t->onAutoHideToActionClicked(); break;
        case 11: _t->markTabsMenuOutdated(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CDockAreaTitleBar::*)(int );
            if (_t _q_method = &CDockAreaTitleBar::tabBarClicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ads::CDockAreaTitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CDockAreaTitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSadsSCOPECDockAreaTitleBarENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ads::CDockAreaTitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void ads::CDockAreaTitleBar::tabBarClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP

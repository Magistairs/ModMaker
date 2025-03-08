/****************************************************************************
** Meta object code from reading C++ file 'DockWidgetTab.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../libs/Qt-Advanced-Docking-System/src/DockWidgetTab.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DockWidgetTab.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSadsSCOPECDockWidgetTabENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSadsSCOPECDockWidgetTabENDCLASS = QtMocHelpers::stringData(
    "ads::CDockWidgetTab",
    "activeTabChanged",
    "",
    "clicked",
    "closeRequested",
    "closeOtherTabsRequested",
    "moved",
    "GlobalPos",
    "elidedChanged",
    "elided",
    "detachDockWidget",
    "autoHideDockWidget",
    "onAutoHideToActionClicked",
    "setVisible",
    "visible",
    "activeTab",
    "iconSize"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSadsSCOPECDockWidgetTabENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[20];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[15];
    char stringdata5[24];
    char stringdata6[6];
    char stringdata7[10];
    char stringdata8[14];
    char stringdata9[7];
    char stringdata10[17];
    char stringdata11[19];
    char stringdata12[26];
    char stringdata13[11];
    char stringdata14[8];
    char stringdata15[10];
    char stringdata16[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSadsSCOPECDockWidgetTabENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSadsSCOPECDockWidgetTabENDCLASS_t qt_meta_stringdata_CLASSadsSCOPECDockWidgetTabENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "ads::CDockWidgetTab"
        QT_MOC_LITERAL(20, 16),  // "activeTabChanged"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 7),  // "clicked"
        QT_MOC_LITERAL(46, 14),  // "closeRequested"
        QT_MOC_LITERAL(61, 23),  // "closeOtherTabsRequested"
        QT_MOC_LITERAL(85, 5),  // "moved"
        QT_MOC_LITERAL(91, 9),  // "GlobalPos"
        QT_MOC_LITERAL(101, 13),  // "elidedChanged"
        QT_MOC_LITERAL(115, 6),  // "elided"
        QT_MOC_LITERAL(122, 16),  // "detachDockWidget"
        QT_MOC_LITERAL(139, 18),  // "autoHideDockWidget"
        QT_MOC_LITERAL(158, 25),  // "onAutoHideToActionClicked"
        QT_MOC_LITERAL(184, 10),  // "setVisible"
        QT_MOC_LITERAL(195, 7),  // "visible"
        QT_MOC_LITERAL(203, 9),  // "activeTab"
        QT_MOC_LITERAL(213, 8)   // "iconSize"
    },
    "ads::CDockWidgetTab",
    "activeTabChanged",
    "",
    "clicked",
    "closeRequested",
    "closeOtherTabsRequested",
    "moved",
    "GlobalPos",
    "elidedChanged",
    "elided",
    "detachDockWidget",
    "autoHideDockWidget",
    "onAutoHideToActionClicked",
    "setVisible",
    "visible",
    "activeTab",
    "iconSize"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSadsSCOPECDockWidgetTabENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    3 /* Public */,
       3,    0,   75,    2, 0x06,    4 /* Public */,
       4,    0,   76,    2, 0x06,    5 /* Public */,
       5,    0,   77,    2, 0x06,    6 /* Public */,
       6,    1,   78,    2, 0x06,    7 /* Public */,
       8,    1,   81,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   84,    2, 0x08,   11 /* Private */,
      11,    0,   85,    2, 0x08,   12 /* Private */,
      12,    0,   86,    2, 0x08,   13 /* Private */,
      13,    1,   87,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::Bool,    9,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00015103, uint(0), 0,
      16, QMetaType::QSize, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ads::CDockWidgetTab::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSadsSCOPECDockWidgetTabENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSadsSCOPECDockWidgetTabENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSadsSCOPECDockWidgetTabENDCLASS_t,
        // property 'activeTab'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'iconSize'
        QtPrivate::TypeAndForceComplete<QSize, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CDockWidgetTab, std::true_type>,
        // method 'activeTabChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeOtherTabsRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'elidedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'detachDockWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'autoHideDockWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAutoHideToActionClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void ads::CDockWidgetTab::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CDockWidgetTab *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activeTabChanged(); break;
        case 1: _t->clicked(); break;
        case 2: _t->closeRequested(); break;
        case 3: _t->closeOtherTabsRequested(); break;
        case 4: _t->moved((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 5: _t->elidedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->detachDockWidget(); break;
        case 7: _t->autoHideDockWidget(); break;
        case 8: _t->onAutoHideToActionClicked(); break;
        case 9: _t->setVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CDockWidgetTab::*)();
            if (_t _q_method = &CDockWidgetTab::activeTabChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CDockWidgetTab::*)();
            if (_t _q_method = &CDockWidgetTab::clicked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CDockWidgetTab::*)();
            if (_t _q_method = &CDockWidgetTab::closeRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CDockWidgetTab::*)();
            if (_t _q_method = &CDockWidgetTab::closeOtherTabsRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CDockWidgetTab::*)(const QPoint & );
            if (_t _q_method = &CDockWidgetTab::moved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CDockWidgetTab::*)(bool );
            if (_t _q_method = &CDockWidgetTab::elidedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CDockWidgetTab *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isActiveTab(); break;
        case 1: *reinterpret_cast< QSize*>(_v) = _t->iconSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CDockWidgetTab *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActiveTab(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setIconSize(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *ads::CDockWidgetTab::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ads::CDockWidgetTab::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSadsSCOPECDockWidgetTabENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int ads::CDockWidgetTab::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ads::CDockWidgetTab::activeTabChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ads::CDockWidgetTab::clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ads::CDockWidgetTab::closeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ads::CDockWidgetTab::closeOtherTabsRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ads::CDockWidgetTab::moved(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ads::CDockWidgetTab::elidedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP

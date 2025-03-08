/****************************************************************************
** Meta object code from reading C++ file 'GameInterface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../ModMakerApp/include/GamesInterfaces/GameInterface.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GameInterface.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGameInterfaceENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGameInterfaceENDCLASS = QtMocHelpers::stringData(
    "GameInterface",
    "pathChanged",
    "",
    "PDXModdingAssistant::EPath",
    "dir",
    "path",
    "modSelected",
    "modsListModified"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGameInterfaceENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[14];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[4];
    char stringdata5[5];
    char stringdata6[12];
    char stringdata7[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGameInterfaceENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGameInterfaceENDCLASS_t qt_meta_stringdata_CLASSGameInterfaceENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "GameInterface"
        QT_MOC_LITERAL(14, 11),  // "pathChanged"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 26),  // "PDXModdingAssistant::EPath"
        QT_MOC_LITERAL(54, 3),  // "dir"
        QT_MOC_LITERAL(58, 4),  // "path"
        QT_MOC_LITERAL(63, 11),  // "modSelected"
        QT_MOC_LITERAL(75, 16)   // "modsListModified"
    },
    "GameInterface",
    "pathChanged",
    "",
    "PDXModdingAssistant::EPath",
    "dir",
    "path",
    "modSelected",
    "modsListModified"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGameInterfaceENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x106,    1 /* Public | MethodIsConst  */,
       6,    0,   37,    2, 0x106,    4 /* Public | MethodIsConst  */,
       7,    0,   38,    2, 0x106,    5 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GameInterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSGameInterfaceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGameInterfaceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGameInterfaceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GameInterface, std::true_type>,
        // method 'pathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PDXModdingAssistant::EPath, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'modSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modsListModified'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GameInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GameInterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pathChanged((*reinterpret_cast< std::add_pointer_t<PDXModdingAssistant::EPath>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->modSelected(); break;
        case 2: _t->modsListModified(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GameInterface::*)(PDXModdingAssistant::EPath , const QString & ) const;
            if (_t _q_method = &GameInterface::pathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GameInterface::*)() const;
            if (_t _q_method = &GameInterface::modSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (GameInterface::*)() const;
            if (_t _q_method = &GameInterface::modsListModified; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *GameInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGameInterfaceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int GameInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GameInterface::pathChanged(PDXModdingAssistant::EPath _t1, const QString & _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< GameInterface *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GameInterface::modSelected()const
{
    QMetaObject::activate(const_cast< GameInterface *>(this), &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void GameInterface::modsListModified()const
{
    QMetaObject::activate(const_cast< GameInterface *>(this), &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP

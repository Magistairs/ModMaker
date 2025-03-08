/****************************************************************************
** Meta object code from reading C++ file 'ads_globals.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../libs/Qt-Advanced-Docking-System/src/ads_globals.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ads_globals.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSadsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSadsENDCLASS = QtMocHelpers::stringData(
    "ads",
    "SideBarLocation",
    "SideBarTop",
    "SideBarLeft",
    "SideBarRight",
    "SideBarBottom",
    "SideBarNone"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSadsENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[4];
    char stringdata1[16];
    char stringdata2[11];
    char stringdata3[12];
    char stringdata4[13];
    char stringdata5[14];
    char stringdata6[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSadsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSadsENDCLASS_t qt_meta_stringdata_CLASSadsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 3),  // "ads"
        QT_MOC_LITERAL(4, 15),  // "SideBarLocation"
        QT_MOC_LITERAL(20, 10),  // "SideBarTop"
        QT_MOC_LITERAL(31, 11),  // "SideBarLeft"
        QT_MOC_LITERAL(43, 12),  // "SideBarRight"
        QT_MOC_LITERAL(56, 13),  // "SideBarBottom"
        QT_MOC_LITERAL(70, 11)   // "SideBarNone"
    },
    "ads",
    "SideBarLocation",
    "SideBarTop",
    "SideBarLeft",
    "SideBarRight",
    "SideBarBottom",
    "SideBarNone"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSadsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    5,   19,

 // enum data: key, value
       2, uint(ads::SideBarTop),
       3, uint(ads::SideBarLeft),
       4, uint(ads::SideBarRight),
       5, uint(ads::SideBarBottom),
       6, uint(ads::SideBarNone),

       0        // eod
};

Q_CONSTINIT const QMetaObject ads::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSadsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSadsENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSadsENDCLASS_t,
        // enum 'SideBarLocation'
        QtPrivate::TypeAndForceComplete<ads::SideBarLocation, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP

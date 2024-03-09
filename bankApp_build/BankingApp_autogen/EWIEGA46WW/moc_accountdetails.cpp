/****************************************************************************
** Meta object code from reading C++ file 'accountdetails.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../BankingApp/accountdetails.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountdetails.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
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
struct qt_meta_stringdata_CLASSAccountDetailsENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAccountDetailsENDCLASS = QtMocHelpers::stringData(
    "AccountDetails",
    "on_btn_delete_account_clicked",
    "",
    "on_btn_delete_account_def_clicked",
    "on_btn_go_back_clicked",
    "on_btn_change_password_clicked",
    "on_btn_update_password_clicked",
    "on_btn_validate_password_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAccountDetailsENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[15];
    char stringdata1[30];
    char stringdata2[1];
    char stringdata3[34];
    char stringdata4[23];
    char stringdata5[31];
    char stringdata6[31];
    char stringdata7[33];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAccountDetailsENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAccountDetailsENDCLASS_t qt_meta_stringdata_CLASSAccountDetailsENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "AccountDetails"
        QT_MOC_LITERAL(15, 29),  // "on_btn_delete_account_clicked"
        QT_MOC_LITERAL(45, 0),  // ""
        QT_MOC_LITERAL(46, 33),  // "on_btn_delete_account_def_cli..."
        QT_MOC_LITERAL(80, 22),  // "on_btn_go_back_clicked"
        QT_MOC_LITERAL(103, 30),  // "on_btn_change_password_clicked"
        QT_MOC_LITERAL(134, 30),  // "on_btn_update_password_clicked"
        QT_MOC_LITERAL(165, 32)   // "on_btn_validate_password_clicked"
    },
    "AccountDetails",
    "on_btn_delete_account_clicked",
    "",
    "on_btn_delete_account_def_clicked",
    "on_btn_go_back_clicked",
    "on_btn_change_password_clicked",
    "on_btn_update_password_clicked",
    "on_btn_validate_password_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAccountDetailsENDCLASS[] = {

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
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject AccountDetails::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSAccountDetailsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAccountDetailsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAccountDetailsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AccountDetails, std::true_type>,
        // method 'on_btn_delete_account_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_delete_account_def_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_go_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_change_password_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_update_password_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btn_validate_password_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void AccountDetails::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountDetails *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btn_delete_account_clicked(); break;
        case 1: _t->on_btn_delete_account_def_clicked(); break;
        case 2: _t->on_btn_go_back_clicked(); break;
        case 3: _t->on_btn_change_password_clicked(); break;
        case 4: _t->on_btn_update_password_clicked(); break;
        case 5: _t->on_btn_validate_password_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *AccountDetails::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountDetails::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAccountDetailsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AccountDetails::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'network.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../BankingApp/network.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'network.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSClientENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSClientENDCLASS = QtMocHelpers::stringData(
    "Client",
    "connectToServer",
    "",
    "address",
    "port",
    "SaveClient",
    "client_data&",
    "data",
    "UpdateBalance",
    "amount",
    "account_number",
    "SaveTransfer",
    "to_account_number",
    "ReadClient",
    "client_data",
    "DeleteClient",
    "GetTransfers",
    "vector<transfer_data>",
    "UpdatePassword",
    "string",
    "password"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientENDCLASS_t {
    uint offsetsAndSizes[42];
    char stringdata0[7];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[5];
    char stringdata5[11];
    char stringdata6[13];
    char stringdata7[5];
    char stringdata8[14];
    char stringdata9[7];
    char stringdata10[15];
    char stringdata11[13];
    char stringdata12[18];
    char stringdata13[11];
    char stringdata14[12];
    char stringdata15[13];
    char stringdata16[13];
    char stringdata17[22];
    char stringdata18[15];
    char stringdata19[7];
    char stringdata20[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClientENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClientENDCLASS_t qt_meta_stringdata_CLASSClientENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Client"
        QT_MOC_LITERAL(7, 15),  // "connectToServer"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 7),  // "address"
        QT_MOC_LITERAL(32, 4),  // "port"
        QT_MOC_LITERAL(37, 10),  // "SaveClient"
        QT_MOC_LITERAL(48, 12),  // "client_data&"
        QT_MOC_LITERAL(61, 4),  // "data"
        QT_MOC_LITERAL(66, 13),  // "UpdateBalance"
        QT_MOC_LITERAL(80, 6),  // "amount"
        QT_MOC_LITERAL(87, 14),  // "account_number"
        QT_MOC_LITERAL(102, 12),  // "SaveTransfer"
        QT_MOC_LITERAL(115, 17),  // "to_account_number"
        QT_MOC_LITERAL(133, 10),  // "ReadClient"
        QT_MOC_LITERAL(144, 11),  // "client_data"
        QT_MOC_LITERAL(156, 12),  // "DeleteClient"
        QT_MOC_LITERAL(169, 12),  // "GetTransfers"
        QT_MOC_LITERAL(182, 21),  // "vector<transfer_data>"
        QT_MOC_LITERAL(204, 14),  // "UpdatePassword"
        QT_MOC_LITERAL(219, 6),  // "string"
        QT_MOC_LITERAL(226, 8)   // "password"
    },
    "Client",
    "connectToServer",
    "",
    "address",
    "port",
    "SaveClient",
    "client_data&",
    "data",
    "UpdateBalance",
    "amount",
    "account_number",
    "SaveTransfer",
    "to_account_number",
    "ReadClient",
    "client_data",
    "DeleteClient",
    "GetTransfers",
    "vector<transfer_data>",
    "UpdatePassword",
    "string",
    "password"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClientENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   68,    2, 0x0a,    1 /* Public */,
       5,    1,   73,    2, 0x0a,    4 /* Public */,
       8,    2,   76,    2, 0x0a,    6 /* Public */,
      11,    3,   81,    2, 0x0a,    9 /* Public */,
      11,    2,   88,    2, 0x2a,   13 /* Public | MethodCloned */,
      13,    1,   93,    2, 0x0a,   16 /* Public */,
      15,    1,   96,    2, 0x0a,   18 /* Public */,
      16,    1,   99,    2, 0x0a,   20 /* Public */,
      18,    2,  102,    2, 0x0a,   22 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,    9,   10,
    QMetaType::Void, QMetaType::Double, QMetaType::Int, QMetaType::Int,    9,   10,   12,
    QMetaType::Void, QMetaType::Double, QMetaType::Int,    9,   10,
    0x80000000 | 14, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    0x80000000 | 17, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 19, QMetaType::Int,   20,   10,

       0        // eod
};

Q_CONSTINIT const QMetaObject Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSClientENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClientENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClientENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Client, std::true_type>,
        // method 'connectToServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint16, std::false_type>,
        // method 'SaveClient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<client_data &, std::false_type>,
        // method 'UpdateBalance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const double &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        // method 'SaveTransfer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const double &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        // method 'SaveTransfer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const double &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        // method 'ReadClient'
        QtPrivate::TypeAndForceComplete<client_data, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        // method 'DeleteClient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        // method 'GetTransfers'
        QtPrivate::TypeAndForceComplete<vector<transfer_data>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>,
        // method 'UpdatePassword'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const string &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int &, std::false_type>
    >,
    nullptr
} };

void Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Client *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectToServer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<quint16>>(_a[2]))); break;
        case 1: _t->SaveClient((*reinterpret_cast< std::add_pointer_t<client_data&>>(_a[1]))); break;
        case 2: _t->UpdateBalance((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->SaveTransfer((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 4: _t->SaveTransfer((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: { client_data _r = _t->ReadClient((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< client_data*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->DeleteClient((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: { vector<transfer_data> _r = _t->GetTransfers((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< vector<transfer_data>*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->UpdatePassword((*reinterpret_cast< std::add_pointer_t<string>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClientENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP

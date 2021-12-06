/****************************************************************************
** Meta object code from reading C++ file 'employee.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GestionParc/employee.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'employee.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_employee_t {
    QByteArrayData data[13];
    char stringdata0[255];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_employee_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_employee_t qt_meta_stringdata_employee = {
    {
QT_MOC_LITERAL(0, 0, 8), // "employee"
QT_MOC_LITERAL(1, 9, 21), // "on_pb_ajouter_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 23), // "on_pb_supprimer_clicked"
QT_MOC_LITERAL(4, 56, 22), // "on_pb_modifier_clicked"
QT_MOC_LITERAL(5, 79, 21), // "on_comboBox_activated"
QT_MOC_LITERAL(6, 101, 4), // "arg1"
QT_MOC_LITERAL(7, 106, 21), // "on_le_tri_nom_clicked"
QT_MOC_LITERAL(8, 128, 21), // "on_le_tri_age_clicked"
QT_MOC_LITERAL(9, 150, 19), // "on_rech_textChanged"
QT_MOC_LITERAL(10, 170, 24), // "on_pb_statistics_clicked"
QT_MOC_LITERAL(11, 195, 29), // "on_pb_retour_employee_clicked"
QT_MOC_LITERAL(12, 225, 29) // "on_pb_quitter_employe_clicked"

    },
    "employee\0on_pb_ajouter_clicked\0\0"
    "on_pb_supprimer_clicked\0on_pb_modifier_clicked\0"
    "on_comboBox_activated\0arg1\0"
    "on_le_tri_nom_clicked\0on_le_tri_age_clicked\0"
    "on_rech_textChanged\0on_pb_statistics_clicked\0"
    "on_pb_retour_employee_clicked\0"
    "on_pb_quitter_employe_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_employee[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    1,   67,    2, 0x08 /* Private */,
       7,    0,   70,    2, 0x08 /* Private */,
       8,    0,   71,    2, 0x08 /* Private */,
       9,    1,   72,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    0,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void employee::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        employee *_t = static_cast<employee *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pb_ajouter_clicked(); break;
        case 1: _t->on_pb_supprimer_clicked(); break;
        case 2: _t->on_pb_modifier_clicked(); break;
        case 3: _t->on_comboBox_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_le_tri_nom_clicked(); break;
        case 5: _t->on_le_tri_age_clicked(); break;
        case 6: _t->on_rech_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_pb_statistics_clicked(); break;
        case 8: _t->on_pb_retour_employee_clicked(); break;
        case 9: _t->on_pb_quitter_employe_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject employee::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_employee.data,
      qt_meta_data_employee,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *employee::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *employee::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_employee.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int employee::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

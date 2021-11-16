/****************************************************************************
** Meta object code from reading C++ file 'animaux.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GestionParc/animaux.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'animaux.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_animaux_t {
    QByteArrayData data[19];
    char stringdata0[398];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_animaux_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_animaux_t qt_meta_stringdata_animaux = {
    {
QT_MOC_LITERAL(0, 0, 7), // "animaux"
QT_MOC_LITERAL(1, 8, 21), // "on_pb_ajouter_clicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17), // "on_id_sup_clicked"
QT_MOC_LITERAL(4, 49, 20), // "on_pb_upload_clicked"
QT_MOC_LITERAL(5, 70, 44), // "on_comboBox_modifier_ref_curr..."
QT_MOC_LITERAL(6, 115, 4), // "arg1"
QT_MOC_LITERAL(7, 120, 22), // "on_pb_modifier_clicked"
QT_MOC_LITERAL(8, 143, 18), // "on_pb_stat_clicked"
QT_MOC_LITERAL(9, 162, 22), // "on_pb_upload_2_clicked"
QT_MOC_LITERAL(10, 185, 19), // "on_pb_trier_clicked"
QT_MOC_LITERAL(11, 205, 24), // "on_pb_trier_type_clicked"
QT_MOC_LITERAL(12, 230, 21), // "on_pb_rechRef_clicked"
QT_MOC_LITERAL(13, 252, 19), // "on_pb_image_clicked"
QT_MOC_LITERAL(14, 272, 27), // "on_le_recherche_textChanged"
QT_MOC_LITERAL(15, 300, 31), // "on_anim_col_currentIndexChanged"
QT_MOC_LITERAL(16, 332, 5), // "index"
QT_MOC_LITERAL(17, 338, 34), // "on_pb_trier_etat_sanitaire_cl..."
QT_MOC_LITERAL(18, 373, 24) // "on_pb_statistics_clicked"

    },
    "animaux\0on_pb_ajouter_clicked\0\0"
    "on_id_sup_clicked\0on_pb_upload_clicked\0"
    "on_comboBox_modifier_ref_currentIndexChanged\0"
    "arg1\0on_pb_modifier_clicked\0"
    "on_pb_stat_clicked\0on_pb_upload_2_clicked\0"
    "on_pb_trier_clicked\0on_pb_trier_type_clicked\0"
    "on_pb_rechRef_clicked\0on_pb_image_clicked\0"
    "on_le_recherche_textChanged\0"
    "on_anim_col_currentIndexChanged\0index\0"
    "on_pb_trier_etat_sanitaire_clicked\0"
    "on_pb_statistics_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_animaux[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    1,   92,    2, 0x08 /* Private */,
       7,    0,   95,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    1,  102,    2, 0x08 /* Private */,
      15,    1,  105,    2, 0x08 /* Private */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void animaux::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        animaux *_t = static_cast<animaux *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pb_ajouter_clicked(); break;
        case 1: _t->on_id_sup_clicked(); break;
        case 2: _t->on_pb_upload_clicked(); break;
        case 3: _t->on_comboBox_modifier_ref_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_pb_modifier_clicked(); break;
        case 5: _t->on_pb_stat_clicked(); break;
        case 6: _t->on_pb_upload_2_clicked(); break;
        case 7: _t->on_pb_trier_clicked(); break;
        case 8: _t->on_pb_trier_type_clicked(); break;
        case 9: _t->on_pb_rechRef_clicked(); break;
        case 10: _t->on_pb_image_clicked(); break;
        case 11: _t->on_le_recherche_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->on_anim_col_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_pb_trier_etat_sanitaire_clicked(); break;
        case 14: _t->on_pb_statistics_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject animaux::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_animaux.data,
      qt_meta_data_animaux,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *animaux::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *animaux::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_animaux.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int animaux::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

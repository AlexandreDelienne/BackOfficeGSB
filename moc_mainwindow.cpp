/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Dec 11 11:31:17 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      42,   11,   11,   11, 0x08,
      78,   11,   11,   11, 0x08,
     117,   11,   11,   11, 0x08,
     155,   11,   11,   11, 0x08,
     194,   11,   11,   11, 0x08,
     246,   11,   11,   11, 0x08,
     291,   11,   11,   11, 0x08,
     337,   11,   11,   11, 0x08,
     390,  384,   11,   11, 0x08,
     434,  384,   11,   11, 0x08,
     479,   11,   11,   11, 0x08,
     517,   11,   11,   11, 0x08,
     554,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_action_Quitter_triggered()\0"
    "on_listWidgetMedicament_activated()\0"
    "on_pushButtonAjoutMedicament_clicked()\0"
    "on_pushButtonSuppMedicament_clicked()\0"
    "on_pushButtonModifMedicament_clicked()\0"
    "on_comboBoxFamilleMain_currentIndexChanged(QString)\0"
    "on_comboBoxType_currentIndexChanged(QString)\0"
    "on_comboBoxVille_currentIndexChanged(QString)\0"
    "on_comboBoxVille2_currentIndexChanged(QString)\0"
    "index\0on_listWidgetPraticien_clicked(QModelIndex)\0"
    "on_listWidgetMedicament_clicked(QModelIndex)\0"
    "on_pushButtonAjoutPraticien_clicked()\0"
    "on_pushButtonSuppPraticien_clicked()\0"
    "on_pushButtonModifPraticien_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_action_Quitter_triggered(); break;
        case 1: _t->on_listWidgetMedicament_activated(); break;
        case 2: _t->on_pushButtonAjoutMedicament_clicked(); break;
        case 3: _t->on_pushButtonSuppMedicament_clicked(); break;
        case 4: _t->on_pushButtonModifMedicament_clicked(); break;
        case 5: _t->on_comboBoxFamilleMain_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_comboBoxType_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_comboBoxVille_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_comboBoxVille2_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_listWidgetPraticien_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->on_listWidgetMedicament_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->on_pushButtonAjoutPraticien_clicked(); break;
        case 12: _t->on_pushButtonSuppPraticien_clicked(); break;
        case 13: _t->on_pushButtonModifPraticien_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE

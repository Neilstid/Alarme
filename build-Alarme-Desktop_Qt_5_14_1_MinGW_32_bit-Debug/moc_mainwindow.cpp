/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Alarme/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 26), // "on_actionQuitter_triggered"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 12), // "updateReveil"
QT_MOC_LITERAL(4, 52, 8), // "Alarm_On"
QT_MOC_LITERAL(5, 61, 10), // "play_Alarm"
QT_MOC_LITERAL(6, 72, 10), // "stop_music"
QT_MOC_LITERAL(7, 83, 17), // "on_Browse_clicked"
QT_MOC_LITERAL(8, 101, 12), // "saveSettings"
QT_MOC_LITERAL(9, 114, 3), // "key"
QT_MOC_LITERAL(10, 118, 5), // "value"
QT_MOC_LITERAL(11, 124, 5), // "group"
QT_MOC_LITERAL(12, 130, 12), // "loadSettings"
QT_MOC_LITERAL(13, 143, 12), // "defaultValue"
QT_MOC_LITERAL(14, 156, 26), // "on_radioButton_App_clicked"
QT_MOC_LITERAL(15, 183, 28), // "on_radioButton_music_clicked"
QT_MOC_LITERAL(16, 212, 21), // "on_Browse_App_clicked"
QT_MOC_LITERAL(17, 234, 22), // "on_Volume_valueChanged"
QT_MOC_LITERAL(18, 257, 15) // "on_Stop_clicked"

    },
    "MainWindow\0on_actionQuitter_triggered\0"
    "\0updateReveil\0Alarm_On\0play_Alarm\0"
    "stop_music\0on_Browse_clicked\0saveSettings\0"
    "key\0value\0group\0loadSettings\0defaultValue\0"
    "on_radioButton_App_clicked\0"
    "on_radioButton_music_clicked\0"
    "on_Browse_App_clicked\0on_Volume_valueChanged\0"
    "on_Stop_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    0,   82,    2, 0x08 /* Private */,
       6,    0,   83,    2, 0x08 /* Private */,
       7,    0,   84,    2, 0x08 /* Private */,
       8,    3,   85,    2, 0x08 /* Private */,
      12,    3,   92,    2, 0x08 /* Private */,
      14,    0,   99,    2, 0x08 /* Private */,
      15,    0,  100,    2, 0x08 /* Private */,
      16,    0,  101,    2, 0x08 /* Private */,
      17,    1,  102,    2, 0x08 /* Private */,
      18,    0,  105,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QVariant, QMetaType::QString,    9,   10,   11,
    QMetaType::QString, QMetaType::QString, QMetaType::QVariant, QMetaType::QString,    9,   13,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_actionQuitter_triggered(); break;
        case 1: _t->updateReveil(); break;
        case 2: _t->Alarm_On(); break;
        case 3: _t->play_Alarm(); break;
        case 4: _t->stop_music(); break;
        case 5: _t->on_Browse_clicked(); break;
        case 6: _t->saveSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 7: { QString _r = _t->loadSettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QVariant(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->on_radioButton_App_clicked(); break;
        case 9: _t->on_radioButton_music_clicked(); break;
        case 10: _t->on_Browse_App_clicked(); break;
        case 11: _t->on_Volume_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_Stop_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionQuitter;
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLCDNumber *lcdNumber;
    QGroupBox *Alarme;
    QTimeEdit *Heure_Alarme;
    QLabel *label_2;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QPushButton *Browse;
    QSpinBox *Time_music;
    QLabel *label_3;
    QRadioButton *radioButton_music;
    QPushButton *Browse_App;
    QLineEdit *lineEdit_App;
    QRadioButton *radioButton_App;
    QSlider *Volume;
    QLabel *label_4;
    QLCDNumber *Volume_amount;
    QPushButton *Stop;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(426, 326);
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 421, 271));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 181, 61));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 71, 16));
        lcdNumber = new QLCDNumber(groupBox);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(90, 20, 81, 31));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy);
        lcdNumber->setMinimumSize(QSize(10, 10));
        lcdNumber->setBaseSize(QSize(10, 10));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        lcdNumber->setFont(font);
        lcdNumber->setAutoFillBackground(true);
        lcdNumber->setStyleSheet(QString::fromUtf8(""));
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setFrameShadow(QFrame::Raised);
        lcdNumber->setDigitCount(8);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        Alarme = new QGroupBox(tab);
        Alarme->setObjectName(QString::fromUtf8("Alarme"));
        Alarme->setGeometry(QRect(220, 10, 181, 61));
        Heure_Alarme = new QTimeEdit(Alarme);
        Heure_Alarme->setObjectName(QString::fromUtf8("Heure_Alarme"));
        Heure_Alarme->setGeometry(QRect(80, 30, 81, 22));
        Heure_Alarme->setReadOnly(false);
        label_2 = new QLabel(Alarme);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 71, 16));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 391, 221));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 50, 281, 21));
        lineEdit->setReadOnly(true);
        Browse = new QPushButton(groupBox_2);
        Browse->setObjectName(QString::fromUtf8("Browse"));
        Browse->setGeometry(QRect(300, 50, 80, 22));
        Time_music = new QSpinBox(groupBox_2);
        Time_music->setObjectName(QString::fromUtf8("Time_music"));
        Time_music->setGeometry(QRect(150, 80, 42, 22));
        Time_music->setValue(30);
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 80, 121, 21));
        radioButton_music = new QRadioButton(groupBox_2);
        radioButton_music->setObjectName(QString::fromUtf8("radioButton_music"));
        radioButton_music->setGeometry(QRect(10, 30, 85, 20));
        radioButton_music->setChecked(true);
        Browse_App = new QPushButton(groupBox_2);
        Browse_App->setObjectName(QString::fromUtf8("Browse_App"));
        Browse_App->setEnabled(false);
        Browse_App->setGeometry(QRect(300, 180, 80, 22));
        lineEdit_App = new QLineEdit(groupBox_2);
        lineEdit_App->setObjectName(QString::fromUtf8("lineEdit_App"));
        lineEdit_App->setEnabled(false);
        lineEdit_App->setGeometry(QRect(10, 180, 281, 21));
        lineEdit_App->setReadOnly(true);
        radioButton_App = new QRadioButton(groupBox_2);
        radioButton_App->setObjectName(QString::fromUtf8("radioButton_App"));
        radioButton_App->setGeometry(QRect(10, 160, 85, 20));
        Volume = new QSlider(groupBox_2);
        Volume->setObjectName(QString::fromUtf8("Volume"));
        Volume->setGeometry(QRect(80, 110, 111, 21));
        Volume->setValue(50);
        Volume->setOrientation(Qt::Horizontal);
        Volume->setTickPosition(QSlider::NoTicks);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 110, 47, 21));
        Volume_amount = new QLCDNumber(groupBox_2);
        Volume_amount->setObjectName(QString::fromUtf8("Volume_amount"));
        Volume_amount->setGeometry(QRect(200, 110, 31, 20));
        sizePolicy.setHeightForWidth(Volume_amount->sizePolicy().hasHeightForWidth());
        Volume_amount->setSizePolicy(sizePolicy);
        Volume_amount->setMinimumSize(QSize(10, 10));
        Volume_amount->setBaseSize(QSize(10, 10));
        Volume_amount->setFont(font);
        Volume_amount->setLayoutDirection(Qt::RightToLeft);
        Volume_amount->setAutoFillBackground(true);
        Volume_amount->setStyleSheet(QString::fromUtf8(""));
        Volume_amount->setFrameShape(QFrame::NoFrame);
        Volume_amount->setFrameShadow(QFrame::Raised);
        Volume_amount->setDigitCount(2);
        Volume_amount->setSegmentStyle(QLCDNumber::Flat);
        Volume_amount->setProperty("intValue", QVariant(50));
        Stop = new QPushButton(groupBox_2);
        Stop->setObjectName(QString::fromUtf8("Stop"));
        Stop->setGeometry(QRect(210, 80, 171, 22));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 426, 21));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionQuitter->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Horloge", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Heure actuel :", nullptr));
        Alarme->setTitle(QCoreApplication::translate("MainWindow", "Alarme", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Definir :", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Heure Alarme", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Action alarme", nullptr));
        Browse->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Temps musique active : ", nullptr));
        radioButton_music->setText(QCoreApplication::translate("MainWindow", "Musique", nullptr));
        Browse_App->setText(QCoreApplication::translate("MainWindow", "Browse", nullptr));
        radioButton_App->setText(QCoreApplication::translate("MainWindow", "Application", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Volume :", nullptr));
        Stop->setText(QCoreApplication::translate("MainWindow", "Stop Alarme", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Action Alarme", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("MainWindow", "Fichier", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

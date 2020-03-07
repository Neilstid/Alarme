//include necessaire
#include "mainwindow.h"
#include "ui_mainwindow.h"

//les QObject
#include <QTimer>
#include <QObject>
#include <QTimeEdit>
#include <QFileDialog>
#include <QLineEdit>
#include <QSound>
#include <QSpinBox>
#include <QSettings>
#include <QProcess>
#include <QRadioButton>
#include <QPushButton>
#include <QLCDNumber>
#include <QMediaPlayer>
#include <QSlider>

//Des valeur pour les setting
#define GROUP "settings_group" //Goupe de setting
#define DEFAULT_VALUE "NONE" //valeur par defaut

//Variable globale
QMediaPlayer *son_alarme = new QMediaPlayer; //Son alarme
int is_playing = 0; //Si le son est actuelement joué

//main
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //recuperation des settings
    QString setting_music = loadSettings("music",DEFAULT_VALUE, GROUP); //recuperation de la music
    QString setting_app = loadSettings("app",DEFAULT_VALUE, GROUP); //recuperation de l'application
    //entre de ces settings
    this->findChild<QLineEdit*>("lineEdit")->setText(setting_music); //lien vers music
    this->findChild<QLineEdit*>("lineEdit_App")->setText(setting_app); //lien vers application

    updateReveil(); //actualise l'heure du reveil

    //boucle toutes les secondes
    QTimer *timer = new QTimer(this); //creation du timer
    connect(timer, SIGNAL(timeout()), this, SLOT(updateReveil())); //recuperation du signal a la fin du timer
    timer->start(1000);//debut timer 1 seconde
}

//destructeur
MainWindow::~MainWindow()
{
    delete ui;
}

//bouton quitter
void MainWindow::on_actionQuitter_triggered()
{
    QApplication::quit(); //ferme la fenetre
}

//met a jour l'heure
void MainWindow::updateReveil(){
    this->findChild<QLCDNumber*>("lcdNumber")->display(QTime::currentTime().toString("hh:mm:ss")); //met a jour l'heure

    Alarm_On(); //actualise si l'alarme doit se declencher ou non
}

//actualise si l'alarme doit se declencher ou non
void MainWindow::Alarm_On(){
    //recupere l'heure de l'alarme et actuel
    int Hour_alarme = this->findChild<QTimeEdit*>("Heure_Alarme")->time().hour(); //recupere l'heure de l'alarme
    int Minute_alarme = this->findChild<QTimeEdit*>("Heure_Alarme")->time().minute();//recupere minute de l'alarme

    int Hour = QTime::currentTime().hour(); //recupere l'heure actuel
    int Minute = QTime::currentTime().minute(); //recupere les minutes actuel

    //test si les deux heures sont egaux
    if(Hour_alarme == Hour and Minute_alarme == Minute){
        if(is_playing != 1){//si l'alarme ne sonne pas
            play_Alarm(); //lance l'alarme
            is_playing = 1; //alarme active
        }
    }else{
        is_playing = 0; //alarme desactive
    }
}

//lance l'alarme
void MainWindow::play_Alarm(){
    if(this->findChild<QRadioButton*>("radioButton_music")->isChecked() == true){//test si l'utilisateur veut de la music
        QString cheminDuSon = this->findChild<QLineEdit*>("lineEdit")->text();//recupere le chemin de la musique
        int temp = this->findChild<QSpinBox*>("Time_music")->value();//recupere temp a joue la musique

        if(cheminDuSon != NULL){//verifie que le chemin n'est pas null
            son_alarme->setMedia(QUrl::fromLocalFile(cheminDuSon));
            son_alarme->play(); //jouer le son

            QTimer::singleShot(temp*1000, this, SLOT(stop_music()));//arrete le son a temp secondes
        }
    }else if(this->findChild<QRadioButton*>("radioButton_App")->isChecked() == true){//test si l'utilisateur veut ouvrir une application
        QString program = this->findChild<QLineEdit*>("lineEdit_App")->text();//recupere le chemin de l'application

        if(program != NULL){//test que le chemin n'est pas null
            QProcess *myProcess = new QProcess(this);//genere un nouveau processus
            myProcess->start(program);//lance l'application
        }
    }
}

//parcours les fichier
void MainWindow::on_Browse_clicked()
{
    //ouvre les fichier et ne peut ouvrir que un fichier wav
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Sound"), "/home", tr("Sound (*.wav)"));
    //affiche le lien
    this->findChild<QLineEdit*>("lineEdit")->setText(fileName);

    //sauvegarde dans qsettings le lien
    saveSettings("music", fileName, GROUP);
}

//arrete la musique
void MainWindow::stop_music(){
    son_alarme->stop();//arrete la musique
}

//retien les parametre dans qsettings
void MainWindow::saveSettings (const QString &key, const QVariant &value, const QString &group){
    QSettings settings;//creer objet setting
    settings.beginGroup(group);//defini le groupe de parametre
    settings.setValue(key, value);//met la valeur et sa cle pour identifier la valeur
    settings.endGroup();//sort du group
}

QString MainWindow::loadSettings(const QString &key, const QVariant &defaultValue, const QString &group){
    QSettings settings;//creer objet setting
    settings.beginGroup(group);//defini le groupe de parametre
    QVariant value = settings.value(key, defaultValue);//recupere la valeur grace a la cle sinon valeur par defaut
    settings.endGroup();//sort du group

    return value.toString();//retourne la valeur
}

//test si le radio button a recu un clique
void MainWindow::on_radioButton_App_clicked()
{
    if(this->findChild<QRadioButton*>("radioButton_App")->isChecked() == true){//verifie que le bouton est coche
        //desactive la musique
        this->findChild<QLineEdit*>("lineEdit")->setEnabled(false);
        this->findChild<QPushButton*>("Browse")->setEnabled(false);
        this->findChild<QPushButton*>("Stop")->setEnabled(false);
        this->findChild<QSpinBox*>("Time_music")->setEnabled(false);
        this->findChild<QSlider*>("Volume")->setEnabled(false);
        this->findChild<QLCDNumber*>("Volume_amount")->setEnabled(false);

        //active l'application
        this->findChild<QLineEdit*>("lineEdit_App")->setEnabled(true);
        this->findChild<QPushButton*>("Browse_App")->setEnabled(true);
    }
}

//test si le radio button a recu un clique
void MainWindow::on_radioButton_music_clicked()
{
    if(this->findChild<QRadioButton*>("radioButton_music")->isChecked() == true){//verifie que le bouton est coche
        //active la musique
        this->findChild<QLineEdit*>("lineEdit")->setEnabled(true);
        this->findChild<QPushButton*>("Browse")->setEnabled(true);
        this->findChild<QPushButton*>("Stop")->setEnabled(true);
        this->findChild<QSpinBox*>("Time_music")->setEnabled(true);
        this->findChild<QSlider*>("Volume")->setEnabled(true);
        this->findChild<QLCDNumber*>("Volume_amount")->setEnabled(true);

        //desactive l'application
        this->findChild<QLineEdit*>("lineEdit_App")->setEnabled(false);
        this->findChild<QPushButton*>("Browse_App")->setEnabled(false);
    }
}

//parcours les fichiers
void MainWindow::on_Browse_App_clicked()
{
    //ouvre les fichier et ne peut ouvrir que un fichier wav
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Sound"), "/home", tr("Application (*.exe)"));
    //affiche le lien
    this->findChild<QLineEdit*>("lineEdit_App")->setText(fileName);

    //sauvegarde dans qsettings le lien
    saveSettings("app", fileName, GROUP);
}

//setting volume
void MainWindow::on_Volume_valueChanged(int value)
{
    //print volume
    this->findChild<QLCDNumber*>("Volume_amount")->display(this->findChild<QSlider*>("Volume")->value());
    //change volume
    son_alarme->setVolume(this->findChild<QSlider*>("Volume")->value());
}

void MainWindow::on_Stop_clicked()
{
    son_alarme->stop();//arrete la musique
}

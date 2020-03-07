#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSound>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionQuitter_triggered();
    void updateReveil();
    void Alarm_On();
    void play_Alarm();
    void stop_music();
    void on_Browse_clicked();

    void saveSettings (const QString &key, const QVariant &value, const QString &group);
    QString loadSettings(const QString &key, const QVariant &defaultValue, const QString &group);

    void on_radioButton_App_clicked();

    void on_radioButton_music_clicked();

    void on_Browse_App_clicked();

    void on_Volume_valueChanged(int value);

    void on_Stop_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

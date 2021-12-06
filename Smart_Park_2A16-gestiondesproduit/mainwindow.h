#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDialog>
#include <QSystemTrayIcon>
#include <QMainWindow>
#include "produitzoo.h"
#include <iostream>
//#include <QtCharts>
//#include <QChartView>
//#include <QPieSeries>

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
    void on_pb_ajout_clicked();

    void on_pushButton_2_clicked();

    void on_pb_modifier_clicked();

    void on_comboBox_activated(const QString &arg1);

    void on_RB_trinom_clicked();

    void on_RB_category_clicked();

    void on_RB_type_clicked();

    void on_Recherche_textChanged(const QString &arg1);


    void on_pb_calcul_clicked();

    void on_pb_statics_clicked();

private:
    Ui::MainWindow *ui;
    produitzoo P;
    QSystemTrayIcon *mSystemTrayIcon;
};
#endif // MAINWINDOW_H

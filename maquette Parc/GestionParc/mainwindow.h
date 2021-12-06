#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDialog>
#include <QMainWindow>
#include <QDebug>
#include "animal.h"
#include "animaux.h"
#include "employee.h"
#include "client.h"
#include "produit.h"
#include "arduino.h"
#include "interfacearduino2.h"

//QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
//QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow();


private slots:

    void on_pb_gererAn_clicked();

    void on_pb_pageFB_clicked();

    void on_pb_gestion_emp_clicked();

    void on_pb_gestion_clients_clicked();

    void on_pb_gestion_produit_clicked();

    void on_pb_niveau_eau_clicked();


    void on_pb_retour_clicked();

    void on_pb_quitter_clicked();

    void on_pb_controle_porte_clicked();

private:
    Ui::MainWindow *ui;
    animaux animaux;
    //employee employee;
    produit produit;
    arduino *Arduino;
};

#endif // MAINWINDOW_H

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employee.h"
#include "animal.h"
#include "client.h"
#include "produit.h"
#include "mainwindow0.h"
#include "classclient.h"
#include "animaux.h"
#include "classarduino.h"
#include "opendoor.h"
#include <QString>
#include <QDialog>
#include <QMessageBox>
#include <QIntValidator>
#include <QDesktopServices>
#include <QUrl>

mainwindow0 *main0;
class client;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_gererAn_clicked()
{
    hide();
    animaux.setModal(true);
    animaux.exec();
    //animaux =new animaux(this);
    //animaux->show();
}


void MainWindow::on_pb_pageFB_clicked()
{
    QString link="https://www.familiscope.fr/dossiers/les-20-plus-beaux-parcs-animaliers-reserves-et-zoos-de-france/";
    QDesktopServices::openUrl(QUrl(link)); //pour chercher et ouvrir l'adresse
}

void MainWindow::on_pb_gestion_emp_clicked()
{
    hide();
    employee employee;
    employee.setModal(true);
    employee.exec();
}

void MainWindow::on_pb_gestion_clients_clicked()
{
    hide();
    client client;
    client.setModal(true);
    client.exec();
}

void MainWindow::on_pb_gestion_produit_clicked()
{
    hide();
    produit.setModal(true);
    produit.exec();
}

void MainWindow::on_pb_niveau_eau_clicked()
{
    hide();
    arduino arduino;
    arduino.setModal(true);
    arduino.exec();
}


void MainWindow::on_pb_retour_clicked()
{
    main0 = new mainwindow0(this);
    main0->show();
    this->hide();

}

void MainWindow::on_pb_quitter_clicked()
{
    close();
}

void MainWindow::on_pb_controle_porte_clicked()
{
    hide();
    InterfaceArduino2 InterfaceArduino2;
    InterfaceArduino2.setModal(true);
    InterfaceArduino2.exec();
}

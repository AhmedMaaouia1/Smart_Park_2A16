#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employee.h"
#include "animal.h"
#include "client.h"
#include "produit.h"
#include "classclient.h"
#include "animaux.h"
#include "classarduino.h"
#include <QString>
#include <QDialog>
#include <QMessageBox>
#include <QIntValidator>
#include <QDesktopServices>
#include <QUrl>

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
    //
    animaux animaux;
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
    //
    Employee = new employee(this);
    Employee->show();
}

void MainWindow::on_pb_gestion_clients_clicked()
{
    //
    Client = new client(this);
    Client->show();
}

void MainWindow::on_pb_gestion_produit_clicked()
{
    Produit = new produit(this);
    Produit->show();
}

void MainWindow::on_pb_niveau_eau_clicked()
{
    Arduino = new arduino(this);
    Arduino->show();
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "animal.h"
#include "animaux.h"
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

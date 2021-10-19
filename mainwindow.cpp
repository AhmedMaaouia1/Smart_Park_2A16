#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Afficher_clicked()
{
    qDebug() << "bouton: 'afficher' appuye.";
}

void MainWindow::on_Ajouter_clicked()
{
    qDebug() << "bouton: 'ajouter' appuye.";
}



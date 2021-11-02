#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employe.h"
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
void MainWindow::on_pb_ajouter_clicked()
{
int matricule=ui->le_matricule->text().toInt();
    int type=ui->le_type->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    QString date=ui->le_date->text();



employe E(matricule,type,nom,prenom,date);


}



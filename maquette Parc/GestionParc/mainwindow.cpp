#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "animal.h"
#include <QString>
#include <QMessageBox>
#include <QIntValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   ui->le_ref->setValidator(new QIntValidator(0, 99999999, this));
   ui->le_an->setValidator(new QIntValidator(2000, 2021, this));
   ui->tab_animaux->setModel(a.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
    int ref=ui->le_ref->text().toInt();
    int an=ui->le_an->text().toInt();
    QString type=ui->le_type->text();
    QString cage=ui->le_cage->text();
    QString sanitaire=ui->le_san->text();
    animal a(ref,an,sanitaire,type,cage);

    bool succes_ajout = a.ajouter();
    if(succes_ajout)
    {QMessageBox::information(nullptr, QObject::tr("database is open"),
                    QObject::tr("Ajout avec succes.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    ui->tab_animaux->setModel(a.afficher());}
}

void MainWindow::on_id_sup_clicked()
{
    animal a1;
    a1.setref(ui->le_ref_supp->text().toInt());
    bool test=a1.supprimer(a1.getref());
    QMessageBox msgBox;
    if(test)
    {msgBox.setText("Suppression avec succés");
        ui->tab_animaux->setModel(a.afficher());
    }
    else msgBox.setText("Echec de suppression");
    msgBox.exec();

}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "produits.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableproduit->setModel(P.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_ajout_clicked()
{
    QString id=ui->le_ref->text();

        QString nom=ui->le_name->text();
        QString category=ui->le_cat->text();
        QString type=ui->le_type->text();
        int prix=ui->le_prix->text().toInt();

       Produits P(id,nom,category,type,prix);
       bool test= P.ajouter();
       QMessageBox msgBox;
       if(test)
           msgBox.setText("ajout avec succes");
       else
           msgBox.setText("echec");
       msgBox.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    QString id =ui->le_ref_supp->text();
        bool test=P.supprimer(id);

        if(test)
            QMessageBox::information(nullptr, QObject::tr("ok"),
                        QObject::tr("supression effectué .\n"
                                    "Click Ok to exit."), QMessageBox::Ok);
        else
            QMessageBox::critical(nullptr, QObject::tr("not ok"),
                        QObject::tr("échec suprresion.\n"
                                    "Click cancel to exit."), QMessageBox::Cancel);
        ui->tableproduit->setModel(P.afficher());
}

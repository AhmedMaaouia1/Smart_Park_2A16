#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"etudiant.h"
#include <QIntValidator>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   ui->le_id->setValidator( new QIntValidator(0, 9999999, this));
  ui->tab_etudiant->setModel(e.affichet());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
    int id=ui->le_id->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    etudiant E(id,nom,prenom);
    bool test=E.ajouter();
    QMessageBox msgbox;
    if(test)
       { msgbox.setText("ajouter avec success");
        ui->tab_etudiant->setModel(e.affichet());
    }
    else
         msgbox.setText("echec d'ajout");
    msgbox.exec();
}

void MainWindow::on_pb_supprimer_clicked()
{
                   etudiant E1;E1.setid(ui->le_id_supp->text().toInt());
                   bool test=E1.supprimer(E1.getid());
                   QMessageBox msgbox;
                   if(test)
                   {
                       msgbox.setText("supprimer avec success");
                       ui->tab_etudiant->setModel(e.affichet());
                   }
                   else
                        msgbox.setText("echec de suppression");
                   msgbox.exec();

}

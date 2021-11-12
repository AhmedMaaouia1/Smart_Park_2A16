#include "employee.h"
#include "ui_employee.h"
#include "employe.h"
#include <QIntValidator>
#include "QSqlQuery"
#include "QStringListModel"
#include <QMessageBox>
#include "mainwindow.h"

employee::employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::employee)
{
    ui->setupUi(this);

}

employee::~employee()
{
    delete ui;

}



void employee::on_pb_ajouter_clicked()
{QString matricul=ui->le_matricule->text();
    QString type=ui->le_type->text();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    QString age =ui->le_age->text();
    QString matriculd=ui->le_matriculd->text();
employe E(matricul,type,nom,prenom,age,matriculd);
   bool test=E.ajouter();
   QMessageBox msgBox;
   if(test)
       msgBox.setText("ajout avec succes");

   else
       msgBox.setText("echec");
   msgBox.exec();
   ui->tabemploye->setModel(e.afficher());
ui->comboBox->setModel(e.afficher());

}

void employee::on_pb_supprimer_clicked()
{
    QString matricul =ui->comboBox->currentText();
      bool test=e.supprimer(matricul);

      if(test)
          QMessageBox::information(nullptr, QObject::tr("ok"),
                      QObject::tr("supression effectué .\n"
                                  "Click Ok to exit."), QMessageBox::Ok);
      else
          QMessageBox::critical(nullptr, QObject::tr("not ok"),
                      QObject::tr("échec suprresion.\n"
                                  "Click cancel to exit."), QMessageBox::Cancel);
      ui->tabemploye->setModel(e.afficher());
  ui->comboBox->setModel(e.afficher());
}

void employee::on_pb_modifier_clicked()
{
        QString matricul=ui->le_matricule->text();
        QString type=ui->le_type->text();
        QString nom=ui->le_nom->text();
        QString prenom=ui->le_prenom->text();
        QString age =ui->le_age->text();
        QString matriculd=ui->le_matriculd->text();

        employe E(matricul,type,nom,prenom,age,matriculd);


        bool test=e.modifier(matricul,type,nom,prenom,age,matriculd);
        if(test)
      {
      QMessageBox::information(nullptr, QObject::tr("Modifier avec succées "),
                        QObject::tr("invite modifiée.\n"
                                    "Click ok to exit."), QMessageBox::Ok);

      }
        else
            QMessageBox::critical(nullptr, QObject::tr("Modifier a echoué"),
                        QObject::tr("Erreur !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tabemploye->setModel(e.afficher());
}

void employee::on_comboBox_activated(const QString &arg1)
{
    QString matricul = ui->comboBox->currentText();

               QSqlQuery query;
               query.prepare("select * from EMPLOYE where MATRICULE='"+matricul+"'");

               if(query.exec()){

                   while(query.next())
                   {
                       ui->le_matricule->setText(query.value(0).toString());
                       ui->le_type->setText(query.value(1).toString());
                       ui->le_nom->setText(query.value(2).toString());
                       ui->le_prenom->setText(query.value(3).toString());
                       ui->le_age->setText(query.value(4).toString());
                       ui->le_matriculd->setText(query.value(5).toString());
   }}
               else
                   QMessageBox::critical(nullptr, QObject::tr(" echoué"),
                               QObject::tr("Erreur !.\n"
                                           "Click Cancel to exit."), QMessageBox::Cancel);

   }



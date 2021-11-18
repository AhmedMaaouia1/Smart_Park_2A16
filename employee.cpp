#include "employee.h"
#include "ui_employee.h"
#include "employe.h"
#include <QIntValidator>
#include "QSqlQuery"
#include "QStringListModel"
#include <QMessageBox>
#include "QCamera"
#include "QCameraImageCapture"
#include "QCameraViewfinder"
#include "QVBoxLayout"
#include "mainwindow.h"
#include "widget.h"
#include <QPaintEvent>
#include <QPainter>
#include <QWidget>
#include <iostream>
#include <QTextEdit>

#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

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







void employee::on_le_tri_nom_clicked()
{
     ui->tabemploye->setModel(e.triNom());
}

void employee::on_le_tri_age_clicked()
{
    ui->tabemploye->setModel(e.triAge());
}



void employee::on_rech_textChanged(const QString &arg1)
{

        employe E;


             QString Age = ui->rech->text();
             QString Matricule = ui->rech->text();

                E.rechercher(ui->tabemploye,Age,Matricule);
                if (ui->rech->text().isEmpty())
                {
                   ui->tabemploye->setModel(E.afficher());
                }

}





void employee::on_pb_statistics_clicked()
{
    double b=e.Stat_partie2(); // stat_partie2() pour determiner le nombre des animaux nés avant 2010
    double c=e.Stat_partie3(); // stat_partie2() pour determiner le nombre des animaux nés apres 2010

    double s2;
    double s3;
    if((b==0)&&(c==0))
    {
        s2=0;
        s3=0;
    }
    else
    {
        s2= (b*100)/(b+c) ; // pourcentage des animaux nés avant 2010

        s3=(c*100)/(b+c);   // pourcentage des animaux nés apres 2010

    }



    QPieSeries *series = new QPieSeries(); // La serie des elements qu'on va faire les stats
    series->append("employe agé entre 18ans et 25ans ",s2); // pour ajouter une partie nommée "Animaux nés avant 2010" avec une pourcentage de s2
    series->append("employe agé entre 26ans et 60ans",s3); // pour ajouter une partie nommée "Animaux nés apres 2010" avec une pourcentage de s3
    QPieSlice *slice = series->slices().at(0);  // *slice pour faire des modifications au niveau du tranche "Animaux nés avant 2010"
    slice->setLabelVisible(true);
    slice->setPen(QPen(Qt::black,2)); // modifier le contour en couleur noir avec taille 2
    slice->setBrush(Qt::red); // pour changer la couleur de la partie 0 qui est "Animaux nés avant 2010" en rouge
    QChart *chart = new QChart(); // créer un graphique dynamiquement
    chart->addSeries(series); // ajouter series créé récemment
    chart->setTitle("Statistique des ages"); //ajouter un titre a notre graphique
    QChartView *chartview = new QChartView(chart); // créer widget autonome pouvant afficher des graphiques
    chartview->setParent(ui->horizontal_stat); // pour afficher les graphiques dans le label


}

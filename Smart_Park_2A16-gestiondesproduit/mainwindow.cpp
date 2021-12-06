#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDialog>
#include "QSqlQuery"
#include <iostream>
#include <QTextEdit>
//#include <QtCharts/QChartView>
//#include <QtCharts/QBarSeries>
//#include <QtCharts/QBarSet>
//#include <QtCharts/QLegend>
//#include <QtCharts/QBarCategoryAxis>
//#include <QtCharts/QHorizontalStackedBarSeries>
//#include <QtCharts/QLineSeries>
//#include <QtCharts/QCategoryAxis>
//#include <QtCharts/QPieSeries>
//#include <QtCharts/QPieSlice>
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableproduit->setModel(P.afficher());
    ui->comboBox->setModel(P.afficher());
    mSystemTrayIcon = new QSystemTrayIcon(this);
         mSystemTrayIcon->setIcon(QIcon(":/myappico.png"));
         mSystemTrayIcon->setVisible(true);



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

       produitzoo P(id,nom,category,type,prix);
       bool test= P.ajouter();
       QMessageBox msgBox;
       if(test)
           mSystemTrayIcon->showMessage(tr("ajout avec succes"),
                                tr("ajout effectué"));
       else
           mSystemTrayIcon->showMessage(tr("echec"),
                                tr("ajout echec"));

       msgBox.exec();
       ui->tableproduit->setModel(P.afficher());
       ui->comboBox->setModel(P.afficher());
}

void MainWindow::on_pushButton_2_clicked()
{
    QString id =ui->comboBox->currentText();
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
        ui->comboBox->setModel(P.afficher());
}

void MainWindow::on_pb_modifier_clicked()
{
     QString id = ui->le_ref->text();
        QString  nom = ui->le_name->text();
           QString category= ui->le_cat->text();
           QString type= ui->le_type->text();
           int prix = ui->le_prix->text().toInt();

        produitzoo F(id,nom,category,type,prix);


         bool test=F.modifier(id,nom,category,type,prix);
         if(test)
       {ui->tableproduit->setModel(P.afficher());
             ui->comboBox->setModel(P.afficher());
       QMessageBox::information(nullptr, QObject::tr("Modifier avec succées "),
                         QObject::tr("invite modifiée.\n"
                                     "Click ok to exit."), QMessageBox::Ok);

       }
         else
             QMessageBox::critical(nullptr, QObject::tr("Modifier a echoué"),
                         QObject::tr("Erreur !.\n"
                                     "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_comboBox_activated(const QString &arg1)
{
    QSqlQuery query;

        query.prepare("select * from PRODUIT where id = '"+arg1+"'");
        if (query.exec())
        {
            while(query.next())
            {
                ui->le_ref->setText(query.value(0).toString());
                ui->le_name->setText(query.value(1).toString());
                ui->le_cat->setText(query.value(2).toString());
                ui->le_type->setText(query.value(3).toString());
                ui->le_prix->setText(query.value(4).toString());
            }
        }
}

void MainWindow::on_RB_trinom_clicked()
{
    ui->tableproduit->setModel(P.trinom());
}

void MainWindow::on_RB_category_clicked()
{
    ui->tableproduit->setModel(P.tricategory());
}

void MainWindow::on_RB_type_clicked()
{
    ui->tableproduit->setModel(P.tritype());
}

void MainWindow::on_Recherche_textChanged(const QString &arg1)
{
    {
               produitzoo P;


        QString nom = ui->Recherche->text();
         QString category = ui->Recherche->text();
          QString type = ui->Recherche->text();
        P.recherche(ui->tableproduit,nom,category,type);
        if (ui->Recherche->text().isEmpty())
        {
           ui->tableproduit->setModel(P.afficher());
        }
        }
}

void MainWindow::on_pb_calcul_clicked()
{
  int revenue=P.calculerprix();
  QString r=QString::number(revenue);
    cout<<"revenue="<<revenue<<endl;
   ui->textrevenue->setText(r);


}






void MainWindow::on_pb_statics_clicked()
{
    double b=P.Stat_partie2(); // stat_partie2() pour determiner le nombre des animaux nés avant 2010
    double c=P.Stat_partie3(); // stat_partie2() pour determiner le nombre des animaux nés apres 2010

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



          //  QPieSeries *series = new QPieSeries(); // La serie des elements qu'on va faire les stats
        //    series->append("Client agé moins de 20ans",s2); // pour ajouter une partie nommée "Animaux nés avant 2010" avec une pourcentage de s2
        //    series->append("Client agé plus de 20ans",s3); // pour ajouter une partie nommée "Animaux nés apres 2010" avec une pourcentage de s3
        //    QPieSlice *slice = series->slices().at(0);  // *slice pour faire des modifications au niveau du tranche "Animaux nés avant 2010"
        //    slice->setLabelVisible(true);
         //   slice->setPen(QPen(Qt::black,2)); // modifier le contour en couleur noir avec taille 2
         //   slice->setBrush(Qt::red); // pour changer la couleur de la partie 0 qui est "Animaux nés avant 2010" en rouge
         //   QChart *chart = new QChart(); // créer un graphique dynamiquement
        //    chart->addSeries(series); // ajouter series créé récemment
          //  chart->setTitle("Statistique des ages"); //ajouter un titre a notre graphique
          //  QChartView *chartview = new QChartView(chart); // créer widget autonome pouvant afficher des graphiques
          //  chartview->setParent(ui->horizontal_stat); // pour afficher les graphiques dans le label

}

#include "client.h"
#include "ui_client.h"
#include "classclient.h"
#include "mainwindow.h"
#include <QIntValidator>
#include "QSqlQuery"
#include "QStringListModel"
#include <QMessageBox>
#include "smtp.h"
#include <QFileDialog>
#include <QMediaPlayer>
#include <QSqlQueryModel>
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


MainWindow *mainwc;

client::client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::client)
{
    ui->setupUi(this);
    mMediaPlayer = new QMediaPlayer(this);

    connect(mMediaPlayer,&QMediaPlayer::positionChanged, [&](quint64 pos)
    {
        ui->avance->setValue(pos);
    });
    connect(mMediaPlayer,&QMediaPlayer::durationChanged,[&](quint64 dur)
    {
        ui->avance->setMaximum(dur);
    });
}

client::~client()
{
    delete ui;
}


void client::on_pb_ajouter_clicked()
{
   int ID_c=ui->le_matricule->text().toInt();
   QString adresse=ui->le_type->text();
   QString nom=ui->le_nom->text();
   QString prenom=ui->le_prenom->text();
   int age =ui->le_age->text().toInt();
   int num_telephone=ui->le_matriculd->text().toInt();
   classclient c(ID_c,adresse,nom,prenom,age,num_telephone);
  bool test=c.ajouter();
  QMessageBox msgBox;
  if(test)
      msgBox.setText("ajout avec succes");

  else
      msgBox.setText("echec");
  msgBox.exec();
  ui->tabemploye->setModel(c.afficher());
  ui->comboBox->setModel(c.afficher());

}

void client::on_pb_supprimer_clicked()
{
  int ID_c =ui->comboBox->currentText().toInt();
     bool test=c.supprimer(ID_c);

     if(test)
         QMessageBox::information(nullptr, QObject::tr("ok"),
                     QObject::tr("supression effectué .\n"
                                 "Click Ok to exit."), QMessageBox::Ok);
     else
         QMessageBox::critical(nullptr, QObject::tr("not ok"),
                     QObject::tr("échec suprresion.\n"
                                 "Click cancel to exit."), QMessageBox::Cancel);
     ui->tabemploye->setModel(c.afficher());
 ui->comboBox->setModel(c.afficher());
}

void client::on_pb_modifier_clicked()
{
       int ID_c=ui->le_matricule->text().toInt();
       QString adresse=ui->le_type->text();
       QString nom=ui->le_nom->text();
       QString prenom=ui->le_prenom->text();
       int age =ui->le_age->text().toInt();
       int num_telephone=ui->le_matriculd->text().toInt();

       classclient c(ID_c,adresse,nom,prenom,age,num_telephone);


       bool test=c.modifier(ID_c,adresse,nom,prenom,age,num_telephone);
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
       ui->tabemploye->setModel(c.afficher());
}

void client::on_comboBox_activated(const QString &arg1)
{
   QString ID_c = ui->comboBox->currentText();

              QSqlQuery query;
              query.prepare("select * from CLIENT where ID_c ='"+ID_c+"'");

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




void client::on_pushButton_browse_email_clicked()
{
   files.clear();

   QFileDialog dialog(this);
   dialog.setDirectory(QDir::homePath());
   dialog.setFileMode(QFileDialog::ExistingFiles);

   if (dialog.exec())
       files = dialog.selectedFiles();

   QString fileListString;
   foreach(QString file, files)
       fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );

   ui->lineEdit_atchmnt_email->setText( fileListString );
}

void client::on_pushButton_send_email_clicked()
{
   //    QSslConfiguration sslCfg = QSslConfiguration::defaultConfiguration();
   //    QList<QSslCertificate> ca_list = sslCfg.caCertificates();
   //    QList<QSslCertificate> ca_new = QSslCertificate::fromData("CaCertificates");
   //    ca_list += ca_new;

   //    sslCfg.setCaCertificates(ca_list);

   //    sslCfg.setProtocol( QSsl::TlsV1SslV3 );

   //    QSslConfiguration::setDefaultConfiguration(sslCfg);

       qDebug() <<  "Loaded SSL Library version: " << QSslSocket::sslLibraryVersionString();

       // ui->lineEdit_to_email->setText("email_ili_bch_tab3athlou@gmail.com");
       // ui->lineEdit_from_email->setText("email_ili_bch_tab3ith_minou@gmail.com");
       // ui->lineEdit_psswrd_email->setText("mdp mta3 l email ili bch tab3th minou");

       // ui->lineEdit_subject_email->setText("test subject");
       // ui->textEdit_email->setText("test text");

       QString from = ui->lineEdit_from_email->text();
       QString to = ui->lineEdit_to_email->text();
       QString subject = ui->lineEdit_subject_email->text();
       QString password = ui->lineEdit_psswrd_email->text();
       QString email_text = ui->textEdit_email->toPlainText();

       smtp* Smtp = new smtp(from, password);
       connect(Smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

       if( !files.isEmpty() )
           Smtp->sendMail(from, to, subject, email_text, files);
       else
           Smtp->sendMail(from, to, subject, email_text);
}
void  client ::mailSent(QString status)
{

   if(status == "Message sent")
       QMessageBox::warning( nullptr, tr( "email" ), tr( "Message sent.\n\n" ) );
   ui->lineEdit_to_email->clear();
   ui->lineEdit_subject_email->clear();
   ui->lineEdit_atchmnt_email->clear();
   ui->textEdit_email->clear();
   ui->lineEdit_psswrd_email->clear();
}

void client::on_abrir_clicked()
{
   QString filename = QFileDialog::getOpenFileName(this,"Abrir");
   if (filename.isEmpty())
   {
       return ;
   }
   mMediaPlayer->setMedia(QUrl::fromLocalFile(filename));

   mMediaPlayer->setVolume(ui->volum->value());
}

void client::on_play_clicked()
{
   mMediaPlayer->play();

}

void client::on_pause_clicked()
{
mMediaPlayer->pause();
}

void client::on_stop_clicked()
{
mMediaPlayer->stop();
}



void client::on_mute_clicked()
{
   if(ui->mute->text()=="Mute")
   {mMediaPlayer->setMuted(true);
       ui->mute->setText("Mute");}
   else
   {mMediaPlayer->setMuted(false);
       ui->mute->setText("Mute");
} }


void client::on_volum_valueChanged(int value)
{
 mMediaPlayer->setVolume(value);
}






void client::on_trie_age_clicked()
{
   classclient c;
         ui->tabemploye->setModel(c.trierage());
}

void client::on_trie_nom_clicked()
{
   classclient c;
         ui->tabemploye->setModel(c.triernom());
}

void client::on_trie_prenom_clicked()
{
   classclient c;
         ui->tabemploye->setModel(c.trierprenom());
}



void client::on_recherche_textChanged(const QString &arg1)
{
   classclient c;

       int ID_c = ui->recherche->text().toInt();
       int num_telephone = ui->recherche->text().toInt();


           c.rechercher(ui->tabemploye,ID_c,num_telephone);
           if (ui->recherche->text().isEmpty())
           {
              ui->tabemploye->setModel(c.afficher());
           }

}




void client::on_pb_statistics_clicked()
{
       double b=c.Stat_partie2(); // stat_partie2() pour determiner le nombre des animaux nés avant 2010
       double k=c.Stat_partie3(); // stat_partie2() pour determiner le nombre des animaux nés apres 2010

       double s2;
       double s3;
       if((b==0)&&(k==0))
       {
           s2=0;
           s3=0;
       }
       else
       {
           s2= (b*100)/(b+k) ; // pourcentage des animaux nés avant 2010

           s3=(k*100)/(b+k);   // pourcentage des animaux nés apres 2010

       }
       QPieSeries *series = new QPieSeries(); // La serie des elements qu'on va faire les stats
       series->append("Client agé moins de 20ans",s2); // pour ajouter une partie nommée "Animaux nés avant 2010" avec une pourcentage de s2
       series->append("Client agé plus de 20ans",s3); // pour ajouter une partie nommée "Animaux nés apres 2010" avec une pourcentage de s3
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



void client::on_pb_retour_client_clicked()
{
    mainwc = new MainWindow(this);
    mainwc->show();
    //this->hide();
}

void client::on_pb_quitter_client_clicked()
{
    close();
}

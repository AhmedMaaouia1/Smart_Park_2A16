#include "animaux.h"
#include "connexion.h"
#include "ui_animaux.h"
#include "mainwindow.h"
#include "animal.h"
#include <QString>
#include <QDialog>
#include <QMessageBox>
#include <QIntValidator>
#include <QPaintEvent>
#include <QPainter>
#include <QWidget>
#include <iostream>
#include <QTextEdit>

using namespace std;

animaux::animaux(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::animaux)
{
    ui->setupUi(this);
    ui->le_ref->setValidator(new QIntValidator(0, 99999999, this));
    ui->le_an->setValidator(new QIntValidator(2000, 2021, this));
    ui->tab_animaux->setModel(a.afficher());
}

animaux::~animaux()
{
    delete ui;
}

void animaux::on_pb_ajouter_clicked()
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

void animaux::on_pb_upload_2_clicked()
{
    QSqlQueryModel* modal=new QSqlQueryModel();
    //conn.createconnect();
    QSqlQuery* qry=new QSqlQuery();
     qry->prepare("select reference from ANIMAUX");
     qry->exec();
     modal->setQuery(*qry);
     ui->comboBox_supp_ref_2->setModel(modal);
}


void animaux::on_id_sup_clicked()
{
    cout<< ui->comboBox_supp_ref_2->currentText().toInt()<<endl;
    a.setref(ui->comboBox_supp_ref_2->currentText().toInt());
    bool test=a.supprimer(a.getref());
    QMessageBox msgBox;
    if(test)
    {msgBox.setText("Suppression avec succés");
        ui->tab_animaux->setModel(a.afficher());
    }
    else msgBox.setText("Echec de suppression");
    msgBox.exec();

}


void animaux::on_pb_upload_clicked()
{
    //connexion conn;
    QSqlQueryModel* modal=new QSqlQueryModel();
    //conn.createconnect();
    QSqlQuery* qry=new QSqlQuery();
     qry->prepare("select reference from ANIMAUX");
     qry->exec();
     modal->setQuery(*qry);
     ui->comboBox_modifier_ref->setModel(modal);
}

void animaux::on_comboBox_modifier_ref_currentIndexChanged(const QString &arg1)
{
    QString ref=ui->comboBox_modifier_ref->currentText();
    QSqlQuery qry;
    qry.prepare("select * from ANIMAUX where reference='"+ref+"'");
    qry.exec();
    while(qry.next())
    {
        ui->le_an_2->setText(qry.value(1).toString());
        ui->le_san_2->setText(qry.value(2).toString());
        ui->le_type_2->setText(qry.value(3).toString());
        ui->le_cage_2->setText(qry.value(4).toString());
    }


}

void animaux::on_pb_modifier_clicked()
{

    int ref = ui->comboBox_modifier_ref->currentText().toInt();
    cout<<"ref="<<ref<<endl;
    int annee= ui->le_an_2->text().toInt();
    cout<<"annee="<<annee<<endl;
    QString type = ui->le_type_2->text();
    QString cage = ui->le_cage_2->text();
    QString san = ui->le_san_2->text();

    QString testString = "test";

    bool test = a.modifier(ref,annee,type,cage,san);

    if( test )
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                                 QObject::tr("modification avec succes.\n"
                                             "Click cancel to exit."),
                                 QMessageBox::Cancel);
        ui->tab_animaux->setModel(a.afficher());
    }
    else
    {
        QMessageBox::information(nullptr, QObject::tr("Not OK"),
                                 QObject::tr("Echec de la modification\n"
                                             "Click cancel to exit."),
                                  QMessageBox::Cancel);
    }

}

void animaux::on_pb_stat_clicked()
{
        double b=a.Stat_partie2();
        cout<<b<<endl ;
        double c=a.Stat_partie3();
        cout<<c<<endl ;
        double d=a.Stat_partie4();
        cout<<d<<endl ;
        double m=a.Stat_partie5();
        cout<<m<<endl ;

        double s2;
        double s3;
        if((b==0)&&(c==0))
        {
            s2=0;
            s3=0;
        }
        else
        {
            s2= (b*100)/(b+c) ;
            cout<<"s2:"<<s2<<endl;
            s3=(c*100)/(b+c);
            cout<<"s3:"<<s3<<endl;
        }

        float s5;
        float s4;
        if((m==0)&&(d==0))
        {
            s4=0;
            s5=0;
        }
        else
        {
            s4=(d*100)/(d+m);
            cout<<"s4:"<<s4<<endl;
            s5=(m*100)/(d+m);
            cout<<"s5:"<<s5<<endl;
        }


        QString strValue =  QString::number(s2, 'f' , 2);
        ui->lab_stat2000->setText(strValue) ;
        QTextFormat a;
        a=QTextFormat(10);
        ui->lab_stat2000->textFormat();
        ui->lab_stat2000->setSizeIncrement(10,10);

        QString strValue3 =  QString::number(s3, 'f' , 2);
        ui->lab_stat2011->setText(strValue3) ;
        ui->lab_stat2011->setSizeIncrement(10,10);

        QString strValue4 =  QString::number(s4, 'f' , 2);
        ui->lab_malades->setText(strValue4) ;
        ui->lab_malades->setSizeIncrement(10,10);

        QString strValue5 =  QString::number(s5, 'f' , 2);
        ui->lab_seins->setText(strValue5) ;
        ui->lab_seins->setSizeIncrement(10,10);
        //ui->label_3->setNum(s4);

}



void animaux::on_pb_trier_clicked()
{
    ui->tab_animaux->setModel(a.trieranimaux());
}

void animaux::on_pb_trier_type_clicked()
{
    ui->tab_animaux->setModel(a.trieranimauxType());
}

void animaux::on_pb_rechRef_clicked()
{
    //int ref=ui->le_rechRef->text().toInt();
    //ui->tab_animaux_2->setModel(a.rechercheRef(ref));
    QString ref=ui->le_rechRef->text();
    QSqlQuery qry;
    int test=0;
    qry.prepare("select * from ANIMAUX where reference='"+ref+"'");
    qry.exec();
    while(qry.next())
    {
        test=1;
        ui->le_an_3->setText(qry.value(1).toString());
        ui->le_san_3->setText(qry.value(2).toString());
        ui->le_type_3->setText(qry.value(3).toString());
        ui->le_cage_3->setText(qry.value(4).toString());
    }
    if (test==0)
    {
        QMessageBox::information(nullptr, QObject::tr("Not OK"),
                                  QObject::tr("Reference introuvable\n"
                                              "Click cancel to exit."),
                                   QMessageBox::Cancel);
    }

}

void animaux::on_pb_image_clicked()
{
    //We used the header <QFileDialog> in order to let the user take an image
    QString filename= QFileDialog::getOpenFileName(this, tr("choose"),"",tr("Images(*.png *.jpg *.jpeg *.bmp *.gif)"));
    //filename will take the name of the selected image
    if(QString::compare(filename,QString())!=0) //to see if the user clicked an image so we compare the filename with empty or not
    {
        QImage image; //the image variable will contain the image
        bool valid = image.load(filename); //boolean valid to see if our loading works

        if(valid)
        {
            image= image.scaledToWidth(ui->label_img->width(), Qt::SmoothTransformation);//to make the width of the image equal to the width of the label
            image= image.scaledToHeight(ui->label_img->height(), Qt::SmoothTransformation);
            ui->label_img->setPixmap(QPixmap::fromImage(image));//to set the image in the label_img
        }
        else
        {
            QMessageBox::information(nullptr, QObject::tr("Not OK"),
                                      QObject::tr("Erreur d'importation\n"
                                                  "Click cancel to exit."),
                                       QMessageBox::Cancel);
        }

    }

}

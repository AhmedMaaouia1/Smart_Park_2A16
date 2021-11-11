#include "animal.h"
#include "animaux.h"
#include "connexion.h"
#include "ui_animaux.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlQueryModel>
#include <QObject>
#include <QDialog>
#include <QMessageBox>
#include <QPaintEvent>
#include <QPainter>
#include <QWidget>
#include <iostream>


animal::animal()
{
    reference=0;
        naissance=0;
        type="";
        etat_cage="propre";
        etat_sanitaire="sein";
}
animal::animal(int ref,int an,QString etatsan,QString type,QString etatcage)
{
    reference=ref;
    naissance=an;
    this->type=type;
    etat_sanitaire=etatsan;
    etat_cage=etatcage;
}
int animal::getref(){return reference;}
int animal::getan(){return naissance;}
QString animal::gettype(){return type;}
QString animal::get_etat_sanitaire(){return etat_sanitaire;}
QString animal::get_etat_cage(){return etat_cage;}
void animal::setref(int ref){reference=ref;}
void animal::setan(int an){naissance=an;}
void animal::settype(QString type){this->type=type;}
void animal::set_etat_sanitaire(QString e){etat_sanitaire=e;}
void animal::set_etat_cage(QString e){etat_cage=e;}

bool animal::ajouter()
{
    QString ref_string=QString::number(reference);
    QString naissance_string=QString::number(naissance);
    QSqlQuery query;
          query.prepare("INSERT INTO ANIMAUX (REFERENCE, NAISSANCE, ETAT_SANITAIRE, TYPE, ETAT_CAGE) "
                        "VALUES (:REFERENCE, :NAISSANCE, :ETAT_SANITAIRE, :TYPE, :ETAT_CAGE)");
          query.bindValue(":REFERENCE", ref_string);
          query.bindValue(":NAISSANCE", naissance_string);
          query.bindValue(":ETAT_SANITAIRE", etat_sanitaire);
          query.bindValue(":TYPE", type);
          query.bindValue(":ETAT_CAGE", etat_cage);
    return query.exec();
}

QSqlQueryModel* animal::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
         model->setQuery("SELECT* FROM ANIMAUX");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Reference"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date naissance"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Etat Sanitaire"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("Etat de Cage"));



    return model;
}

QSqlQueryModel* animal::trieranimaux()
{
    QSqlQueryModel* model=new QSqlQueryModel();
         model->setQuery("SELECT* FROM ANIMAUX ORDER BY NAISSANCE DESC");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Reference"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date naissance"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Etat Sanitaire"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("Etat de Cage"));
    return model;
}

QSqlQueryModel* animal::trieranimauxType()
{
    QSqlQueryModel* model=new QSqlQueryModel();
         model->setQuery("SELECT* FROM ANIMAUX ORDER BY TYPE");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Reference"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date naissance"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Etat Sanitaire"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("Etat de Cage"));
    return model;
}

bool animal::supprimer(int ref)
{
    QSqlQuery query;
    query.prepare("Delete from ANIMAUX where REFERENCE=:ref");
          query.bindValue(":ref", ref);
    return query.exec();
}

bool animal::modifier(int ref,int annee,QString type,QString cage,QString san)
{
    QSqlQuery query;
    query.prepare("UPDATE ANIMAUX set REFERENCE=(?),NAISSANCE=(?),ETAT_SANITAIRE=(?),TYPE=(?) ,ETAT_CAGE=(?) where REFERENCE=(?) ");
    query.addBindValue(ref);
    query.addBindValue(annee);
    query.addBindValue(san);
    query.addBindValue(type);
    query.addBindValue(cage);
    query.addBindValue(ref);

    return query.exec();
}

int animal::Stat_partie2()
{

    int count=0 ;
    QSqlQuery requete("select * from ANIMAUX where NAISSANCE BETWEEN '2000' AND '2010'") ;
    while(requete.next())
    {
            count++ ;
    }

return count ;

}

int animal::Stat_partie3()
{
    int count=0 ;
    QSqlQuery requete("select * from ANIMAUX where NAISSANCE BETWEEN '2011' AND '2020'") ;
    while(requete.next())
    {
            count++ ;
    }

return count ;

}

int animal::Stat_partie4()
{
    int count=0 ;
    QString malade="malade";
    QSqlQuery requete("select * from ANIMAUX where ETAT_SANITAIRE LIKE '%malade%'") ;
    while(requete.next())
    {
            count++ ;
    }

return count ;
}

int animal::Stat_partie5()
{
    int count=0 ;
    QString sein="sein";
    QSqlQuery requete("select * from ANIMAUX where ETAT_SANITAIRE LIKE '%sein%'") ;
    while(requete.next())
    {
            count++ ;
    }
return count ;
}

QSqlQueryModel* animal::rechercheRef(int ref)
{
        //QMessageBox msgBox;
        //QSqlQuery query;
        //QString ref_string=QString::number(ref);
        //query.prepare("SELECT * from ANIMAUX  where REFERENCE=:ref");
        //query.bindValue(":ref", ref_string);
        //if (query.exec() && query.next())
        //{
        //        return true;
        //}
        //else
        //{

        //    msgBox.setText("Réfèrence n'existe pas");
        //    msgBox.exec();
        //    return false;
        //}
             QSqlQueryModel* model=new QSqlQueryModel();
             model->setQuery("select * from ANIMAUX ");
             model->setHeaderData(0, Qt::Horizontal, QObject::tr("Reference"));
             model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date naissance"));
             model->setHeaderData(2, Qt::Horizontal, QObject::tr("Etat Sanitaire"));
             model->setHeaderData(3, Qt::Horizontal, QObject::tr("Type"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("Etat de Cage"));

             return model;

}

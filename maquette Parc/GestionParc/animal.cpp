#include "animal.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QSqlQueryModel>
#include <QObject>
#include <QMessageBox>
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

bool animal::supprimer(int ref)
{
    QSqlQuery query;
    query.prepare("Delete from ANIMAUX where REFERENCE=:ref");
          query.bindValue(":ref", ref);
    return query.exec();
}

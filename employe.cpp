#include "employe.h"
#include <QSqlQuery>
{
  matricule=0; type=0; nom=""; prenom="";date=""

}
 employe::employe(int matricule,int type, QString nom, QString prenom, QString date )
 { this->matricule=matricule; this->type=type; this->nom=nom; this->prenom=prenom; this->date=date;}
 int employe::getmatricule(){return  matricule;}
 int employe::gettype(){return  type;}
 QString employe::getnom(){return nom;}
 QString employe::getprenom(){return prenom;}
 QString employe::getdate(){return date;}
 void employe::setmatricume(int matricule){this->matricule=matricule;}
 void employe::settype(int type){this->type=type;}
 void employe::setnom(QString nom){this->nom=nom;}
 void employe::setprenom(QString prenom){this->prenom=prenom;}
 void employe::setdate(QString date){this->date=date;}
bool employe::ajouter();
{bool test=false;
QSqlQuery query;
      query.prepare("INSERT INTO person (id, forename, surname) "
                    "VALUES (:id, :forename, :surname)");
      query.bindValue(":id", 1001);
      query.bindValue(":forename", "Bart");
      query.bindValue(":surname", "Simpson");
      query.exec();
return test;


}

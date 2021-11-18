
#include "QSqlQuery"
#include<QDebug>
#include <QObject>
#include "employe.h"
#include<QTableView>


employe::employe()
{   matricule="";
    type="";
    nom= "";
    prenom="";
    age="";
    matricule_d="";
}
employe::employe(QString matricule ,QString type ,QString nom, QString prenom, QString age, QString matricule_d){
    this->matricule=matricule; this->type=type; this->nom=nom; this->prenom=prenom; this->age=age;this->matricule_d=matricule_d;
}
QString employe::getmatricule(){return matricule;}
QString employe::gettype(){return matricule;}
QString employe::getnom(){return nom;}
QString employe ::getprenom(){return  prenom;}
QString employe :: getage(){return age;}
QString employe::getmatricule_d(){return matricule_d;}

void employe::setmatricule(QString matricule){this->matricule=matricule;}
void employe::settype(QString type){this->type=type;}
void employe::setnom(QString nom){this->nom=nom;}
void employe ::setprenom(QString prenom){this->prenom=prenom;}
void employe ::setage(QString age){this->age=age;}
void employe::setmatricule_d(QString matricule_d){this->matricule_d=matricule_d;}

bool employe::ajouter(){


    QSqlQuery query;

          query.prepare("INSERT INTO EMPLOYE (matricule, type, nom, prenom , age,matricule_d) "
                        "VALUES (:MATRICULE, :TYPE, :NOM, :PRENOM, :AGE, :MATRICULE_D)");
          query.bindValue(0,matricule);
          query.bindValue(1,type);
          query.bindValue(2,nom);
          query.bindValue(3,prenom);
          query.bindValue(4,age);
          query.bindValue(5,matricule_d);

          return  query.exec();



}
QSqlQueryModel* employe::afficher(){

    QSqlQueryModel *model = new QSqlQueryModel();
          model->setQuery("SELECT* FROM EMPLOYE");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("matricule"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("type"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("nom"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("prenom"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("matricule_d"));

    return model;
}
bool employe::supprimer(QString matricule){
      QSqlQuery query;


    query.prepare("Delete from EMPLOYE where matricule=:matricule");
    query.bindValue(":matricule", matricule);

    return  query.exec();


}
bool employe::modifier(QString matricule, QString type, QString nom, QString prenom, QString age ,QString matricule_d){
    QSqlQuery query;

       query.prepare(" UPDATE EMPLOYE set matricule=:matricule ,type=:type,nom=:nom ,prenom=:prenom, age=:age, matricule_d=:matricule_d  where matricule=:matricule");
       query.bindValue(":matricule",matricule);
       query.bindValue(":type",type);
       query.bindValue(":nom",nom);
       query.bindValue(":prenom",prenom);
       query.bindValue(":age",age);
       query.bindValue(":matricule_d",matricule_d);

       return query.exec();
}
QSqlQueryModel* employe::triNom()
 {
     QSqlQueryModel * model= new QSqlQueryModel();
            model->setQuery("SELECT * FROM employe ORDER BY NOM");
            return model;
 }
 QSqlQueryModel* employe::triAge()
 {
     QSqlQueryModel * model= new QSqlQueryModel();
            model->setQuery("SELECT * FROM employe ORDER BY AGE");
            return model;
 }
 void employe :: rechercher(QTableView * table ,QString Age ,QString Matricule)
      {
          QSqlQueryModel *model= new QSqlQueryModel();

          QSqlQuery *query=new QSqlQuery;


          query->prepare("select * FROM employe where Age like '%"+Age+"%' or MATRICULE like '%"+Matricule+"%' ;");


          query->exec();
          model->setQuery(*query);
          table->setModel(model);
          table->show();

      }

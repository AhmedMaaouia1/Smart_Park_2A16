#include "produitzoo.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QDebug>
#include <QObject>
#include <QString>
#include <iostream>

using namespace std;

produitzoo::produitzoo()
{
id=" "; nom=" "; cible=0; category=" " ; type=" ";
}

produitzoo::produitzoo(QString id,QString nom,QString type,QString category,int prix)
{
    this->id=id ; this->category=category;this->type=type; this-> nom=nom ;this-> prix=prix;
}



QString produitzoo::getid(){return id;}
int produitzoo::getcible(){return cible;}
QString produitzoo::getnom(){return nom;}
QString produitzoo::getcategory(){return category;}
QString produitzoo::gettype(){return type;}
int produitzoo::getprix(){return prix;}
void produitzoo::setid(int id){this->id=id;}
void produitzoo::setnom(QString nom){this->nom=nom;}
void produitzoo::setcible(int cible){this->cible=cible;}
void produitzoo::setcategory(QString category){this->category=category;}
void produitzoo::settype(QString type){this->type=type;}
void produitzoo::setprix(int prix){this->prix=prix;}
bool produitzoo::ajouter(){


    QSqlQuery query;
        QString prix_string= QString::number(prix);
              query.prepare("INSERT INTO PRODUIT (id, nom, type,category,prix) "
                            "VALUES (:id, :nom, :type ,:category, :prix)");
                        query.bindValue(0, id);
                        query.bindValue(1, nom);
                        query.bindValue(2, type);
                        query.bindValue(3, category);
                        query.bindValue(4, prix_string);
              return  query.exec();
}
QSqlQueryModel* produitzoo::afficher(){

    QSqlQueryModel *model = new QSqlQueryModel();
          model->setQuery("SELECT* FROM PRODUIT");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("reference produit"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("category"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("prix"));

    return model;
}
bool produitzoo::supprimer(QString id){

    QSqlQuery query;

        query.prepare("Delete from PRODUIT where id=:id");
        query.bindValue(":id", id);

        return  query.exec();


}

bool produitzoo::modifier(QString id,QString nom,QString category,QString type,int prix)
{
    QSqlQuery query;
         QString prix_string= QString::number(prix);

           query.prepare(" UPDATE PRODUIT set id=:id ,nom=:nom , category=:category ,type=:type , prix=:prix  where id=:id");
           query.bindValue(":id",id);
           query.bindValue(":nom",nom);
           query.bindValue(":category",category);
           query.bindValue(":type",type);
           query.bindValue(":prix",prix_string);
           return query.exec();

}


QSqlQueryModel * produitzoo::trinom()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM PRODUIT ORDER BY NOM");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("category"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("prix"));

    return model;
}
QSqlQueryModel * produitzoo::tritype()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM  PRODUIT ORDER BY TYPE");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("noml"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("category"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("prix"));

    return model;
}
QSqlQueryModel * produitzoo::tricategory()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM PRODUIT ORDER BY CATEGORY");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("category"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("prix"));

    return model;
}
void produitzoo :: recherche(QTableView * table ,QString nom, QString category,QString type )
{
    QSqlQueryModel *model= new QSqlQueryModel();

    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from PRODUIT where NOM like '%"+nom+"%' or CATEGORY like '%"+category+"%' or TYPE like '%"+type+"%' ;");


    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();
}

int produitzoo::calculerprix(){

    int count=0 ;
   QSqlQuery requete("select * from PRODUIT where PRIX > 0 ") ;
          while(requete.next())
                            {
                                    count+=requete.value(4).toInt() ;
                                     cout<<"revenue="<<count<<endl;
                            }

                        return count ;}
int produitzoo::Stat_partie2()
{

    int count=0 ;
    QSqlQuery requete("select * from CLIENT where age BETWEEN '0' AND '20'") ;
    while(requete.next())
    {
            count++ ;
    }

return count ;

}

int produitzoo::Stat_partie3()
{
    int count=0 ;
    QSqlQuery requete("select * from CLIENT where age BETWEEN '20' AND '90'") ;
    while(requete.next())
    {
            count++ ;
    }

return count ;

}

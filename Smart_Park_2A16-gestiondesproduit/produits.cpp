#include "produits.h"
#include "QSqlQuery"
#include<QDebug>
#include <QObject>
#include<QString>
//#include"mainwindow.h"
Produits::Produits()
{
id=" "; nom=" "; cible=0; category=" " ; type=" ";
}

Produits::Produits(QString id,QString nom,QString type,QString category,int prix)
{
    this->id=id ; this->category=category;this->type=type; this-> nom=nom ;this-> prix=prix;
}



QString Produits::getid(){return id;}
int Produits::getcible(){return cible;}
QString Produits::getnom(){return nom;}
QString Produits::getcategory(){return category;}
QString Produits::gettype(){return type;}
int Produits::getprix(){return prix;}
void Produits::setid(int id){this->id=id;}
void Produits::setnom(QString nom){this->nom=nom;}
void Produits::setcible(int cible){this->cible=cible;}
void Produits::setcategory(QString category){this->category=category;}
void Produits::settype(QString type){this->type=type;}
void Produits::setprix(int prix){this->prix=prix;}
bool Produits::ajouter(){


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
QSqlQueryModel* Produits::afficher(){

    QSqlQueryModel *model = new QSqlQueryModel();
          model->setQuery("SELECT* FROM PRODUIT");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("reference produit"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("category"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("prix"));

    return model;
}
bool Produits ::supprimer(QString id){

    QSqlQuery query;

        query.prepare("Delete from PRODUIT where id=:id");
        query.bindValue(":id", id);

        return  query.exec();


}

bool Produits ::modifier(QString id,QString nom,QString category,QString type,int prix)
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


QSqlQueryModel * Produits::trinom()
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
QSqlQueryModel * Produits::tritype()
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
QSqlQueryModel * Produits::tricategory()
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
void Produits :: recherche(QTableView * table ,QString nom, QString category,QString type )
{
    QSqlQueryModel *model= new QSqlQueryModel();

    QSqlQuery *query=new QSqlQuery;
    query->prepare("select * from PRODUIT where NOM like '%"+nom+"%' or CATEGORY like '%"+category+"%' or TYPE like '%"+type+"%' ;");


    query->exec();
    model->setQuery(*query);
    table->setModel(model);
    table->show();
}

int Produits::calculerprix(){

    int count=0 ;
   QSqlQuery requete("select * from PRODUIT where PRIX ") ;
          while(requete.next())
                            {
                                    count+=requete.value(4).toInt() ;
                            }

                        return count ;}


#include "produits.h"
#include "QSqlQuery"
#include<QDebug>
#include <QObject>
#include<QString>

Produits::Produits()
{
id=" "; nom=" "; cible=0; category=" " ; type=" ";
}

Produits::Produits(QString id,QString nom,QString type,QString category,int prix)
{
    this->id=id ; this->cible=cible ; this->category=category;this->type=type; this-> nom=nom ;this-> prix=prix;
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
              query.prepare("INSERT INTO Product (id, nom, type,category,prix) "
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
          model->setQuery("SELECT* FROM Product");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifiant"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("category"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("prix"));

    return model;
}
bool Produits ::supprimer(QString id){

    QSqlQuery query;

        query.prepare("Delete from Product where id=:id");
        query.bindValue(":id", id);

        return  query.exec();


}



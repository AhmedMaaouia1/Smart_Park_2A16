#include "produit.h"
#include <QString>
Produit::Produit()
{
id=" "; nom=" "; cible=0; category=" " ; type=" ";
}
Produit::Produit(QString id,QString nom,int cible,QString category,QString type)
{this->id=id ; this->cible=cible ; this->category=category;this->type=type; }
QString Produit::getid(){return id;}
int Produit::getcible(){return cible;}
QString Produit::getnom(){return nom;}
QString Produit::getcategory(){return category;}
QString Produit::gettype(){return type;}
int Produit::getprix(){return prix;}
void Produit::setid(int id){this->id=id;}
void Produit::setnom(QString nom){this->nom=nom;}
void Produit::setcible(int cible){this->cible=cible;}
void Produit::setcategory(QString category){this->category=category;}
void Produit::settype(QString type){this->type=type;}
void Produit::setprix(int prix){this->prix=prix;}


}

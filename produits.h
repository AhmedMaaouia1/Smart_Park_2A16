#ifndef PRODUITS_H
#define PRODUITS_H

#include<QString>
#include <QSqlQueryModel>

class Produits
{
public:
    Produits();
    Produits(QString,QString,QString,QString,int);
    QString getid();
    QString getnom();
    int getcible();
    QString getcategory();
    QString gettype();
    int getprix();
    void setid(int id);
    void setnom(QString nom);
    void setcible(int cible);
    void setcategory(QString category);
    void settype(QString type);
    void setprix(int prix);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(QString);
private:
    QString id;
    QString nom;
    int cible;
    QString category;
    QString type;
    int prix;
};
#endif // PRODUITS_H

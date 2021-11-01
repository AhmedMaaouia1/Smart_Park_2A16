#ifndef PRODUIT_H
#define PRODUIT_H
#include<QString>

class Produit
{
public:
    Produit();
    Produit(QString,QString,int,QString,QString,int);
    QString getid();
    QString getnom();
    int getcible();
    QString getcategory();
    QString gettype();
    int getprix();
private:
    QString id;
    QString nom;
    int cible;
    QString category;
    QString type;
    int prix;
};

#endif // PRODUIT_H

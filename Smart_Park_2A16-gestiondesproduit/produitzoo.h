#ifndef PRODUITZOO_H
#define PRODUITZOO_H
//#include"mainwindow.h"
#include<QString>
#include <QSqlQueryModel>
#include <QTableView>
#include <QObject>
#include <QWidget>

class produitzoo
{
public:
    produitzoo();
    produitzoo(QString,QString,QString,QString,int);
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
    bool modifier(QString,QString,QString,QString,int);
    QSqlQueryModel* trinom();
    QSqlQueryModel* tritype();
    QSqlQueryModel* tricategory();
    void recherche(QTableView * tabl, QString,QString,QString);
    int calculerprix();
    int Stat_partie2();
    int Stat_partie3();


private:
    QString id;
    QString nom;
    int cible;
    QString category;
    QString type;
    int prix;

};

#endif // PRODUITZOO_H

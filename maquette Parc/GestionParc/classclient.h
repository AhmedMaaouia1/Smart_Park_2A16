#ifndef CLASSCLIENT_H
#define CLASSCLIENT_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QString>
#include <QDebug>
#include "QSqlQuery"
#include "QSqlQueryModel"
#include <QTableView>

class classclient
{
private:
    QString nom;
    QString prenom;
    QString adresse;
    int num_telephone;
    int age;
    int ID_c;

public:
    classclient();
    classclient(int,QString,QString,QString,int,int);
    int getID_c();
    QString getadresse();
    QString getnom();
    QString getprenom();
    int getage();
    int getnum_telephone();

    void setID_c(int);
    void setadresse(QString);
    void setnom(QString);
    void setprenom(QString);
    void setage(int);
    void setnum_telephone(int);

    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int ID_c) ;
    bool modifier(int ID_c, QString adresse, QString nom, QString prenom, int age ,int num_telephone);
    QSqlQueryModel *trierprenom() ;
    QSqlQueryModel *triernom() ;
    QSqlQueryModel *trierage() ;
    void rechercher(QTableView *tabClient, int,int);
    int Stat_partie2();
    int Stat_partie3();
};

#endif // CLASSCLIENT_H

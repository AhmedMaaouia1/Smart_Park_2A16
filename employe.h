#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <QString>
#include <QDebug>
#include <QObject>
#include "QSqlQuery"
#include "QSqlQueryModel"
#include <QTableView>


class employe
{
public:
    employe();
    employe(QString,QString,QString,QString,QString,QString);
    QString getmatricule();
    QString gettype();
    QString getnom();
    QString getprenom();
    QString getage();
    QString getmatricule_d();

    void setmatricule(QString);
    void settype(QString);
    void setnom(QString);
    void setprenom(QString);
    void setage(QString);
    void setmatricule_d(QString);

    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(QString);
    bool modifier(QString,QString,QString,QString,QString,QString);
    QSqlQueryModel * triNom();
     QSqlQueryModel * triAge();
     QSqlQueryModel * triprenom();

 void rechercher(QTableView * tabl,QString,QString);
 int Stat_partie2() ;
 int Stat_partie3() ;

private:
QString nom,prenom,age,matricule,type,matricule_d;

};



#endif // EMPLOYE_H

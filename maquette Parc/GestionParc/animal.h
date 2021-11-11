#ifndef ANIMAL_H
#define ANIMAL_H
#include <QDialog>
#include <QString>
#include <QSqlQueryModel>
#include <iostream>
#include <QApplication>
#include <QMainWindow>
#include <QPainter>
#include <QSqlQuery>
#include <QWidget>

class animal
{
public:
        animal();
        animal(int,int,QString,QString,QString);
        int getref();
        int getan();
        QString gettype();
        QString get_etat_sanitaire();
        QString get_etat_cage();
        void setref(int);
        void setan(int);
        void settype(QString);
        void set_etat_sanitaire(QString);
        void set_etat_cage(QString);
        bool ajouter();
        QSqlQueryModel* afficher();
        bool supprimer(int ref);
        bool modifier(int,int,QString,QString,QString);
        int Stat_partie2() ;
        int Stat_partie3() ;
        int Stat_partie4() ;
        int Stat_partie5();
        QSqlQueryModel* trieranimaux();
        QSqlQueryModel* trieranimauxType();
        QSqlQueryModel* rechercheRef(int ref);
protected:
        void paintEvent(QPaintEvent *e) ;
private:
        int reference,naissance;
        QString type,etat_sanitaire,etat_cage;
};

#endif // ANIMAL_H

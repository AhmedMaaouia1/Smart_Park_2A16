#ifndef ANIMAL_H
#define ANIMAL_H

#include <QString>
#include <QSqlQueryModel>
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
private:
        int reference,naissance;
        QString type,etat_sanitaire,etat_cage;
};

#endif // ANIMAL_H

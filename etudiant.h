#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <QString>
#include <QSqlQueryModel>

class etudiant
{
public:
    etudiant();
    etudiant(int,QString,QString);
    int getid();
    QString getnom();
    QString getprenom();
    void setid(int);
    void setnom(QString);
    void setprenom(QString);
    bool ajouter();
    QSqlQueryModel* affichet();
    bool supprimer(int);

private :
        int id;
    QString nom, prenom;
};

#endif // ETUDIANT_H

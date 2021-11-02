#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <QString>
class employe
{
public:
    employe();
    employe(int,int,QString,QString,QString);
    int getmatricule();
    int gettype();
    QString getnom();
    QString getprenom();
    QString getdate();
    void setmatricume(int);
    void settype(int);
    void setnom(QString);
    void setprenom(QString);
    void setdate(QString);
    bool ajouter();
private:
int matricule,type;
QString nom,prenom,date;

};



#endif // EMPLOYE_H

#include "classclient.h"
#include "QSqlQuery"
#include<QDebug>
#include <QObject>
#include "client.h"
#include <QTableView>

classclient::classclient()
{
    ID_c=0;
    adresse="";
    nom= "";
    prenom="";
    age=0;
    num_telephone=0;
}


classclient::classclient(int ID_c ,QString adresse ,QString nom, QString prenom, int age ,int num_telephone)
{
    this->ID_c=ID_c;
    this->adresse=adresse;
    this->nom=nom;
    this->prenom=prenom;
    this->age=age;
    this->num_telephone=num_telephone;
}
int classclient::getID_c(){return ID_c;}
QString classclient::getadresse(){return adresse;}
QString classclient::getnom(){return nom;}
QString classclient ::getprenom(){return  prenom;}
int classclient::getage(){return age;}
int classclient::getnum_telephone(){return num_telephone;}

void classclient::setID_c(int ID_c){this->ID_c=ID_c;}
void classclient::setadresse(QString adresse){this->adresse=adresse;}
void classclient::setnom(QString nom){this->nom=nom;}
void classclient::setprenom(QString prenom){this->prenom=prenom;}
void classclient::setage(int age){this->age=age;}
void classclient::setnum_telephone(int num_telephone){this->num_telephone=num_telephone;}

bool classclient::ajouter()
{




    QSqlQuery query;
          query.prepare("INSERT INTO CLIENT (ID_c, adresse, nom, prenom , age,num_telephone) "
                        "VALUES (:ID_c, :ADRESSE, :NOM, :PRENOM, :AGE, :NUM_TELEPHONE)");
          query.bindValue(0,ID_c);
          query.bindValue(1,adresse);
          query.bindValue(2,nom);
          query.bindValue(3,prenom);
          query.bindValue(4,age);
          query.bindValue(5,num_telephone);

          return  query.exec();



}
QSqlQueryModel* classclient::afficher()
{

    QSqlQueryModel *model = new QSqlQueryModel();
          model->setQuery("SELECT* FROM CLIENT");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_c"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("adresse"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("nom"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("prenom"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("num_telephone"));

    return model;
}
bool classclient::supprimer(int ID_c)
{
      QSqlQuery query;
      //QString ID_c_string= QString::number(ID_c);



    query.prepare("Delete from CLIENT where ID_c=:ID_c");
    query.bindValue(":ID_c", ID_c);

    return  query.exec();



}
bool classclient::modifier(int ID_c, QString adresse, QString nom, QString prenom, int age ,int num_telephone)
{
    QSqlQuery query;

       query.prepare(" UPDATE CLIENT set ID_c=:ID_c ,adresse=:adresse,nom=:nom ,prenom=:prenom, age=:age, num_telephone=:num_telephone  where ID_c=:ID_c");
       query.bindValue(":ID_c",ID_c);
       query.bindValue(":adresse",adresse);
       query.bindValue(":nom",nom);
       query.bindValue(":prenom",prenom);
       query.bindValue(":age",age);
       query.bindValue(":num_telephone",num_telephone);

       return query.exec();

}
QSqlQueryModel * classclient::trierage()
{
    QSqlQueryModel * model=new QSqlQueryModel();
     model->setQuery("SELECT * FROM CLIENT ORDER BY age");
    return model;
}
QSqlQueryModel * classclient::triernom()
{
    QSqlQueryModel * model=new QSqlQueryModel();
     model->setQuery("SELECT * FROM CLIENT ORDER BY nom ");
    return model;
}
QSqlQueryModel * classclient::trierprenom()
{
    QSqlQueryModel * model=new QSqlQueryModel();
     model->setQuery("SELECT * FROM CLIENT ORDER BY prenom");
    return model;
}
void classclient::rechercher(QTableView * tabClient ,int ID_c , int num_telephone)
    {
        QSqlQueryModel *model= new QSqlQueryModel();

        QSqlQuery *query=new QSqlQuery;
        QString  id_string  =QString::number(ID_c);
        QString num_string  =QString::number(num_telephone);

        query->prepare("select * from CLIENT where ID_c like '%"+id_string+"%' or num_telephone like '%"+num_string+"%' ;");


        query->exec();
        model->setQuery(*query);
        tabClient->setModel(model);
        tabClient->show();

    }
int classclient::Stat_partie2()
{

    int count=0 ;
    QSqlQuery requete("select * from CLIENT where age BETWEEN '0' AND '20'") ;
    while(requete.next())
    {
            count++ ;
    }

return count ;

}

int classclient::Stat_partie3()
{
    int count=0 ;
    QSqlQuery requete("select * from CLIENT where age BETWEEN '20' AND '90'") ;
    while(requete.next())
    {
            count++ ;
    }

return count ;

}

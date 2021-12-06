#include "connetion.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("Projet2A");
db.setUserName("ahmed");//inserer nom de l'utilisateur
db.setPassword("ahmedamri5");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}

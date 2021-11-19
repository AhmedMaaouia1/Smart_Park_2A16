#include "connection.h"

connection::connection()
{

}

bool connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-bd");
db.setUserName("Houssem");//inserer nom de l'utilisateur
db.setPassword("sakhri");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;
    return  test;
}

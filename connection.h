#ifndef CONNECTION_H
#define CONNECTION_H


#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMainWindow>
#include <QObject>
#include <QWidget>

class connection
{
public:
    connection();
    bool createconnect();
};






#endif // CONNECTION_H

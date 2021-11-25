#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employe.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
 //myDB = QSqlDatabase::addDatabase("QSQLITE");
 //myDB.setDatabaseName("C:/oraclexe/app/oracle/product/11.2.0/server/database/hc_xe.dat");
 //if(!myDB.open())
    // ui->label->setText("failed to open the database");
 //else
     //ui->label->setText("connected...");


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_login_clicked()
{
    {
        QString username = ui->lineEdit_username->text();
        QString password = ui->lineEdit_password->text();

        if(username ==  "khayri" && password == "khayri") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            Employee = new employee(this);
            Employee->show();
        }
        else if(username ==  "ahmed" && password == "ahmed") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            Employee = new employee(this);
            Employee->show();
        }
        else if(username ==  "amri" && password == "amri") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            Employee = new employee(this);
            Employee->show();
        }
        else if(username ==  "houssem" && password == "houssem") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            Employee = new employee(this);
            Employee->show();
        }
        else if(username ==  "sleh" && password == "sleh") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            Employee = new employee(this);
            Employee->show();
        }
        else if(username ==  "badis" && password == "badis") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            Employee = new employee(this);
            Employee->show();
        }
        else {
            QMessageBox::warning(this,"Login", "Username and password is not correct");
        }
    }
}

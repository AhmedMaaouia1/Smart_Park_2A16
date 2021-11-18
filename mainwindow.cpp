#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employe.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
 myDB = QSqlDatabase::addDatabase("QSQLITE");
 myDB.setDatabaseName("C:/oraclexe/app/oracle/product/11.2.0/server/database/hc_xe.dat");
 if(!myDB.open())
     ui->label->setText("failed to open the database");
 else
     ui->label->setText("connected...");


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

        if(username ==  "test" && password == "test") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            Employee = new employee(this);
            Employee->show();
        }
        else if(username ==  "test1" && password == "test1") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            Employee = new employee(this);
            Employee->show();
        }
        else if(username ==  "test2" && password == "test2") {
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

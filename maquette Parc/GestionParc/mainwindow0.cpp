#include "mainwindow0.h"
#include "ui_mainwindow0.h"
#include "employe.h"

mainwindow0::mainwindow0(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mainwindow0)
{
    ui->setupUi(this);

    //myDB = QSqlDatabase::addDatabase("QSQLITE");
    //myDB.setDatabaseName("C:/oraclexe/app/oracle/product/11.2.0/server/database/hc_xe.dat");
    //if(!myDB.open())
       // ui->label->setText("failed to open the database");
    //else
        //ui->label->setText("connected...");
}

mainwindow0::~mainwindow0()
{
    delete ui;
}

void mainwindow0::on_login_clicked()
{
    {
        QString username = ui->lineEdit_username->text();
        QString password = ui->lineEdit_password->text();

        if(username ==  "khayri" && password == "khayri") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            hide();
            mainwindow = new MainWindow(this);
            mainwindow->show();

        }
        else if(username ==  "ahmed" && password == "ahmed") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            hide();
            mainwindow = new MainWindow(this);
            mainwindow->show();
        }
        else if(username ==  "amri" && password == "amri") {
            QMessageBox::information(this, "Login", "Username and password is correct");

            hide();
            mainwindow = new MainWindow(this);
            mainwindow->show();
        }
        else if(username ==  "houssem" && password == "houssem") {
            QMessageBox::information(this, "Login", "Username and password is correct");

            hide();
            mainwindow = new MainWindow(this);
            mainwindow->show();
        }
        else if(username ==  "sleh" && password == "sleh") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            hide();
            mainwindow = new MainWindow(this);
            mainwindow->show();
        }
        else if(username ==  "badis" && password == "badis") {
            QMessageBox::information(this, "Login", "Username and password is correct");

            hide();
            mainwindow = new MainWindow(this);
            mainwindow->show();
        }
        else {
            QMessageBox::warning(this,"Login", "Username and password is not correct");
        }
    }
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include "classclient.h"
#include <QMediaPlayer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
            Client = new client(this);
            Client->show();
        }
        else if(username ==  "ahmed" && password == "ahmed") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            Client = new client(this);
            Client->show();
        }
        else if(username ==  "amri" && password == "amri") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            Client = new client(this);
            Client->show();
        }
        else if(username ==  "houssem" && password == "houssem") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            Client = new client(this);
            Client->show();
        }
        else if(username ==  "sleh" && password == "sleh") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            Client = new client(this);
            Client->show();
        }
        else if(username ==  "badis" && password == "badis") {
            QMessageBox::information(this, "Login", "Username and password is correct");
            //hide();
            Client = new client(this);
            Client->show();
        }
        else {
            QMessageBox::warning(this,"Login", "Username and password is not correct");
        }
    }
}

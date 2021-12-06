#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "classclient.h"
#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>
#include "client.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_login_clicked();

private:
    Ui::MainWindow *ui;
    client *Client;
    QSqlDatabase myDB;
};



#endif // MAINWINDOW_H

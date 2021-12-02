#ifndef MAINWINDOW0_H
#define MAINWINDOW0_H

#include <QDialog>
#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QMessageBox>
#include "animal.h"
#include "animaux.h"
#include "employee.h"
#include "mainwindow.h"


QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow0; }
QT_END_NAMESPACE

class mainwindow0 : public QDialog
{
    Q_OBJECT

public:
    explicit mainwindow0(QWidget *parent = nullptr);
    ~mainwindow0();

private slots:
    void on_login_clicked();

private:
    Ui::mainwindow0 *ui;
    MainWindow *mainwindow;
    //employee *Employee;
    //QSqlDatabase myDB;
};

#endif // MAINWINDOW0_H

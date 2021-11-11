#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QDialog>
#include <QMainWindow>
#include <QDebug>
#include "animal.h"
#include "animaux.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow();


private slots:

    void on_pb_gererAn_clicked();

    void on_pb_pageFB_clicked();

private:
    Ui::MainWindow *ui;
    //animaux *animaux;
};

#endif // MAINWINDOW_H

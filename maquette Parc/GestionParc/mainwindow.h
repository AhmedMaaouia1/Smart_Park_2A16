#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include "animal.h"

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

    void on_pb_ajouter_clicked();

    void on_id_sup_clicked();

private:
    Ui::MainWindow *ui;
    animal a;
};

#endif // MAINWINDOW_H

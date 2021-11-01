#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"produits.h"

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
    void on_pb_ajout_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    Produits P;
};
#endif // MAINWINDOW_H

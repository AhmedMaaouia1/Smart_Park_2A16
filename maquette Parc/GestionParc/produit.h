#ifndef PRODUIT_H
#define PRODUIT_H

#include <QDialog>
#include <QSystemTrayIcon>
#include <QMainWindow>
#include "produitzoo.h"
#include <iostream>

class MainWindow;

namespace Ui {
class produit;
}

class produit : public QDialog
{
    Q_OBJECT

public:
    explicit produit(QWidget *parent = nullptr);
    ~produit();

private slots:
    void on_pb_ajout_clicked();

    void on_pushButton_2_clicked();

    void on_pb_modifier_clicked();

    void on_comboBox_activated(const QString &arg1);

    void on_RB_trinom_clicked();

    void on_RB_category_clicked();

    void on_RB_type_clicked();

    void on_Recherche_textChanged(const QString &arg1);


    void on_pb_calcul_clicked();

    void on_pb_statics_clicked();

    void on_pb_retour_produit_clicked();
    void on_pb_quitter_produit_clicked();

private:
    Ui::produit *ui;
    produitzoo P;
    QSystemTrayIcon *mSystemTrayIcon;
};

#endif // PRODUIT_H

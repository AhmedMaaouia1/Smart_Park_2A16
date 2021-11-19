#ifndef ANIMAUX_H
#define ANIMAUX_H
#include <QDialog>
#include <QMainWindow>
#include <QDebug>
#include "animal.h"
#include <QFileDialog>
#include <QSortFilterProxyModel>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>

namespace Ui {
class animaux;
}

class animaux : public QDialog
{
    Q_OBJECT

public:
    explicit animaux(QWidget *parent = nullptr);
    ~animaux();
    QSortFilterProxyModel *proxy_anim;
    void show_anim();

private slots:
    void on_pb_ajouter_clicked();

    void on_id_sup_clicked();

    void on_pb_upload_clicked();

    void on_comboBox_modifier_ref_currentIndexChanged(const QString &arg1);

    void on_pb_modifier_clicked();

    void on_pb_stat_clicked();

    void on_pb_upload_2_clicked();

    void on_pb_trier_clicked();

    void on_pb_trier_type_clicked();

    //void on_pb_rechRef_clicked(); recherche statique

    void on_pb_image_clicked();

    void on_le_recherche_textChanged(const QString &arg1);


    void on_anim_col_currentIndexChanged(int index);

    void on_pb_trier_etat_sanitaire_clicked();

    void on_pb_statistics_clicked();

    void showTime();

private:
    Ui::animaux *ui;
    animal a;
    int col_anim=-1;
};

#endif // ANIMAUX_H

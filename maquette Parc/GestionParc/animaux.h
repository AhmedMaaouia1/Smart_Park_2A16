#ifndef ANIMAUX_H
#define ANIMAUX_H
#include <QDialog>
#include <QMainWindow>
#include <QDebug>
#include "animal.h"
#include <QFileDialog>

namespace Ui {
class animaux;
}

class animaux : public QDialog
{
    Q_OBJECT

public:
    explicit animaux(QWidget *parent = nullptr);
    ~animaux();

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

    void on_pb_rechRef_clicked();

    void on_pb_image_clicked();

private:
    Ui::animaux *ui;
    animal a;
};

#endif // ANIMAUX_H

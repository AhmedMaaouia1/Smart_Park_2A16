#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QDialog>
#include "employe.h"
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
namespace Ui {
class employee;
}
class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class QVBoxLayout;
class QMenu;
class QAction;
class employee : public QDialog
{
    Q_OBJECT

public:
    explicit employee(QWidget *parent = nullptr);
    ~employee();

private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_comboBox_activated(const QString &arg1);



    void on_le_tri_nom_clicked();

    void on_le_tri_age_clicked();


    void on_rech_textChanged(const QString &arg1);


    void on_pb_statistics_clicked();

private:
    Ui::employee *ui;
    employe e;
    QCamera *mCamera;
        QCameraViewfinder *mCameraViewfinder;
        QCameraImageCapture *mCameraImageCapture;
        QVBoxLayout *mLayout;
        QMenu *mOptionMenu;
        QAction *mEncenderAction;
        QAction *mApagarAction;
        QAction *mCapturarAaction;
};

#endif // EMPLOYEE_H

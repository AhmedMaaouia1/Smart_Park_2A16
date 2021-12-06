#ifndef ARDUINO_H
#define ARDUINO_H

#include "classarduino.h"
#include <QDialog>

namespace Ui {
class arduino;
}

class arduino : public QDialog
{
    Q_OBJECT

public:
    explicit arduino(QWidget *parent = nullptr);
    ~arduino();

private slots:
    void update_label();   // slot permettant la mise à jour du label état de la lampe 1,
    // ce slot est lancé à chaque réception d'un message de Arduino

    void on_pb_ajout_eau_clicked();

    void on_pb_arret_eau_clicked();

    void on_pb_retour_arduino0_clicked();

private:
    Ui::arduino *ui;
    QByteArray data; // variable contenant les données reçues

    classarduino A; // objet temporaire
};

#endif // ARDUINO_H

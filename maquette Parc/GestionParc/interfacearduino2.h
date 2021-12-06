#ifndef INTERFACEARDUINO2_H
#define INTERFACEARDUINO2_H

#include "opendoor.h"
#include <QMainWindow>
#include <QDialog>

namespace Ui {
class InterfaceArduino2;
}

class InterfaceArduino2 : public QDialog
{
    Q_OBJECT

public:
    explicit InterfaceArduino2(QWidget *parent = nullptr);
    ~InterfaceArduino2();
private slots:
    void update_label();   // slot permettant la mise à jour du label état de la lampe 1,
    // ce slot est lancé à chaque réception d'un message de Arduino
    void on_pushButton_clicked();   // bouton ON
    void on_pushButton_2_clicked(); // bouton OFF

private:
    Ui::InterfaceArduino2 *ui;
    QByteArray data; // variable contenant les données reçues
    OpenDoor A; // objet temporaire
};

#endif // INTERFACEARDUINO2_H



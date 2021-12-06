#include "interfacearduino2.h"
#include "ui_interfacearduino2.h"

InterfaceArduino2::InterfaceArduino2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InterfaceArduino2)
{
    ui->setupUi(this);
    int ret=A.connect_arduino(); // lancer la connexion à arduino
    switch(ret){
    case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
        break;
    case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
       break;
    case(-1):qDebug() << "arduino is not available";
        }
         QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); // permet de lancer
         //le slot update_label suite à la reception du signal readyRead (reception des données).
    }


InterfaceArduino2::~InterfaceArduino2()
{
    delete ui;
}

void InterfaceArduino2::update_label()
{
    data=A.read_from_arduino();

    if(data=="0")

        ui->label_3->setText("porte fermer");
    else if (data=="1")
            ui->label_3->setText("porte ouvert");
    }

void InterfaceArduino2::on_pushButton_clicked()
    {
         A.write_to_arduino("1");
    }
void InterfaceArduino2::on_pushButton_2_clicked()
    {
         A.write_to_arduino("0");
    }



/********************************************************************************
** Form generated from reading UI file 'arduino.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARDUINO_H
#define UI_ARDUINO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_arduino
{
public:
    QLabel *le_cadre;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pb_ajout_eau;
    QLabel *label_4;
    QPushButton *pb_arret_eau;
    QLabel *label_niveau_eau;
    QLineEdit *lineEdit;
    QLabel *lab_niveau;

    void setupUi(QDialog *arduino)
    {
        if (arduino->objectName().isEmpty())
            arduino->setObjectName(QStringLiteral("arduino"));
        arduino->resize(852, 569);
        le_cadre = new QLabel(arduino);
        le_cadre->setObjectName(QStringLiteral("le_cadre"));
        le_cadre->setGeometry(QRect(0, 0, 851, 571));
        le_cadre->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        le_cadre->setScaledContents(true);
        label_3 = new QLabel(arduino);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(240, 410, 291, 41));
        label = new QLabel(arduino);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 50, 321, 61));
        label_2 = new QLabel(arduino);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(105, 205, 161, 41));
        pb_ajout_eau = new QPushButton(arduino);
        pb_ajout_eau->setObjectName(QStringLiteral("pb_ajout_eau"));
        pb_ajout_eau->setGeometry(QRect(340, 210, 121, 31));
        label_4 = new QLabel(arduino);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 300, 241, 41));
        pb_arret_eau = new QPushButton(arduino);
        pb_arret_eau->setObjectName(QStringLiteral("pb_arret_eau"));
        pb_arret_eau->setGeometry(QRect(340, 300, 121, 31));
        label_niveau_eau = new QLabel(arduino);
        label_niveau_eau->setObjectName(QStringLiteral("label_niveau_eau"));
        label_niveau_eau->setGeometry(QRect(280, 480, 271, 41));
        lineEdit = new QLineEdit(arduino);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(230, 390, 381, 81));
        lab_niveau = new QLabel(arduino);
        lab_niveau->setObjectName(QStringLiteral("lab_niveau"));
        lab_niveau->setGeometry(QRect(440, 410, 131, 41));
        le_cadre->raise();
        lineEdit->raise();
        label_3->raise();
        label->raise();
        label_2->raise();
        pb_ajout_eau->raise();
        label_4->raise();
        pb_arret_eau->raise();
        label_niveau_eau->raise();
        lab_niveau->raise();

        retranslateUi(arduino);

        QMetaObject::connectSlotsByName(arduino);
    } // setupUi

    void retranslateUi(QDialog *arduino)
    {
        arduino->setWindowTitle(QApplication::translate("arduino", "Niveau d'eau", Q_NULLPTR));
        le_cadre->setText(QString());
        label_3->setText(QString());
        label->setText(QApplication::translate("arduino", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; color:#ffff00;\">Controler Niveau d'eau</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("arduino", "<html><head/><body><p><span style=\" font-size:12pt; color:#ffffff;\">Ajouter de l'eau</span></p></body></html>", Q_NULLPTR));
        pb_ajout_eau->setText(QApplication::translate("arduino", "Ajout", Q_NULLPTR));
        label_4->setText(QApplication::translate("arduino", "<html><head/><body><p><span style=\" font-size:12pt; color:#ffffff;\">Arreter l'ajout de l'eau</span></p></body></html>", Q_NULLPTR));
        pb_arret_eau->setText(QApplication::translate("arduino", "Arreter", Q_NULLPTR));
        label_niveau_eau->setText(QString());
        lab_niveau->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class arduino: public Ui_arduino {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARDUINO_H

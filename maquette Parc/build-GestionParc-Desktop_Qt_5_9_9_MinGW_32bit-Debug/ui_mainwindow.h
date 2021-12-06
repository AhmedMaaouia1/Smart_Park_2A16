/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QOpenGLWidget *openGLWidget;
    QLabel *label_9;
    QPushButton *pb_gererAn;
    QPushButton *pb_pageFB;
    QPushButton *pb_gestion_emp;
    QPushButton *pb_gestion_produit;
    QPushButton *pb_gestion_clients;
    QPushButton *pb_niveau_eau;
    QPushButton *pb_retour;
    QPushButton *pb_quitter;
    QPushButton *pb_controle_porte;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        openGLWidget = new QOpenGLWidget(centralwidget);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        openGLWidget->setGeometry(QRect(-80, 720, 300, 200));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 20, 791, 531));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_9->setScaledContents(true);
        pb_gererAn = new QPushButton(centralwidget);
        pb_gererAn->setObjectName(QStringLiteral("pb_gererAn"));
        pb_gererAn->setGeometry(QRect(280, 180, 241, 31));
        pb_pageFB = new QPushButton(centralwidget);
        pb_pageFB->setObjectName(QStringLiteral("pb_pageFB"));
        pb_pageFB->setGeometry(QRect(280, 300, 241, 31));
        pb_gestion_emp = new QPushButton(centralwidget);
        pb_gestion_emp->setObjectName(QStringLiteral("pb_gestion_emp"));
        pb_gestion_emp->setGeometry(QRect(280, 140, 241, 31));
        pb_gestion_produit = new QPushButton(centralwidget);
        pb_gestion_produit->setObjectName(QStringLiteral("pb_gestion_produit"));
        pb_gestion_produit->setGeometry(QRect(280, 220, 241, 31));
        pb_gestion_clients = new QPushButton(centralwidget);
        pb_gestion_clients->setObjectName(QStringLiteral("pb_gestion_clients"));
        pb_gestion_clients->setGeometry(QRect(280, 260, 241, 31));
        pb_niveau_eau = new QPushButton(centralwidget);
        pb_niveau_eau->setObjectName(QStringLiteral("pb_niveau_eau"));
        pb_niveau_eau->setGeometry(QRect(280, 340, 241, 31));
        pb_retour = new QPushButton(centralwidget);
        pb_retour->setObjectName(QStringLiteral("pb_retour"));
        pb_retour->setGeometry(QRect(30, 490, 93, 28));
        pb_quitter = new QPushButton(centralwidget);
        pb_quitter->setObjectName(QStringLiteral("pb_quitter"));
        pb_quitter->setGeometry(QRect(660, 480, 93, 28));
        pb_controle_porte = new QPushButton(centralwidget);
        pb_controle_porte->setObjectName(QStringLiteral("pb_controle_porte"));
        pb_controle_porte->setGeometry(QRect(280, 380, 241, 28));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ZOO'RNI", Q_NULLPTR));
        label_9->setText(QString());
        pb_gererAn->setText(QApplication::translate("MainWindow", "Gestion des Animaux", Q_NULLPTR));
        pb_pageFB->setText(QApplication::translate("MainWindow", "Ouvrir Site Web", Q_NULLPTR));
        pb_gestion_emp->setText(QApplication::translate("MainWindow", "Gestion des Employ\303\251s", Q_NULLPTR));
        pb_gestion_produit->setText(QApplication::translate("MainWindow", "Gestion des produits", Q_NULLPTR));
        pb_gestion_clients->setText(QApplication::translate("MainWindow", "Gestion des clients", Q_NULLPTR));
        pb_niveau_eau->setText(QApplication::translate("MainWindow", "Controler niveau d'eau", Q_NULLPTR));
        pb_retour->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        pb_quitter->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        pb_controle_porte->setText(QApplication::translate("MainWindow", "Controler la porte", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

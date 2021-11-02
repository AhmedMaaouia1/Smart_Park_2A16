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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QOpenGLWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QOpenGLWidget *openGLWidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QPushButton *pbajouter;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *le_cadre;
    QTableView *tab_animaux;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *le_type;
    QLineEdit *le_ref;
    QPushButton *pb_ajouter;
    QLabel *label_3;
    QLineEdit *le_an;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_12;
    QComboBox *combo_cage;
    QComboBox *combo_sanitaire;
    QLineEdit *le_san;
    QLineEdit *le_cage;
    QWidget *tab_4;
    QLabel *label_8;
    QLabel *label_statistiqyes_2;
    QLineEdit *le_ref_supp;
    QLabel *label_10;
    QPushButton *id_sup;
    QPushButton *pushButton_7;
    QWidget *tab_2;
    QGraphicsView *graphicsView;
    QLabel *label_9;
    QLabel *label_statistiqyes;
    QGraphicsView *graphicsView_2;
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
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 781, 561));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pbajouter = new QPushButton(tab_3);
        pbajouter->setObjectName(QStringLiteral("pbajouter"));
        pbajouter->setGeometry(QRect(82, 90, 111, 31));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 90, 111, 31));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(340, 90, 121, 31));
        pushButton_5 = new QPushButton(tab_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(480, 90, 101, 31));
        le_cadre = new QLabel(tab_3);
        le_cadre->setObjectName(QStringLiteral("le_cadre"));
        le_cadre->setGeometry(QRect(-10, 0, 791, 531));
        le_cadre->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        le_cadre->setScaledContents(true);
        tab_animaux = new QTableView(tab_3);
        tab_animaux->setObjectName(QStringLiteral("tab_animaux"));
        tab_animaux->setGeometry(QRect(50, 180, 681, 291));
        tabWidget->addTab(tab_3, QString());
        le_cadre->raise();
        pbajouter->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        tab_animaux->raise();
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 260, 111, 21));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(450, 170, 91, 20));
        le_type = new QLineEdit(tab);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(220, 260, 113, 22));
        le_ref = new QLineEdit(tab);
        le_ref->setObjectName(QStringLiteral("le_ref"));
        le_ref->setGeometry(QRect(580, 170, 113, 22));
        pb_ajouter = new QPushButton(tab);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(330, 430, 93, 28));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 150, 181, 61));
        le_an = new QLineEdit(tab);
        le_an->setObjectName(QStringLiteral("le_an"));
        le_an->setGeometry(QRect(220, 170, 113, 22));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(440, 250, 131, 41));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 340, 111, 20));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(-10, 0, 791, 531));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_6->setScaledContents(true);
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(560, 390, 151, 21));
        combo_cage = new QComboBox(tab);
        combo_cage->setObjectName(QStringLiteral("combo_cage"));
        combo_cage->setGeometry(QRect(220, 370, 111, 21));
        combo_sanitaire = new QComboBox(tab);
        combo_sanitaire->setObjectName(QStringLiteral("combo_sanitaire"));
        combo_sanitaire->setGeometry(QRect(580, 310, 111, 22));
        le_san = new QLineEdit(tab);
        le_san->setObjectName(QStringLiteral("le_san"));
        le_san->setGeometry(QRect(580, 260, 113, 22));
        le_cage = new QLineEdit(tab);
        le_cage->setObjectName(QStringLiteral("le_cage"));
        le_cage->setGeometry(QRect(220, 340, 113, 22));
        tabWidget->addTab(tab, QString());
        label_6->raise();
        label->raise();
        label_2->raise();
        le_type->raise();
        le_ref->raise();
        pb_ajouter->raise();
        label_3->raise();
        le_an->raise();
        label_4->raise();
        label_5->raise();
        label_12->raise();
        combo_cage->raise();
        combo_sanitaire->raise();
        le_san->raise();
        le_cage->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(-10, 0, 791, 531));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_8->setScaledContents(true);
        label_statistiqyes_2 = new QLabel(tab_4);
        label_statistiqyes_2->setObjectName(QStringLiteral("label_statistiqyes_2"));
        label_statistiqyes_2->setGeometry(QRect(260, 80, 231, 51));
        le_ref_supp = new QLineEdit(tab_4);
        le_ref_supp->setObjectName(QStringLiteral("le_ref_supp"));
        le_ref_supp->setGeometry(QRect(240, 260, 113, 22));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(120, 260, 101, 21));
        id_sup = new QPushButton(tab_4);
        id_sup->setObjectName(QStringLiteral("id_sup"));
        id_sup->setGeometry(QRect(470, 290, 93, 28));
        pushButton_7 = new QPushButton(tab_4);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(470, 230, 93, 28));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        graphicsView = new QGraphicsView(tab_2);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(30, 150, 301, 271));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(-10, 0, 791, 531));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_9->setScaledContents(true);
        label_statistiqyes = new QLabel(tab_2);
        label_statistiqyes->setObjectName(QStringLiteral("label_statistiqyes"));
        label_statistiqyes->setGeometry(QRect(270, 70, 231, 51));
        graphicsView_2 = new QGraphicsView(tab_2);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(430, 150, 311, 271));
        tabWidget->addTab(tab_2, QString());
        label_9->raise();
        graphicsView->raise();
        label_statistiqyes->raise();
        graphicsView_2->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pbajouter->setText(QApplication::translate("MainWindow", "Ajouter ", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Trier", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Chercher", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        le_cadre->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Consulter les animaux", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Type</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">R\303\251f\303\251rence</span></p></body></html>", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Ann\303\251e de naissance</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Etat Sanitaire</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Etat de cage</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\">Joindre une photo</span></p></body></html>", Q_NULLPTR));
        combo_cage->clear();
        combo_cage->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Propre", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Sale", Q_NULLPTR)
        );
#ifndef QT_NO_TOOLTIP
        combo_cage->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        combo_sanitaire->clear();
        combo_sanitaire->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Sein", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Malade", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Ajouter un animal", Q_NULLPTR));
        label_8->setText(QString());
        label_statistiqyes_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; text-decoration: underline; color:#ffde21;\">Supprimer</span></p></body></html>", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">R\303\251f\303\251rence</span></p></body></html>", Q_NULLPTR));
        id_sup->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MainWindow", "Cancel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Supprimer animal", Q_NULLPTR));
        label_9->setText(QString());
        label_statistiqyes->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; text-decoration: underline; color:#ffde21;\">Statistiques</span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Statistiques", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

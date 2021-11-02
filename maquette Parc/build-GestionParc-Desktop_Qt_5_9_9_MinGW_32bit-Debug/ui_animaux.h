/********************************************************************************
** Form generated from reading UI file 'animaux.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANIMAUX_H
#define UI_ANIMAUX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QUndoView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_animaux
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QUndoView *undoView;
    QLabel *label_7;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_12;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QWidget *tab_4;
    QLabel *label_8;
    QLabel *label_statistiqyes_2;
    QLineEdit *lineEdit_3;
    QLabel *label_10;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QWidget *tab_2;
    QGraphicsView *graphicsView;
    QLabel *label_9;
    QLabel *label_statistiqyes;
    QGraphicsView *graphicsView_2;

    void setupUi(QDialog *animaux)
    {
        if (animaux->objectName().isEmpty())
            animaux->setObjectName(QStringLiteral("animaux"));
        animaux->resize(638, 466);
        tabWidget = new QTabWidget(animaux);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 50, 621, 441));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 40, 93, 28));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 40, 93, 28));
        pushButton_4 = new QPushButton(tab_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 40, 93, 28));
        pushButton_5 = new QPushButton(tab_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(360, 40, 81, 28));
        undoView = new QUndoView(tab_3);
        undoView->setObjectName(QStringLiteral("undoView"));
        undoView->setGeometry(QRect(30, 80, 461, 261));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(-10, 0, 641, 401));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_7->setScaledContents(true);
        tabWidget->addTab(tab_3, QString());
        label_7->raise();
        pushButton_2->raise();
        pushButton_3->raise();
        pushButton_4->raise();
        pushButton_5->raise();
        undoView->raise();
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 100, 111, 21));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 100, 61, 20));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(120, 100, 113, 22));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(400, 100, 113, 22));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 310, 93, 28));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 160, 121, 41));
        lineEdit_4 = new QLineEdit(tab);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(120, 170, 113, 22));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(290, 170, 81, 21));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 230, 111, 20));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(-10, 0, 641, 401));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_6->setScaledContents(true);
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(290, 230, 111, 21));
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(120, 230, 111, 22));
        comboBox_2 = new QComboBox(tab);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(400, 170, 111, 22));
        tabWidget->addTab(tab, QString());
        label_6->raise();
        label->raise();
        label_2->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        pushButton->raise();
        label_3->raise();
        lineEdit_4->raise();
        label_4->raise();
        label_5->raise();
        label_12->raise();
        comboBox->raise();
        comboBox_2->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(-10, 0, 641, 401));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_8->setScaledContents(true);
        label_statistiqyes_2 = new QLabel(tab_4);
        label_statistiqyes_2->setObjectName(QStringLiteral("label_statistiqyes_2"));
        label_statistiqyes_2->setGeometry(QRect(190, 60, 231, 51));
        lineEdit_3 = new QLineEdit(tab_4);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(200, 210, 113, 22));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(80, 210, 101, 21));
        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(400, 230, 93, 28));
        pushButton_7 = new QPushButton(tab_4);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(400, 180, 93, 28));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        graphicsView = new QGraphicsView(tab_2);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(20, 120, 251, 201));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(-10, 0, 641, 401));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_9->setScaledContents(true);
        label_statistiqyes = new QLabel(tab_2);
        label_statistiqyes->setObjectName(QStringLiteral("label_statistiqyes"));
        label_statistiqyes->setGeometry(QRect(185, 60, 231, 51));
        graphicsView_2 = new QGraphicsView(tab_2);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(330, 120, 251, 201));
        tabWidget->addTab(tab_2, QString());
        label_9->raise();
        graphicsView->raise();
        label_statistiqyes->raise();
        graphicsView_2->raise();

        retranslateUi(animaux);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(animaux);
    } // setupUi

    void retranslateUi(QDialog *animaux)
    {
        animaux->setWindowTitle(QApplication::translate("animaux", "Dialog", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("animaux", "Ajouter ", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("animaux", "Trier", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("animaux", "Chercher", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("animaux", "Supprimer", Q_NULLPTR));
        label_7->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("animaux", "Consulter les animaux", Q_NULLPTR));
        label->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Type</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">R\303\251f\303\251rence</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("animaux", "Ajouter", Q_NULLPTR));
        label_3->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Ann\303\251e de naissance</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("animaux", "<html><head/><body><p><span style=\" color:#ffffff;\">Etat Sanitaire</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" color:#ffffff;\">Etat de cage</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QString());
        label_12->setText(QApplication::translate("animaux", "<html><head/><body><p><span style=\" color:#ffffff;\">Joindre une photo</span></p></body></html>", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("animaux", "Propre", Q_NULLPTR)
         << QApplication::translate("animaux", "Sale", Q_NULLPTR)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("animaux", "Sein", Q_NULLPTR)
         << QApplication::translate("animaux", "Malade", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("animaux", "Ajouter un animal", Q_NULLPTR));
        label_8->setText(QString());
        label_statistiqyes_2->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; text-decoration: underline; color:#ffde21;\">Supprimer</span></p></body></html>", Q_NULLPTR));
        label_10->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:11pt; font-weight:600; color:#ffffff;\">R\303\251f\303\251rence</span></p></body></html>", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("animaux", "Supprimer", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("animaux", "Cancel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("animaux", "Supprimer animal", Q_NULLPTR));
        label_9->setText(QString());
        label_statistiqyes->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; text-decoration: underline; color:#ffde21;\">Statistiques</span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("animaux", "Statistiques", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class animaux: public Ui_animaux {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMAUX_H

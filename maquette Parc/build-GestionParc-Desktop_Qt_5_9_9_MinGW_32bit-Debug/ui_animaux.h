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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_animaux
{
public:
    QTabWidget *Ajouter_animal;
    QWidget *tab_3;
    QPushButton *pbajouter;
    QPushButton *pb_trier;
    QPushButton *pb_rechRef;
    QPushButton *pb_trier_type;
    QLabel *le_cadre;
    QTableView *tab_animaux;
    QLineEdit *le_rechRef;
    QLineEdit *le_an_3;
    QLabel *label_28;
    QLineEdit *le_type_3;
    QLabel *label_29;
    QLineEdit *le_san_3;
    QLabel *label_30;
    QLabel *label_31;
    QLineEdit *le_cage_3;
    QPushButton *pb_image;
    QLabel *label_img;
    QWidget *tab_5;
    QLabel *label_7;
    QLabel *label_statistiqyes_3;
    QLabel *label_11;
    QLineEdit *le_an_2;
    QLabel *label_13;
    QLineEdit *le_type_2;
    QLabel *label_14;
    QLineEdit *le_cage_2;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *le_san_2;
    QLabel *label_17;
    QPushButton *pb_modifier;
    QComboBox *comboBox_modifier_ref;
    QPushButton *pb_upload;
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
    QLineEdit *le_san;
    QLineEdit *le_cage;
    QWidget *tab_4;
    QLabel *label_8;
    QLabel *label_statistiqyes_2;
    QLabel *label_10;
    QPushButton *id_sup;
    QPushButton *pb_upload_2;
    QComboBox *comboBox_supp_ref_2;
    QLabel *label_24;
    QLabel *label_27;
    QWidget *tab_2;
    QLabel *label_9;
    QLabel *label_statistiqyes;
    QPushButton *pb_stat;
    QLabel *label_18;
    QLabel *lab_stat2000;
    QLabel *label_20;
    QLabel *label_19;
    QLabel *label_21;
    QLabel *lab_stat2011;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *lab_malades;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *lab_seins;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *animaux)
    {
        if (animaux->objectName().isEmpty())
            animaux->setObjectName(QStringLiteral("animaux"));
        animaux->resize(844, 587);
        Ajouter_animal = new QTabWidget(animaux);
        Ajouter_animal->setObjectName(QStringLiteral("Ajouter_animal"));
        Ajouter_animal->setGeometry(QRect(10, 10, 781, 561));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pbajouter = new QPushButton(tab_3);
        pbajouter->setObjectName(QStringLiteral("pbajouter"));
        pbajouter->setGeometry(QRect(30, 90, 111, 31));
        pb_trier = new QPushButton(tab_3);
        pb_trier->setObjectName(QStringLiteral("pb_trier"));
        pb_trier->setGeometry(QRect(150, 90, 111, 31));
        pb_rechRef = new QPushButton(tab_3);
        pb_rechRef->setObjectName(QStringLiteral("pb_rechRef"));
        pb_rechRef->setGeometry(QRect(10, 450, 151, 31));
        pb_trier_type = new QPushButton(tab_3);
        pb_trier_type->setObjectName(QStringLiteral("pb_trier_type"));
        pb_trier_type->setGeometry(QRect(270, 90, 111, 31));
        le_cadre = new QLabel(tab_3);
        le_cadre->setObjectName(QStringLiteral("le_cadre"));
        le_cadre->setGeometry(QRect(-10, 0, 791, 531));
        le_cadre->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        le_cadre->setScaledContents(true);
        tab_animaux = new QTableView(tab_3);
        tab_animaux->setObjectName(QStringLiteral("tab_animaux"));
        tab_animaux->setGeometry(QRect(20, 140, 641, 281));
        le_rechRef = new QLineEdit(tab_3);
        le_rechRef->setObjectName(QStringLiteral("le_rechRef"));
        le_rechRef->setGeometry(QRect(170, 450, 111, 31));
        le_an_3 = new QLineEdit(tab_3);
        le_an_3->setObjectName(QStringLiteral("le_an_3"));
        le_an_3->setGeometry(QRect(410, 470, 111, 21));
        label_28 = new QLabel(tab_3);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(310, 460, 131, 41));
        le_type_3 = new QLineEdit(tab_3);
        le_type_3->setObjectName(QStringLiteral("le_type_3"));
        le_type_3->setGeometry(QRect(410, 440, 113, 22));
        label_29 = new QLabel(tab_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(320, 440, 111, 21));
        le_san_3 = new QLineEdit(tab_3);
        le_san_3->setObjectName(QStringLiteral("le_san_3"));
        le_san_3->setGeometry(QRect(630, 440, 113, 22));
        label_30 = new QLabel(tab_3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(530, 430, 131, 41));
        label_31 = new QLabel(tab_3);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(520, 470, 111, 20));
        le_cage_3 = new QLineEdit(tab_3);
        le_cage_3->setObjectName(QStringLiteral("le_cage_3"));
        le_cage_3->setGeometry(QRect(630, 470, 113, 22));
        pb_image = new QPushButton(tab_3);
        pb_image->setObjectName(QStringLiteral("pb_image"));
        pb_image->setGeometry(QRect(390, 90, 121, 31));
        label_img = new QLabel(tab_3);
        label_img->setObjectName(QStringLiteral("label_img"));
        label_img->setGeometry(QRect(560, 10, 201, 121));
        Ajouter_animal->addTab(tab_3, QString());
        le_cadre->raise();
        pbajouter->raise();
        pb_trier->raise();
        pb_rechRef->raise();
        pb_trier_type->raise();
        tab_animaux->raise();
        le_rechRef->raise();
        le_an_3->raise();
        label_28->raise();
        le_type_3->raise();
        label_29->raise();
        le_san_3->raise();
        label_30->raise();
        label_31->raise();
        le_cage_3->raise();
        pb_image->raise();
        label_img->raise();
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(-10, 0, 791, 531));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_7->setScaledContents(true);
        label_statistiqyes_3 = new QLabel(tab_5);
        label_statistiqyes_3->setObjectName(QStringLiteral("label_statistiqyes_3"));
        label_statistiqyes_3->setGeometry(QRect(260, 70, 231, 51));
        label_11 = new QLabel(tab_5);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(40, 180, 181, 61));
        le_an_2 = new QLineEdit(tab_5);
        le_an_2->setObjectName(QStringLiteral("le_an_2"));
        le_an_2->setGeometry(QRect(240, 200, 113, 22));
        label_13 = new QLabel(tab_5);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(470, 200, 91, 20));
        le_type_2 = new QLineEdit(tab_5);
        le_type_2->setObjectName(QStringLiteral("le_type_2"));
        le_type_2->setGeometry(QRect(240, 290, 113, 22));
        label_14 = new QLabel(tab_5);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(90, 290, 111, 21));
        le_cage_2 = new QLineEdit(tab_5);
        le_cage_2->setObjectName(QStringLiteral("le_cage_2"));
        le_cage_2->setGeometry(QRect(240, 370, 113, 22));
        label_15 = new QLabel(tab_5);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(90, 370, 111, 20));
        label_16 = new QLabel(tab_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(450, 280, 131, 41));
        le_san_2 = new QLineEdit(tab_5);
        le_san_2->setObjectName(QStringLiteral("le_san_2"));
        le_san_2->setGeometry(QRect(590, 290, 113, 22));
        label_17 = new QLabel(tab_5);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(570, 390, 151, 21));
        pb_modifier = new QPushButton(tab_5);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(350, 430, 93, 28));
        comboBox_modifier_ref = new QComboBox(tab_5);
        comboBox_modifier_ref->setObjectName(QStringLiteral("comboBox_modifier_ref"));
        comboBox_modifier_ref->setGeometry(QRect(580, 200, 131, 22));
        pb_upload = new QPushButton(tab_5);
        pb_upload->setObjectName(QStringLiteral("pb_upload"));
        pb_upload->setGeometry(QRect(580, 160, 131, 28));
        Ajouter_animal->addTab(tab_5, QString());
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
        le_san = new QLineEdit(tab);
        le_san->setObjectName(QStringLiteral("le_san"));
        le_san->setGeometry(QRect(580, 260, 113, 22));
        le_cage = new QLineEdit(tab);
        le_cage->setObjectName(QStringLiteral("le_cage"));
        le_cage->setGeometry(QRect(220, 340, 113, 22));
        Ajouter_animal->addTab(tab, QString());
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
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 300, 151, 51));
        id_sup = new QPushButton(tab_4);
        id_sup->setObjectName(QStringLiteral("id_sup"));
        id_sup->setGeometry(QRect(470, 290, 111, 31));
        pb_upload_2 = new QPushButton(tab_4);
        pb_upload_2->setObjectName(QStringLiteral("pb_upload_2"));
        pb_upload_2->setGeometry(QRect(220, 250, 131, 28));
        comboBox_supp_ref_2 = new QComboBox(tab_4);
        comboBox_supp_ref_2->setObjectName(QStringLiteral("comboBox_supp_ref_2"));
        comboBox_supp_ref_2->setGeometry(QRect(220, 320, 131, 22));
        label_24 = new QLabel(tab_4);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(70, 230, 121, 51));
        label_27 = new QLabel(tab_4);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(40, 260, 171, 31));
        Ajouter_animal->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(-10, 0, 791, 531));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_9->setScaledContents(true);
        label_statistiqyes = new QLabel(tab_2);
        label_statistiqyes->setObjectName(QStringLiteral("label_statistiqyes"));
        label_statistiqyes->setGeometry(QRect(270, 70, 231, 51));
        pb_stat = new QPushButton(tab_2);
        pb_stat->setObjectName(QStringLiteral("pb_stat"));
        pb_stat->setGeometry(QRect(320, 190, 151, 41));
        label_18 = new QLabel(tab_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(0, 220, 311, 81));
        lab_stat2000 = new QLabel(tab_2);
        lab_stat2000->setObjectName(QStringLiteral("lab_stat2000"));
        lab_stat2000->setGeometry(QRect(130, 300, 101, 31));
        lab_stat2000->setScaledContents(true);
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(180, 305, 56, 21));
        label_19 = new QLabel(tab_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 350, 311, 81));
        label_21 = new QLabel(tab_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(180, 440, 56, 31));
        lab_stat2011 = new QLabel(tab_2);
        lab_stat2011->setObjectName(QStringLiteral("lab_stat2011"));
        lab_stat2011->setGeometry(QRect(130, 440, 91, 31));
        lab_stat2011->setTextFormat(Qt::RichText);
        lab_stat2011->setScaledContents(true);
        label_22 = new QLabel(tab_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(460, 220, 311, 81));
        label_23 = new QLabel(tab_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(615, 300, 51, 31));
        lab_malades = new QLabel(tab_2);
        lab_malades->setObjectName(QStringLiteral("lab_malades"));
        lab_malades->setGeometry(QRect(560, 300, 111, 31));
        label_25 = new QLabel(tab_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(440, 340, 311, 81));
        label_26 = new QLabel(tab_2);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(605, 436, 61, 20));
        lab_seins = new QLabel(tab_2);
        lab_seins->setObjectName(QStringLiteral("lab_seins"));
        lab_seins->setGeometry(QRect(570, 430, 111, 31));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(550, 300, 91, 31));
        textEdit_2 = new QTextEdit(tab_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(560, 430, 91, 31));
        textEdit_3 = new QTextEdit(tab_2);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(120, 300, 91, 31));
        textEdit_4 = new QTextEdit(tab_2);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(120, 440, 91, 31));
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(380, 280, 16, 192));
        Ajouter_animal->addTab(tab_2, QString());
        label_9->raise();
        label_statistiqyes->raise();
        pb_stat->raise();
        label_18->raise();
        label_19->raise();
        label_22->raise();
        label_25->raise();
        textEdit->raise();
        textEdit_2->raise();
        textEdit_3->raise();
        label_20->raise();
        label_23->raise();
        label_26->raise();
        textEdit_4->raise();
        label_21->raise();
        lab_stat2000->raise();
        lab_stat2011->raise();
        lab_seins->raise();
        lab_malades->raise();
        textBrowser->raise();

        retranslateUi(animaux);

        Ajouter_animal->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(animaux);
    } // setupUi

    void retranslateUi(QDialog *animaux)
    {
        animaux->setWindowTitle(QApplication::translate("animaux", "Dialog", Q_NULLPTR));
        pbajouter->setText(QApplication::translate("animaux", "Ajouter ", Q_NULLPTR));
        pb_trier->setText(QApplication::translate("animaux", "Trier par ann\303\251e", Q_NULLPTR));
        pb_rechRef->setText(QApplication::translate("animaux", "Rechercher par reference", Q_NULLPTR));
        pb_trier_type->setText(QApplication::translate("animaux", "Trier par Type", Q_NULLPTR));
        le_cadre->setText(QString());
        label_28->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#ffffff;\">Ann\303\251e </span></p></body></html>", Q_NULLPTR));
        label_29->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#ffffff;\">Type</span></p></body></html>", Q_NULLPTR));
        label_30->setText(QApplication::translate("animaux", "<html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\">Etat Sanitaire</span></p></body></html>", Q_NULLPTR));
        label_31->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; color:#ffffff;\">Etat de cage</span></p></body></html>", Q_NULLPTR));
        pb_image->setText(QApplication::translate("animaux", "Joindre une photo", Q_NULLPTR));
        label_img->setText(QString());
        Ajouter_animal->setTabText(Ajouter_animal->indexOf(tab_3), QApplication::translate("animaux", "Consulter les animaux", Q_NULLPTR));
        label_7->setText(QString());
        label_statistiqyes_3->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; text-decoration: underline; color:#ffde21;\">Modifier</span></p></body></html>", Q_NULLPTR));
        label_11->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Ann\303\251e de naissance</span></p></body></html>", Q_NULLPTR));
        label_13->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">R\303\251f\303\251rence</span></p></body></html>", Q_NULLPTR));
        label_14->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Type</span></p></body></html>", Q_NULLPTR));
        label_15->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Etat de cage</span></p></body></html>", Q_NULLPTR));
        label_16->setText(QApplication::translate("animaux", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Etat Sanitaire</span></p></body></html>", Q_NULLPTR));
        label_17->setText(QApplication::translate("animaux", "<html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\">Joindre une photo</span></p></body></html>", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("animaux", "Modifier", Q_NULLPTR));
        pb_upload->setText(QApplication::translate("animaux", "Upload Reference", Q_NULLPTR));
        Ajouter_animal->setTabText(Ajouter_animal->indexOf(tab_5), QApplication::translate("animaux", "modifier", Q_NULLPTR));
        label->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Type</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">R\303\251f\303\251rence</span></p></body></html>", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("animaux", "Ajouter", Q_NULLPTR));
        label_3->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Ann\303\251e de naissance</span></p></body></html>", Q_NULLPTR));
        label_4->setText(QApplication::translate("animaux", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Etat Sanitaire</span></p></body></html>", Q_NULLPTR));
        label_5->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Etat de cage</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QString());
        Ajouter_animal->setTabText(Ajouter_animal->indexOf(tab), QApplication::translate("animaux", "Ajouter un animal", Q_NULLPTR));
        label_8->setText(QString());
        label_statistiqyes_2->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; text-decoration: underline; color:#ffde21;\">Supprimer</span></p></body></html>", Q_NULLPTR));
        label_10->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:600; color:#ffffff;\">R\303\251f\303\251rence</span></p></body></html>", Q_NULLPTR));
        id_sup->setText(QApplication::translate("animaux", "Supprimer", Q_NULLPTR));
        pb_upload_2->setText(QApplication::translate("animaux", "Upload Reference", Q_NULLPTR));
        label_24->setText(QApplication::translate("animaux", "<html><head/><body><p><span style=\" color:#ffffff;\">Appuyer sur upload </span></p></body></html>", Q_NULLPTR));
        label_27->setText(QApplication::translate("animaux", "<html><head/><body><p><span style=\" color:#ffffff;\">pour charger les references</span></p></body></html>", Q_NULLPTR));
        Ajouter_animal->setTabText(Ajouter_animal->indexOf(tab_4), QApplication::translate("animaux", "Supprimer animal", Q_NULLPTR));
        label_9->setText(QString());
        label_statistiqyes->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; text-decoration: underline; color:#ffde21;\">Statistiques</span></p></body></html>", Q_NULLPTR));
        pb_stat->setText(QApplication::translate("animaux", "Voir Statistique", Q_NULLPTR));
        label_18->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Pourcentage des animaux n\303\251s </span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">entre 2000 et 2010:</span></p></body></html>", Q_NULLPTR));
        lab_stat2000->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"right\"><br/></p></body></html>", Q_NULLPTR));
        label_20->setText(QApplication::translate("animaux", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#000000;\">%</span></p></body></html>", Q_NULLPTR));
        label_19->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Pourcentage des animaux n\303\251s </span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">entre 2011 et 2021:</span></p></body></html>", Q_NULLPTR));
        label_21->setText(QApplication::translate("animaux", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#000000;\">%</span></p></body></html>", Q_NULLPTR));
        lab_stat2011->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"right\"><br/></p></body></html>", Q_NULLPTR));
        label_22->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Pourcentage des animaux </span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">malades:</span></p></body></html>", Q_NULLPTR));
        label_23->setText(QApplication::translate("animaux", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; color:#000000;\">%</span></p></body></html>", Q_NULLPTR));
        lab_malades->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"right\"><br/></p></body></html>", Q_NULLPTR));
        label_25->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">Pourcentage des animaux </span></p><p align=\"center\"><span style=\" font-size:10pt; font-weight:600; color:#ffffff;\">seins:</span></p></body></html>", Q_NULLPTR));
        label_26->setText(QApplication::translate("animaux", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">%</span></p></body></html>", Q_NULLPTR));
        lab_seins->setText(QApplication::translate("animaux", "<html><head/><body><p align=\"right\"><br/></p></body></html>", Q_NULLPTR));
        Ajouter_animal->setTabText(Ajouter_animal->indexOf(tab_2), QApplication::translate("animaux", "Statistiques", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class animaux: public Ui_animaux {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMAUX_H
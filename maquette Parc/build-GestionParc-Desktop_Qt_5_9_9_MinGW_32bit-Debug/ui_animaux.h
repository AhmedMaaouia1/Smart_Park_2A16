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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
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
    QPushButton *pb_trier;
    QPushButton *pb_trier_type;
    QLabel *le_cadre;
    QTableView *tab_animaux;
    QPushButton *pb_image;
    QLabel *label_img;
    QLineEdit *le_recherche;
    QComboBox *anim_col;
    QPushButton *pb_trier_etat_sanitaire;
    QLabel *Digital_clock;
    QLabel *DateTime;
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
    QWidget *tab_6;
    QLabel *label_12;
    QFrame *horizontal_stat;
    QHBoxLayout *horizontalLayout;
    QPushButton *pb_statistics;
    QLabel *label_28;
    QWidget *tab_7;
    QLabel *label_32;
    QFrame *horizontal_stat_etat;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_29;

    void setupUi(QDialog *animaux)
    {
        if (animaux->objectName().isEmpty())
            animaux->setObjectName(QStringLiteral("animaux"));
        animaux->resize(869, 587);
        Ajouter_animal = new QTabWidget(animaux);
        Ajouter_animal->setObjectName(QStringLiteral("Ajouter_animal"));
        Ajouter_animal->setGeometry(QRect(10, 10, 831, 541));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pb_trier = new QPushButton(tab_3);
        pb_trier->setObjectName(QStringLiteral("pb_trier"));
        pb_trier->setGeometry(QRect(170, 160, 101, 31));
        pb_trier_type = new QPushButton(tab_3);
        pb_trier_type->setObjectName(QStringLiteral("pb_trier_type"));
        pb_trier_type->setGeometry(QRect(280, 160, 91, 31));
        le_cadre = new QLabel(tab_3);
        le_cadre->setObjectName(QStringLiteral("le_cadre"));
        le_cadre->setGeometry(QRect(-10, 0, 841, 531));
        le_cadre->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        le_cadre->setScaledContents(true);
        tab_animaux = new QTableView(tab_3);
        tab_animaux->setObjectName(QStringLiteral("tab_animaux"));
        tab_animaux->setGeometry(QRect(50, 200, 701, 291));
        pb_image = new QPushButton(tab_3);
        pb_image->setObjectName(QStringLiteral("pb_image"));
        pb_image->setGeometry(QRect(530, 160, 121, 31));
        label_img = new QLabel(tab_3);
        label_img->setObjectName(QStringLiteral("label_img"));
        label_img->setGeometry(QRect(670, 20, 141, 141));
        le_recherche = new QLineEdit(tab_3);
        le_recherche->setObjectName(QStringLiteral("le_recherche"));
        le_recherche->setGeometry(QRect(50, 160, 101, 31));
        anim_col = new QComboBox(tab_3);
        anim_col->setObjectName(QStringLiteral("anim_col"));
        anim_col->setGeometry(QRect(50, 120, 101, 31));
        pb_trier_etat_sanitaire = new QPushButton(tab_3);
        pb_trier_etat_sanitaire->setObjectName(QStringLiteral("pb_trier_etat_sanitaire"));
        pb_trier_etat_sanitaire->setGeometry(QRect(380, 160, 141, 31));
        Digital_clock = new QLabel(tab_3);
        Digital_clock->setObjectName(QStringLiteral("Digital_clock"));
        Digital_clock->setGeometry(QRect(295, 30, 221, 51));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        Digital_clock->setFont(font);
        DateTime = new QLabel(tab_3);
        DateTime->setObjectName(QStringLiteral("DateTime"));
        DateTime->setGeometry(QRect(350, 100, 151, 41));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        DateTime->setFont(font1);
        Ajouter_animal->addTab(tab_3, QString());
        le_cadre->raise();
        pb_trier->raise();
        pb_trier_type->raise();
        tab_animaux->raise();
        pb_image->raise();
        label_img->raise();
        le_recherche->raise();
        anim_col->raise();
        pb_trier_etat_sanitaire->raise();
        Digital_clock->raise();
        DateTime->raise();
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_7 = new QLabel(tab_5);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(-10, 0, 841, 531));
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
        label_6->setGeometry(QRect(-10, 0, 841, 531));
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
        label_8->setGeometry(QRect(-10, 0, 841, 531));
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
        label_9->setGeometry(QRect(-10, 0, 841, 531));
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
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_12 = new QLabel(tab_6);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(-10, 0, 841, 531));
        label_12->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_12->setScaledContents(true);
        horizontal_stat = new QFrame(tab_6);
        horizontal_stat->setObjectName(QStringLiteral("horizontal_stat"));
        horizontal_stat->setGeometry(QRect(80, 70, 681, 411));
        horizontalLayout = new QHBoxLayout(horizontal_stat);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pb_statistics = new QPushButton(tab_6);
        pb_statistics->setObjectName(QStringLiteral("pb_statistics"));
        pb_statistics->setGeometry(QRect(350, 40, 101, 21));
        label_28 = new QLabel(tab_6);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(120, 480, 591, 20));
        Ajouter_animal->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        label_32 = new QLabel(tab_7);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(-10, 0, 841, 531));
        label_32->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_32->setScaledContents(true);
        horizontal_stat_etat = new QFrame(tab_7);
        horizontal_stat_etat->setObjectName(QStringLiteral("horizontal_stat_etat"));
        horizontal_stat_etat->setGeometry(QRect(90, 70, 691, 411));
        horizontalLayout_3 = new QHBoxLayout(horizontal_stat_etat);
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(7, 7, 7, 2);
        label_29 = new QLabel(tab_7);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(140, 480, 591, 20));
        Ajouter_animal->addTab(tab_7, QString());

        retranslateUi(animaux);

        Ajouter_animal->setCurrentIndex(0);
        anim_col->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(animaux);
    } // setupUi

    void retranslateUi(QDialog *animaux)
    {
        animaux->setWindowTitle(QApplication::translate("animaux", "Dialog", Q_NULLPTR));
        pb_trier->setText(QApplication::translate("animaux", "Trier par ann\303\251e", Q_NULLPTR));
        pb_trier_type->setText(QApplication::translate("animaux", "Trier par Type", Q_NULLPTR));
        le_cadre->setText(QString());
        pb_image->setText(QApplication::translate("animaux", "Joindre une photo", Q_NULLPTR));
        label_img->setText(QString());
        le_recherche->setPlaceholderText(QApplication::translate("animaux", "recherche", Q_NULLPTR));
        anim_col->clear();
        anim_col->insertItems(0, QStringList()
         << QApplication::translate("animaux", "All", Q_NULLPTR)
         << QApplication::translate("animaux", "Reference", Q_NULLPTR)
         << QApplication::translate("animaux", "Naissance", Q_NULLPTR)
         << QApplication::translate("animaux", "Etat Sanitaire", Q_NULLPTR)
         << QApplication::translate("animaux", "Type", Q_NULLPTR)
         << QApplication::translate("animaux", "Etat Cage", Q_NULLPTR)
        );
        anim_col->setCurrentText(QApplication::translate("animaux", "All", Q_NULLPTR));
        pb_trier_etat_sanitaire->setText(QApplication::translate("animaux", "Trier par Etat Sanitaire", Q_NULLPTR));
        Digital_clock->setText(QString());
        DateTime->setText(QString());
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
        label_12->setText(QString());
        pb_statistics->setText(QApplication::translate("animaux", "Statistiques", Q_NULLPTR));
        label_28->setText(QApplication::translate("animaux", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; text-decoration: underline; color:#ffff00;\">Appuyer sur Bouton Statistiques pour mettre \303\240 jour les statistiques</span></p></body></html>", Q_NULLPTR));
        Ajouter_animal->setTabText(Ajouter_animal->indexOf(tab_6), QApplication::translate("animaux", "Statistiques 1", Q_NULLPTR));
        label_32->setText(QString());
        label_29->setText(QApplication::translate("animaux", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600; text-decoration: underline; color:#ffff00;\">Appuyer sur Bouton Statistiques pour mettre \303\240 jour les statistiques</span></p></body></html>", Q_NULLPTR));
        Ajouter_animal->setTabText(Ajouter_animal->indexOf(tab_7), QApplication::translate("animaux", "Statistique 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class animaux: public Ui_animaux {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANIMAUX_H

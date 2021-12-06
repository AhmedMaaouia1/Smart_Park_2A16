/********************************************************************************
** Form generated from reading UI file 'produit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUIT_H
#define UI_PRODUIT_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_produit
{
public:
    QTabWidget *Stat;
    QWidget *tab;
    QLabel *label;
    QPushButton *pb_statics;
    QLabel *Title;
    QTextEdit *textrevenue;
    QPushButton *pb_calcul;
    QLabel *label_12;
    QPushButton *pb_quitter_produit;
    QPushButton *pb_retour_produit;
    QWidget *tab2;
    QLabel *label_8;
    QTableView *tableproduit;
    QRadioButton *RB_trinom;
    QRadioButton *RB_category;
    QRadioButton *RB_type;
    QLineEdit *Recherche;
    QLabel *label_13;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_3;
    QWidget *tab_3;
    QLabel *label_2;
    QPushButton *pb_ajout;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *le_ref;
    QLineEdit *le_cat;
    QLineEdit *le_type;
    QLineEdit *le_prix;
    QLabel *label_6;
    QLineEdit *le_name;
    QLabel *label_3;
    QLabel *label_11;
    QPushButton *pb_modifier;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QLabel *label_14;
    QWidget *tab_4;
    QLabel *label_7;
    QLabel *label_9;
    QLineEdit *le_ref_supp;
    QLabel *label_15;
    QWidget *tab_5;
    QLabel *label_10;
    QFrame *horizontal_stat;
    QHBoxLayout *horizontalLayout;
    QLabel *label_16;

    void setupUi(QDialog *produit)
    {
        if (produit->objectName().isEmpty())
            produit->setObjectName(QStringLiteral("produit"));
        produit->resize(835, 582);
        Stat = new QTabWidget(produit);
        Stat->setObjectName(QStringLiteral("Stat"));
        Stat->setGeometry(QRect(20, 40, 801, 511));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-30, -70, 781, 471));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/flamingooooo.png")));
        pb_statics = new QPushButton(tab);
        pb_statics->setObjectName(QStringLiteral("pb_statics"));
        pb_statics->setGeometry(QRect(410, 220, 151, 31));
        Title = new QLabel(tab);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(210, 40, 361, 71));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        Title->setPalette(palette);
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        Title->setFont(font);
        Title->setStyleSheet(QLatin1String("font: 6pt \"MS Shell Dlg 2\";\n"
"font: 20pt \"MS Shell Dlg 2\";"));
        textrevenue = new QTextEdit(tab);
        textrevenue->setObjectName(QStringLiteral("textrevenue"));
        textrevenue->setGeometry(QRect(210, 220, 104, 31));
        pb_calcul = new QPushButton(tab);
        pb_calcul->setObjectName(QStringLiteral("pb_calcul"));
        pb_calcul->setGeometry(QRect(40, 220, 151, 31));
        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 0, 801, 481));
        label_12->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_12->setScaledContents(true);
        pb_quitter_produit = new QPushButton(tab);
        pb_quitter_produit->setObjectName(QStringLiteral("pb_quitter_produit"));
        pb_quitter_produit->setGeometry(QRect(670, 430, 93, 28));
        pb_retour_produit = new QPushButton(tab);
        pb_retour_produit->setObjectName(QStringLiteral("pb_retour_produit"));
        pb_retour_produit->setGeometry(QRect(50, 430, 93, 28));
        Stat->addTab(tab, QString());
        label_12->raise();
        label->raise();
        pb_statics->raise();
        Title->raise();
        textrevenue->raise();
        pb_calcul->raise();
        pb_quitter_produit->raise();
        pb_retour_produit->raise();
        tab2 = new QWidget();
        tab2->setObjectName(QStringLiteral("tab2"));
        label_8 = new QLabel(tab2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 110, 721, 311));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/flamingooooo.png")));
        tableproduit = new QTableView(tab2);
        tableproduit->setObjectName(QStringLiteral("tableproduit"));
        tableproduit->setGeometry(QRect(30, 110, 721, 311));
        RB_trinom = new QRadioButton(tab2);
        RB_trinom->setObjectName(QStringLiteral("RB_trinom"));
        RB_trinom->setGeometry(QRect(150, 69, 101, 31));
        RB_category = new QRadioButton(tab2);
        RB_category->setObjectName(QStringLiteral("RB_category"));
        RB_category->setGeometry(QRect(270, 70, 111, 31));
        RB_type = new QRadioButton(tab2);
        RB_type->setObjectName(QStringLiteral("RB_type"));
        RB_type->setGeometry(QRect(396, 70, 111, 31));
        Recherche = new QLineEdit(tab2);
        Recherche->setObjectName(QStringLiteral("Recherche"));
        Recherche->setGeometry(QRect(30, 71, 113, 31));
        label_13 = new QLabel(tab2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(0, 0, 801, 481));
        label_13->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_13->setScaledContents(true);
        textBrowser_2 = new QTextBrowser(tab2);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(150, 70, 111, 31));
        textBrowser = new QTextBrowser(tab2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(270, 70, 111, 31));
        textBrowser_3 = new QTextBrowser(tab2);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(390, 70, 111, 31));
        Stat->addTab(tab2, QString());
        label_13->raise();
        textBrowser_3->raise();
        textBrowser->raise();
        label_8->raise();
        textBrowser_2->raise();
        tableproduit->raise();
        RB_trinom->raise();
        RB_category->raise();
        RB_type->raise();
        Recherche->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 0, 711, 411));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/flamingooooo.png")));
        label_2->setScaledContents(true);
        pb_ajout = new QPushButton(tab_3);
        pb_ajout->setObjectName(QStringLiteral("pb_ajout"));
        pb_ajout->setGeometry(QRect(410, 130, 93, 28));
        label_4 = new QLabel(tab_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 230, 81, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_4->setPalette(palette1);
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 280, 56, 21));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_5->setPalette(palette2);
        le_ref = new QLineEdit(tab_3);
        le_ref->setObjectName(QStringLiteral("le_ref"));
        le_ref->setGeometry(QRect(230, 130, 113, 22));
        le_cat = new QLineEdit(tab_3);
        le_cat->setObjectName(QStringLiteral("le_cat"));
        le_cat->setGeometry(QRect(230, 230, 113, 22));
        le_type = new QLineEdit(tab_3);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(230, 280, 113, 22));
        le_prix = new QLineEdit(tab_3);
        le_prix->setObjectName(QStringLiteral("le_prix"));
        le_prix->setGeometry(QRect(230, 330, 113, 22));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 330, 56, 21));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_6->setPalette(palette3);
        le_name = new QLineEdit(tab_3);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setGeometry(QRect(230, 180, 113, 22));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 130, 111, 20));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_3->setPalette(palette4);
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(100, 180, 91, 20));
        label_11->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
""));
        pb_modifier = new QPushButton(tab_3);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(410, 170, 93, 28));
        comboBox = new QComboBox(tab_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(220, 80, 131, 22));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 210, 93, 28));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(0, 0, 801, 481));
        label_14->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_14->setScaledContents(true);
        Stat->addTab(tab_3, QString());
        label_14->raise();
        label_2->raise();
        pb_ajout->raise();
        label_4->raise();
        label_5->raise();
        le_ref->raise();
        le_cat->raise();
        le_type->raise();
        le_prix->raise();
        label_6->raise();
        le_name->raise();
        label_3->raise();
        label_11->raise();
        pb_modifier->raise();
        comboBox->raise();
        pushButton_2->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_7 = new QLabel(tab_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 0, 701, 401));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/flamingooooo.png")));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(190, 150, 161, 51));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_9->setPalette(palette5);
        le_ref_supp = new QLineEdit(tab_4);
        le_ref_supp->setObjectName(QStringLiteral("le_ref_supp"));
        le_ref_supp->setGeometry(QRect(350, 160, 113, 22));
        label_15 = new QLabel(tab_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(0, 0, 801, 481));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_15->setScaledContents(true);
        Stat->addTab(tab_4, QString());
        label_15->raise();
        label_7->raise();
        label_9->raise();
        le_ref_supp->raise();
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_10 = new QLabel(tab_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 10, 701, 391));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/flamingooooo.png")));
        horizontal_stat = new QFrame(tab_5);
        horizontal_stat->setObjectName(QStringLiteral("horizontal_stat"));
        horizontal_stat->setGeometry(QRect(60, 40, 691, 401));
        horizontalLayout = new QHBoxLayout(horizontal_stat);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_16 = new QLabel(tab_5);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(0, 0, 801, 481));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_16->setScaledContents(true);
        Stat->addTab(tab_5, QString());
        label_16->raise();
        label_10->raise();
        horizontal_stat->raise();

        retranslateUi(produit);

        Stat->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(produit);
    } // setupUi

    void retranslateUi(QDialog *produit)
    {
        produit->setWindowTitle(QApplication::translate("produit", "Gestion des Produits", Q_NULLPTR));
        label->setText(QString());
        pb_statics->setText(QApplication::translate("produit", "Statistique", Q_NULLPTR));
        Title->setText(QApplication::translate("produit", "Gestion des produits", Q_NULLPTR));
        pb_calcul->setText(QApplication::translate("produit", "Calcul de revenue", Q_NULLPTR));
        label_12->setText(QString());
        pb_quitter_produit->setText(QApplication::translate("produit", "Quitter", Q_NULLPTR));
        pb_retour_produit->setText(QApplication::translate("produit", "Retour", Q_NULLPTR));
        Stat->setTabText(Stat->indexOf(tab), QApplication::translate("produit", "Home", Q_NULLPTR));
        label_8->setText(QString());
        RB_trinom->setText(QApplication::translate("produit", "Tri Nom", Q_NULLPTR));
        RB_category->setText(QApplication::translate("produit", "Tri Category", Q_NULLPTR));
        RB_type->setText(QApplication::translate("produit", "Tri Type", Q_NULLPTR));
        Recherche->setPlaceholderText(QApplication::translate("produit", "Rechercher", Q_NULLPTR));
        label_13->setText(QString());
        Stat->setTabText(Stat->indexOf(tab2), QApplication::translate("produit", "afficher", Q_NULLPTR));
        label_2->setText(QString());
        pb_ajout->setText(QApplication::translate("produit", "ajouter", Q_NULLPTR));
        label_4->setText(QApplication::translate("produit", "Categorie", Q_NULLPTR));
        label_5->setText(QApplication::translate("produit", "Type", Q_NULLPTR));
        label_6->setText(QApplication::translate("produit", "Prix", Q_NULLPTR));
        label_3->setText(QApplication::translate("produit", "reference produit", Q_NULLPTR));
        label_11->setText(QApplication::translate("produit", "NOM", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("produit", "Modifier", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("produit", "supprimer", Q_NULLPTR));
        label_14->setText(QString());
        Stat->setTabText(Stat->indexOf(tab_3), QApplication::translate("produit", "Parametre", Q_NULLPTR));
        label_7->setText(QString());
        label_9->setText(QApplication::translate("produit", "reference de produit", Q_NULLPTR));
        label_15->setText(QString());
        Stat->setTabText(Stat->indexOf(tab_4), QApplication::translate("produit", " modifier et supprimer", Q_NULLPTR));
        label_10->setText(QString());
        label_16->setText(QString());
        Stat->setTabText(Stat->indexOf(tab_5), QApplication::translate("produit", "Statistique ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class produit: public Ui_produit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUIT_H

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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *Stat;
    QWidget *tab;
    QLabel *label;
    QPushButton *pb_statics;
    QLabel *Title;
    QTextEdit *textrevenue;
    QPushButton *pb_calcul;
    QWidget *tab2;
    QLabel *label_8;
    QTableView *tableproduit;
    QRadioButton *RB_trinom;
    QRadioButton *RB_category;
    QRadioButton *RB_type;
    QLineEdit *Recherche;
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
    QWidget *tab_4;
    QLabel *label_7;
    QLabel *label_9;
    QLineEdit *le_ref_supp;
    QWidget *tab_5;
    QLabel *label_10;
    QFrame *horizontal_stat;
    QHBoxLayout *horizontalLayout;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(943, 647);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Stat = new QTabWidget(centralwidget);
        Stat->setObjectName(QStringLiteral("Stat"));
        Stat->setGeometry(QRect(140, 160, 721, 431));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-30, -70, 781, 471));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/flamingooooo.png")));
        pb_statics = new QPushButton(tab);
        pb_statics->setObjectName(QStringLiteral("pb_statics"));
        pb_statics->setGeometry(QRect(410, 220, 151, 28));
        Title = new QLabel(tab);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(200, 10, 361, 71));
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
        textrevenue->setGeometry(QRect(190, 220, 104, 31));
        pb_calcul = new QPushButton(tab);
        pb_calcul->setObjectName(QStringLiteral("pb_calcul"));
        pb_calcul->setGeometry(QRect(40, 220, 151, 28));
        Stat->addTab(tab, QString());
        tab2 = new QWidget();
        tab2->setObjectName(QStringLiteral("tab2"));
        label_8 = new QLabel(tab2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(0, -10, 711, 411));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/flamingooooo.png")));
        tableproduit = new QTableView(tab2);
        tableproduit->setObjectName(QStringLiteral("tableproduit"));
        tableproduit->setGeometry(QRect(0, 40, 571, 311));
        RB_trinom = new QRadioButton(tab2);
        RB_trinom->setObjectName(QStringLiteral("RB_trinom"));
        RB_trinom->setGeometry(QRect(590, 130, 97, 20));
        RB_category = new QRadioButton(tab2);
        RB_category->setObjectName(QStringLiteral("RB_category"));
        RB_category->setGeometry(QRect(590, 170, 97, 20));
        RB_type = new QRadioButton(tab2);
        RB_type->setObjectName(QStringLiteral("RB_type"));
        RB_type->setGeometry(QRect(590, 220, 97, 20));
        Recherche = new QLineEdit(tab2);
        Recherche->setObjectName(QStringLiteral("Recherche"));
        Recherche->setGeometry(QRect(580, 270, 113, 22));
        Stat->addTab(tab2, QString());
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
        label_4->setGeometry(QRect(30, 170, 81, 16));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_4->setPalette(palette1);
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 220, 56, 16));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_5->setPalette(palette2);
        le_ref = new QLineEdit(tab_3);
        le_ref->setObjectName(QStringLiteral("le_ref"));
        le_ref->setGeometry(QRect(130, 70, 113, 22));
        le_cat = new QLineEdit(tab_3);
        le_cat->setObjectName(QStringLiteral("le_cat"));
        le_cat->setGeometry(QRect(130, 170, 113, 22));
        le_type = new QLineEdit(tab_3);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(130, 210, 113, 22));
        le_prix = new QLineEdit(tab_3);
        le_prix->setObjectName(QStringLiteral("le_prix"));
        le_prix->setGeometry(QRect(130, 260, 113, 22));
        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 260, 56, 16));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_6->setPalette(palette3);
        le_name = new QLineEdit(tab_3);
        le_name->setObjectName(QStringLiteral("le_name"));
        le_name->setGeometry(QRect(130, 120, 113, 22));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 70, 111, 20));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush1);
        label_3->setPalette(palette4);
        label_11 = new QLabel(tab_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 120, 91, 20));
        label_11->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
""));
        pb_modifier = new QPushButton(tab_3);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(410, 170, 93, 28));
        comboBox = new QComboBox(tab_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(522, 40, 131, 22));
        pushButton_2 = new QPushButton(tab_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(410, 210, 93, 28));
        Stat->addTab(tab_3, QString());
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
        Stat->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        label_10 = new QLabel(tab_5);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 10, 701, 391));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../../../../Downloads/flamingooooo.png")));
        horizontal_stat = new QFrame(tab_5);
        horizontal_stat->setObjectName(QStringLiteral("horizontal_stat"));
        horizontal_stat->setGeometry(QRect(60, 40, 611, 351));
        horizontalLayout = new QHBoxLayout(horizontal_stat);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Stat->addTab(tab_5, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        Stat->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        pb_statics->setText(QApplication::translate("MainWindow", "Statistique", Q_NULLPTR));
        Title->setText(QApplication::translate("MainWindow", "Gestion des produits", Q_NULLPTR));
        pb_calcul->setText(QApplication::translate("MainWindow", "Calcul de revenue", Q_NULLPTR));
        Stat->setTabText(Stat->indexOf(tab), QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        label_8->setText(QString());
        RB_trinom->setText(QApplication::translate("MainWindow", "Tri Nom", Q_NULLPTR));
        RB_category->setText(QApplication::translate("MainWindow", "Tri Category", Q_NULLPTR));
        RB_type->setText(QApplication::translate("MainWindow", "Tri Type", Q_NULLPTR));
        Stat->setTabText(Stat->indexOf(tab2), QApplication::translate("MainWindow", "afficher", Q_NULLPTR));
        label_2->setText(QString());
        pb_ajout->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "category", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "type", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "prix", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "reference produit", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        Stat->setTabText(Stat->indexOf(tab_3), QApplication::translate("MainWindow", "Parametre", Q_NULLPTR));
        label_7->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "reference de produit", Q_NULLPTR));
        Stat->setTabText(Stat->indexOf(tab_4), QApplication::translate("MainWindow", " modifier et supprimer", Q_NULLPTR));
        label_10->setText(QString());
        Stat->setTabText(Stat->indexOf(tab_5), QApplication::translate("MainWindow", "Statistique ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

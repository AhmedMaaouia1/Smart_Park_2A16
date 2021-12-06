/********************************************************************************
** Form generated from reading UI file 'employee.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEE_H
#define UI_EMPLOYEE_H

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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_employee
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QLabel *label_2;
    QPushButton *pb_supprimer;
    QPushButton *pb_modifier;
    QPushButton *pb_rechercher;
    QPushButton *pb_statistics;
    QPushButton *pb_ajouter;
    QPushButton *le_tri_nom;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableView *tabemploye;
    QLabel *type;
    QLabel *nom;
    QLabel *prenom;
    QLabel *age;
    QLabel *matricule;
    QLineEdit *le_matricule;
    QLineEdit *le_nom;
    QLineEdit *le_prenom;
    QLineEdit *le_age;
    QLineEdit *le_type;
    QComboBox *comboBox;
    QLabel *label_9;
    QLineEdit *le_matriculd;
    QLineEdit *rech;
    QPushButton *le_tri_age;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QPushButton *optionspush;
    QLabel *le_cadre;
    QPushButton *pb_quitter_employe;
    QPushButton *pb_retour_employee;
    QWidget *tab_3;
    QLabel *label_3;
    QLabel *label_15;
    QFrame *horizontal_stat;
    QHBoxLayout *horizontalLayout;
    QLabel *le_cadre_2;

    void setupUi(QDialog *employee)
    {
        if (employee->objectName().isEmpty())
            employee->setObjectName(QStringLiteral("employee"));
        employee->resize(1043, 718);
        tabWidget = new QTabWidget(employee);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(20, 10, 981, 701));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(-130, -30, 1101, 701));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Bureau/247590809_624209822325987_6344712974586411864_n.png")));
        label_2->setScaledContents(true);
        pb_supprimer = new QPushButton(tab_2);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(280, 140, 75, 23));
        pb_modifier = new QPushButton(tab_2);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(280, 170, 75, 23));
        pb_rechercher = new QPushButton(tab_2);
        pb_rechercher->setObjectName(QStringLiteral("pb_rechercher"));
        pb_rechercher->setGeometry(QRect(510, 60, 75, 23));
        pb_statistics = new QPushButton(tab_2);
        pb_statistics->setObjectName(QStringLiteral("pb_statistics"));
        pb_statistics->setGeometry(QRect(870, 60, 81, 23));
        pb_ajouter = new QPushButton(tab_2);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(280, 110, 75, 23));
        le_tri_nom = new QPushButton(tab_2);
        le_tri_nom->setObjectName(QStringLiteral("le_tri_nom"));
        le_tri_nom->setGeometry(QRect(710, 60, 75, 23));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(490, 100, 471, 331));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 469, 329));
        tabemploye = new QTableView(scrollAreaWidgetContents);
        tabemploye->setObjectName(QStringLiteral("tabemploye"));
        tabemploye->setGeometry(QRect(0, 0, 471, 331));
        scrollArea->setWidget(scrollAreaWidgetContents);
        type = new QLabel(tab_2);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(10, 110, 51, 16));
        type->setStyleSheet(QLatin1String("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        nom = new QLabel(tab_2);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(10, 140, 47, 14));
        nom->setStyleSheet(QLatin1String("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        prenom = new QLabel(tab_2);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(10, 170, 71, 16));
        prenom->setStyleSheet(QLatin1String("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        age = new QLabel(tab_2);
        age->setObjectName(QStringLiteral("age"));
        age->setGeometry(QRect(10, 190, 111, 31));
        age->setStyleSheet(QLatin1String("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        matricule = new QLabel(tab_2);
        matricule->setObjectName(QStringLiteral("matricule"));
        matricule->setGeometry(QRect(10, 80, 81, 16));
        matricule->setStyleSheet(QLatin1String("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        le_matricule = new QLineEdit(tab_2);
        le_matricule->setObjectName(QStringLiteral("le_matricule"));
        le_matricule->setGeometry(QRect(110, 80, 113, 20));
        le_nom = new QLineEdit(tab_2);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(110, 140, 113, 20));
        le_prenom = new QLineEdit(tab_2);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(110, 170, 113, 20));
        le_age = new QLineEdit(tab_2);
        le_age->setObjectName(QStringLiteral("le_age"));
        le_age->setGeometry(QRect(110, 200, 113, 20));
        le_type = new QLineEdit(tab_2);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(110, 110, 113, 20));
        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(110, 50, 111, 22));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 230, 81, 16));
        label_9->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        le_matriculd = new QLineEdit(tab_2);
        le_matriculd->setObjectName(QStringLiteral("le_matriculd"));
        le_matriculd->setGeometry(QRect(110, 230, 113, 20));
        rech = new QLineEdit(tab_2);
        rech->setObjectName(QStringLiteral("rech"));
        rech->setGeometry(QRect(590, 60, 113, 20));
        le_tri_age = new QPushButton(tab_2);
        le_tri_age->setObjectName(QStringLiteral("le_tri_age"));
        le_tri_age->setGeometry(QRect(790, 60, 75, 23));
        scrollArea_2 = new QScrollArea(tab_2);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(10, 310, 361, 301));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 359, 299));
        scrollArea_2->setWidget(scrollAreaWidgetContents_3);
        optionspush = new QPushButton(tab_2);
        optionspush->setObjectName(QStringLiteral("optionspush"));
        optionspush->setGeometry(QRect(10, 280, 131, 28));
        le_cadre = new QLabel(tab_2);
        le_cadre->setObjectName(QStringLiteral("le_cadre"));
        le_cadre->setGeometry(QRect(0, 0, 981, 671));
        le_cadre->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        le_cadre->setScaledContents(true);
        pb_quitter_employe = new QPushButton(tab_2);
        pb_quitter_employe->setObjectName(QStringLiteral("pb_quitter_employe"));
        pb_quitter_employe->setGeometry(QRect(830, 620, 93, 28));
        pb_retour_employee = new QPushButton(tab_2);
        pb_retour_employee->setObjectName(QStringLiteral("pb_retour_employee"));
        pb_retour_employee->setGeometry(QRect(30, 630, 93, 28));
        tabWidget->addTab(tab_2, QString());
        le_cadre->raise();
        label_2->raise();
        pb_supprimer->raise();
        pb_modifier->raise();
        pb_rechercher->raise();
        pb_statistics->raise();
        pb_ajouter->raise();
        le_tri_nom->raise();
        scrollArea->raise();
        type->raise();
        nom->raise();
        prenom->raise();
        age->raise();
        matricule->raise();
        le_matricule->raise();
        le_nom->raise();
        le_prenom->raise();
        le_age->raise();
        le_type->raise();
        comboBox->raise();
        label_9->raise();
        le_matriculd->raise();
        rech->raise();
        le_tri_age->raise();
        scrollArea_2->raise();
        optionspush->raise();
        pb_quitter_employe->raise();
        pb_retour_employee->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 3, 981, 571));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../Bureau/247590809_624209822325987_6344712974586411864_n.png")));
        label_3->setScaledContents(true);
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(400, 40, 211, 51));
        label_15->setStyleSheet(QLatin1String("font: 75 26pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        horizontal_stat = new QFrame(tab_3);
        horizontal_stat->setObjectName(QStringLiteral("horizontal_stat"));
        horizontal_stat->setGeometry(QRect(70, 90, 871, 541));
        horizontalLayout = new QHBoxLayout(horizontal_stat);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        le_cadre_2 = new QLabel(tab_3);
        le_cadre_2->setObjectName(QStringLiteral("le_cadre_2"));
        le_cadre_2->setGeometry(QRect(0, 0, 981, 671));
        le_cadre_2->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        le_cadre_2->setScaledContents(true);
        tabWidget->addTab(tab_3, QString());
        le_cadre_2->raise();
        label_3->raise();
        label_15->raise();
        horizontal_stat->raise();

        retranslateUi(employee);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(employee);
    } // setupUi

    void retranslateUi(QDialog *employee)
    {
        employee->setWindowTitle(QApplication::translate("employee", "Gestion des employ\303\251s", Q_NULLPTR));
        label_2->setText(QString());
        pb_supprimer->setText(QApplication::translate("employee", "Supprimer", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("employee", "Modifier", Q_NULLPTR));
        pb_rechercher->setText(QApplication::translate("employee", "Rechercher", Q_NULLPTR));
        pb_statistics->setText(QApplication::translate("employee", "Statistique", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("employee", "Ajouter", Q_NULLPTR));
        le_tri_nom->setText(QApplication::translate("employee", "Tri nom", Q_NULLPTR));
        type->setText(QApplication::translate("employee", "Type ", Q_NULLPTR));
        nom->setText(QApplication::translate("employee", "Nom ", Q_NULLPTR));
        prenom->setText(QApplication::translate("employee", "Prenom", Q_NULLPTR));
        age->setText(QApplication::translate("employee", "Age", Q_NULLPTR));
        matricule->setText(QApplication::translate("employee", "Matricule", Q_NULLPTR));
        label_9->setText(QApplication::translate("employee", "Matricule D", Q_NULLPTR));
        le_tri_age->setText(QApplication::translate("employee", "Tri age", Q_NULLPTR));
        optionspush->setText(QApplication::translate("employee", "options", Q_NULLPTR));
        le_cadre->setText(QString());
        pb_quitter_employe->setText(QApplication::translate("employee", "Quitter", Q_NULLPTR));
        pb_retour_employee->setText(QApplication::translate("employee", "Retour", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("employee", "ajouter", Q_NULLPTR));
        label_3->setText(QString());
        label_15->setText(QApplication::translate("employee", "Statistique ", Q_NULLPTR));
        le_cadre_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("employee", "statistique", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class employee: public Ui_employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEE_H

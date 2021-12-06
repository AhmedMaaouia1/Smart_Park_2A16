/********************************************************************************
** Form generated from reading UI file 'mainwindow0.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW0_H
#define UI_MAINWINDOW0_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainwindow0
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_1;
    QLabel *label_4;
    QLineEdit *lineEdit_username;
    QLabel *user;
    QLabel *password;
    QLineEdit *lineEdit_password;
    QPushButton *login;
    QLabel *label_9;
    QLabel *label;

    void setupUi(QDialog *mainwindow0)
    {
        if (mainwindow0->objectName().isEmpty())
            mainwindow0->setObjectName(QStringLiteral("mainwindow0"));
        mainwindow0->resize(896, 571);
        tabWidget = new QTabWidget(mainwindow0);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 901, 561));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_1 = new QLabel(tab);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(0, 0, 891, 521));
        label_1->setPixmap(QPixmap(QString::fromUtf8("../../Bureau/247590809_624209822325987_6344712974586411864_n.png")));
        label_1->setScaledContents(true);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(380, 50, 151, 61));
        label_4->setStyleSheet(QLatin1String("font: 75 30pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_username = new QLineEdit(tab);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(410, 240, 231, 31));
        lineEdit_username->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));
        user = new QLabel(tab);
        user->setObjectName(QStringLiteral("user"));
        user->setGeometry(QRect(290, 240, 61, 21));
        user->setStyleSheet(QLatin1String("font: 75 18pt \"Arial\";\n"
"color: rgb(255, 255, 255);"));
        password = new QLabel(tab);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(250, 290, 141, 31));
        password->setStyleSheet(QLatin1String("font: 75 18pt \"Arial\";\n"
"color: rgb(255, 255, 255);\n"
""));
        lineEdit_password = new QLineEdit(tab);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(410, 290, 231, 31));
        lineEdit_password->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        login = new QPushButton(tab);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(410, 370, 121, 41));
        login->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));
        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(0, 0, 891, 531));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        label_9->setScaledContents(true);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 470, 47, 14));
        tabWidget->addTab(tab, QString());
        label_1->raise();
        label_9->raise();
        label_4->raise();
        lineEdit_username->raise();
        user->raise();
        password->raise();
        lineEdit_password->raise();
        login->raise();
        label->raise();

        retranslateUi(mainwindow0);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mainwindow0);
    } // setupUi

    void retranslateUi(QDialog *mainwindow0)
    {
        mainwindow0->setWindowTitle(QApplication::translate("mainwindow0", "ZOO'RNI", Q_NULLPTR));
        label_1->setText(QString());
        label_4->setText(QApplication::translate("mainwindow0", "Login", Q_NULLPTR));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QApplication::translate("mainwindow0", "User Name", Q_NULLPTR));
        user->setText(QApplication::translate("mainwindow0", "User", Q_NULLPTR));
        password->setText(QApplication::translate("mainwindow0", "Password", Q_NULLPTR));
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QApplication::translate("mainwindow0", "Password", Q_NULLPTR));
        login->setText(QApplication::translate("mainwindow0", "Login", Q_NULLPTR));
        label_9->setText(QString());
        label->setText(QApplication::translate("mainwindow0", "[+]status", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("mainwindow0", "authentifier", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainwindow0: public Ui_mainwindow0 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW0_H

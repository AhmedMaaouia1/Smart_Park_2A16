/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_client
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QPushButton *pb_supprimer;
    QPushButton *pb_modifier;
    QPushButton *pb_ajouter;
    QPushButton *trie_age;
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
    QLineEdit *recherche;
    QComboBox *comboBox;
    QLabel *label_9;
    QLineEdit *le_matriculd;
    QLabel *label;
    QPushButton *trie_nom;
    QPushButton *trie_prenom;
    QPushButton *pb_statistics;
    QLabel *le_cadre;
    QPushButton *pb_quitter_client;
    QPushButton *pb_retour_client;
    QWidget *tab_3;
    QLabel *label_3;
    QLabel *label_2;
    QFrame *horizontal_stat;
    QHBoxLayout *horizontalLayout;
    QLabel *le_cadre_2;
    QWidget *tab;
    QLineEdit *lineEdit_psswrd_email;
    QPushButton *pushButton_browse_email;
    QTextEdit *textEdit_email;
    QLineEdit *lineEdit_from_email;
    QPushButton *pushButton_send_email;
    QLineEdit *lineEdit_atchmnt_email;
    QLineEdit *lineEdit_subject_email;
    QLineEdit *lineEdit_to_email;
    QLabel *le_cadre_3;
    QWidget *tab_4;
    QPushButton *abrir;
    QPushButton *pause;
    QPushButton *stop;
    QPushButton *play;
    QProgressBar *avance;
    QSlider *volum;
    QPushButton *mute;
    QLabel *le_cadre_4;

    void setupUi(QDialog *client)
    {
        if (client->objectName().isEmpty())
            client->setObjectName(QStringLiteral("client"));
        client->resize(963, 650);
        tabWidget = new QTabWidget(client);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 30, 931, 611));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setAutoFillBackground(false);
        pb_supprimer = new QPushButton(tab_2);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(160, 120, 111, 23));
        pb_modifier = new QPushButton(tab_2);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(160, 150, 111, 23));
        pb_ajouter = new QPushButton(tab_2);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(180, 410, 75, 23));
        trie_age = new QPushButton(tab_2);
        trie_age->setObjectName(QStringLiteral("trie_age"));
        trie_age->setGeometry(QRect(660, 100, 111, 31));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(300, 150, 621, 311));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 619, 309));
        tabemploye = new QTableView(scrollAreaWidgetContents);
        tabemploye->setObjectName(QStringLiteral("tabemploye"));
        tabemploye->setGeometry(QRect(0, 0, 621, 311));
        scrollArea->setWidget(scrollAreaWidgetContents);
        type = new QLabel(tab_2);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(10, 290, 111, 41));
        type->setStyleSheet(QLatin1String("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        nom = new QLabel(tab_2);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(10, 240, 61, 21));
        nom->setStyleSheet(QLatin1String("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        prenom = new QLabel(tab_2);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(10, 270, 91, 21));
        prenom->setStyleSheet(QLatin1String("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        age = new QLabel(tab_2);
        age->setObjectName(QStringLiteral("age"));
        age->setGeometry(QRect(10, 320, 111, 41));
        age->setStyleSheet(QLatin1String("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        matricule = new QLabel(tab_2);
        matricule->setObjectName(QStringLiteral("matricule"));
        matricule->setGeometry(QRect(10, 210, 71, 21));
        matricule->setStyleSheet(QLatin1String("font: 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        le_matricule = new QLineEdit(tab_2);
        le_matricule->setObjectName(QStringLiteral("le_matricule"));
        le_matricule->setGeometry(QRect(160, 210, 113, 20));
        le_nom = new QLineEdit(tab_2);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(160, 300, 113, 20));
        le_prenom = new QLineEdit(tab_2);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(160, 240, 113, 20));
        le_age = new QLineEdit(tab_2);
        le_age->setObjectName(QStringLiteral("le_age"));
        le_age->setGeometry(QRect(160, 330, 113, 20));
        le_type = new QLineEdit(tab_2);
        le_type->setObjectName(QStringLiteral("le_type"));
        le_type->setGeometry(QRect(160, 270, 113, 20));
        recherche = new QLineEdit(tab_2);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(300, 100, 131, 31));
        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(40, 130, 101, 31));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 350, 161, 41));
        label_9->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        le_matriculd = new QLineEdit(tab_2);
        le_matriculd->setObjectName(QStringLiteral("le_matriculd"));
        le_matriculd->setGeometry(QRect(160, 360, 113, 20));
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-50, -15, 1041, 611));
        label->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/charte essai 1.png")));
        label->setScaledContents(true);
        trie_nom = new QPushButton(tab_2);
        trie_nom->setObjectName(QStringLiteral("trie_nom"));
        trie_nom->setGeometry(QRect(780, 100, 101, 31));
        trie_prenom = new QPushButton(tab_2);
        trie_prenom->setObjectName(QStringLiteral("trie_prenom"));
        trie_prenom->setGeometry(QRect(550, 100, 101, 31));
        pb_statistics = new QPushButton(tab_2);
        pb_statistics->setObjectName(QStringLiteral("pb_statistics"));
        pb_statistics->setGeometry(QRect(440, 100, 101, 31));
        le_cadre = new QLabel(tab_2);
        le_cadre->setObjectName(QStringLiteral("le_cadre"));
        le_cadre->setGeometry(QRect(0, 0, 931, 591));
        le_cadre->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        le_cadre->setScaledContents(true);
        pb_quitter_client = new QPushButton(tab_2);
        pb_quitter_client->setObjectName(QStringLiteral("pb_quitter_client"));
        pb_quitter_client->setGeometry(QRect(770, 520, 93, 28));
        pb_retour_client = new QPushButton(tab_2);
        pb_retour_client->setObjectName(QStringLiteral("pb_retour_client"));
        pb_retour_client->setGeometry(QRect(60, 530, 93, 28));
        tabWidget->addTab(tab_2, QString());
        label->raise();
        le_cadre->raise();
        pb_supprimer->raise();
        pb_modifier->raise();
        pb_ajouter->raise();
        trie_age->raise();
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
        recherche->raise();
        comboBox->raise();
        label_9->raise();
        le_matriculd->raise();
        trie_nom->raise();
        trie_prenom->raise();
        pb_statistics->raise();
        pb_quitter_client->raise();
        pb_retour_client->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_3 = new QLabel(tab_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(0, 3, 941, 481));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../../Bureau/247590809_624209822325987_6344712974586411864_n.png")));
        label_3->setScaledContents(true);
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, -10, 941, 601));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/charte essai 1.png")));
        label_2->setScaledContents(true);
        horizontal_stat = new QFrame(tab_3);
        horizontal_stat->setObjectName(QStringLiteral("horizontal_stat"));
        horizontal_stat->setGeometry(QRect(120, 40, 751, 491));
        horizontalLayout = new QHBoxLayout(horizontal_stat);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        le_cadre_2 = new QLabel(tab_3);
        le_cadre_2->setObjectName(QStringLiteral("le_cadre_2"));
        le_cadre_2->setGeometry(QRect(0, 0, 931, 591));
        le_cadre_2->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        le_cadre_2->setScaledContents(true);
        tabWidget->addTab(tab_3, QString());
        le_cadre_2->raise();
        label_2->raise();
        label_3->raise();
        horizontal_stat->raise();
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        lineEdit_psswrd_email = new QLineEdit(tab);
        lineEdit_psswrd_email->setObjectName(QStringLiteral("lineEdit_psswrd_email"));
        lineEdit_psswrd_email->setGeometry(QRect(360, 80, 241, 20));
        lineEdit_psswrd_email->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_psswrd_email->setEchoMode(QLineEdit::Password);
        pushButton_browse_email = new QPushButton(tab);
        pushButton_browse_email->setObjectName(QStringLiteral("pushButton_browse_email"));
        pushButton_browse_email->setGeometry(QRect(520, 140, 91, 21));
        textEdit_email = new QTextEdit(tab);
        textEdit_email->setObjectName(QStringLiteral("textEdit_email"));
        textEdit_email->setGeometry(QRect(20, 200, 771, 201));
        textEdit_email->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_from_email = new QLineEdit(tab);
        lineEdit_from_email->setObjectName(QStringLiteral("lineEdit_from_email"));
        lineEdit_from_email->setGeometry(QRect(20, 80, 331, 20));
        lineEdit_from_email->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pushButton_send_email = new QPushButton(tab);
        pushButton_send_email->setObjectName(QStringLiteral("pushButton_send_email"));
        pushButton_send_email->setGeometry(QRect(520, 170, 91, 23));
        lineEdit_atchmnt_email = new QLineEdit(tab);
        lineEdit_atchmnt_email->setObjectName(QStringLiteral("lineEdit_atchmnt_email"));
        lineEdit_atchmnt_email->setGeometry(QRect(20, 140, 491, 20));
        lineEdit_atchmnt_email->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_subject_email = new QLineEdit(tab);
        lineEdit_subject_email->setObjectName(QStringLiteral("lineEdit_subject_email"));
        lineEdit_subject_email->setGeometry(QRect(20, 170, 491, 20));
        lineEdit_subject_email->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEdit_to_email = new QLineEdit(tab);
        lineEdit_to_email->setObjectName(QStringLiteral("lineEdit_to_email"));
        lineEdit_to_email->setGeometry(QRect(20, 110, 591, 20));
        lineEdit_to_email->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        le_cadre_3 = new QLabel(tab);
        le_cadre_3->setObjectName(QStringLiteral("le_cadre_3"));
        le_cadre_3->setGeometry(QRect(0, 0, 931, 591));
        le_cadre_3->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        le_cadre_3->setScaledContents(true);
        tabWidget->addTab(tab, QString());
        le_cadre_3->raise();
        lineEdit_psswrd_email->raise();
        pushButton_browse_email->raise();
        textEdit_email->raise();
        lineEdit_from_email->raise();
        pushButton_send_email->raise();
        lineEdit_atchmnt_email->raise();
        lineEdit_subject_email->raise();
        lineEdit_to_email->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        abrir = new QPushButton(tab_4);
        abrir->setObjectName(QStringLiteral("abrir"));
        abrir->setGeometry(QRect(70, 50, 93, 28));
        pause = new QPushButton(tab_4);
        pause->setObjectName(QStringLiteral("pause"));
        pause->setGeometry(QRect(270, 50, 93, 28));
        stop = new QPushButton(tab_4);
        stop->setObjectName(QStringLiteral("stop"));
        stop->setGeometry(QRect(370, 50, 93, 28));
        play = new QPushButton(tab_4);
        play->setObjectName(QStringLiteral("play"));
        play->setGeometry(QRect(170, 50, 93, 28));
        avance = new QProgressBar(tab_4);
        avance->setObjectName(QStringLiteral("avance"));
        avance->setGeometry(QRect(80, 100, 381, 21));
        avance->setValue(0);
        volum = new QSlider(tab_4);
        volum->setObjectName(QStringLiteral("volum"));
        volum->setGeometry(QRect(200, 150, 281, 31));
        volum->setOrientation(Qt::Horizontal);
        volum->setTickPosition(QSlider::NoTicks);
        mute = new QPushButton(tab_4);
        mute->setObjectName(QStringLiteral("mute"));
        mute->setGeometry(QRect(70, 150, 93, 28));
        le_cadre_4 = new QLabel(tab_4);
        le_cadre_4->setObjectName(QStringLiteral("le_cadre_4"));
        le_cadre_4->setGeometry(QRect(-10, 0, 941, 591));
        le_cadre_4->setPixmap(QPixmap(QString::fromUtf8("../../../Esprit/2A16/Semestre 1/Projet C++/ZOO'RNI/charte essai 1.png")));
        le_cadre_4->setScaledContents(true);
        tabWidget->addTab(tab_4, QString());
        le_cadre_4->raise();
        abrir->raise();
        pause->raise();
        stop->raise();
        play->raise();
        avance->raise();
        volum->raise();
        mute->raise();

        retranslateUi(client);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(client);
    } // setupUi

    void retranslateUi(QDialog *client)
    {
        client->setWindowTitle(QApplication::translate("client", "Gestion Client", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("client", "Supprimer", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("client", "Modifier", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("client", "Ajouter", Q_NULLPTR));
        trie_age->setText(QApplication::translate("client", "Trier selon age", Q_NULLPTR));
        type->setText(QApplication::translate("client", "Adresse", Q_NULLPTR));
        nom->setText(QApplication::translate("client", "Nom ", Q_NULLPTR));
        prenom->setText(QApplication::translate("client", "Prenom", Q_NULLPTR));
        age->setText(QApplication::translate("client", "Age", Q_NULLPTR));
        matricule->setText(QApplication::translate("client", "ID", Q_NULLPTR));
        recherche->setPlaceholderText(QApplication::translate("client", "Rechercher", Q_NULLPTR));
        label_9->setText(QApplication::translate("client", "<html><head/><body><p><span style=\" font-size:11pt;\">Num telephone</span></p></body></html>", Q_NULLPTR));
        label->setText(QString());
        trie_nom->setText(QApplication::translate("client", "Trier nom", Q_NULLPTR));
        trie_prenom->setText(QApplication::translate("client", "Trier prenom", Q_NULLPTR));
        pb_statistics->setText(QApplication::translate("client", "Statistique", Q_NULLPTR));
        le_cadre->setText(QString());
        pb_quitter_client->setText(QApplication::translate("client", "Quitter", Q_NULLPTR));
        pb_retour_client->setText(QApplication::translate("client", "Retour", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("client", "ajouter", Q_NULLPTR));
        label_3->setText(QString());
        label_2->setText(QString());
        le_cadre_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("client", "statistique", Q_NULLPTR));
        lineEdit_psswrd_email->setPlaceholderText(QApplication::translate("client", "password", Q_NULLPTR));
        pushButton_browse_email->setText(QApplication::translate("client", "Browse...", Q_NULLPTR));
        textEdit_email->setPlaceholderText(QString());
        lineEdit_from_email->setPlaceholderText(QApplication::translate("client", "from", Q_NULLPTR));
        pushButton_send_email->setText(QApplication::translate("client", "send", Q_NULLPTR));
        lineEdit_atchmnt_email->setPlaceholderText(QApplication::translate("client", "attachment", Q_NULLPTR));
        lineEdit_subject_email->setPlaceholderText(QApplication::translate("client", "subject", Q_NULLPTR));
        lineEdit_to_email->setPlaceholderText(QApplication::translate("client", "to", Q_NULLPTR));
        le_cadre_3->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("client", "email", Q_NULLPTR));
        abrir->setText(QApplication::translate("client", "abrir ", Q_NULLPTR));
        pause->setText(QApplication::translate("client", "pause", Q_NULLPTR));
        stop->setText(QApplication::translate("client", "stop", Q_NULLPTR));
        play->setText(QApplication::translate("client", "play", Q_NULLPTR));
        mute->setText(QApplication::translate("client", "mute ", Q_NULLPTR));
        le_cadre_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("client", "Page", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class client: public Ui_client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H

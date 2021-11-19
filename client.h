#ifndef CLIENT_H
#define CLIENT_H
#include <QDialog>
#include <QFileDialog>
#include <QMediaPlayer>
#include <QtCharts>
#include <QChartView>
#include <QPieSeries>
#include "classclient.h"

namespace Ui {
class client;
}

class client : public QDialog
{
    Q_OBJECT

public:
    explicit client(QWidget *parent = nullptr);
    ~client();
private slots:
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_comboBox_activated(const QString &arg1);

    void on_trie_clicked();

    void on_pushButton_browse_email_clicked();

    void on_pushButton_send_email_clicked();
    void mailSent(QString);


    void on_abrir_clicked();
    void on_play_clicked();
    void on_pause_clicked();
    void on_stop_clicked();
    void on_volum_valueChanged(int value);
    void on_mute_clicked();

    void on_trie_age_clicked();

    void on_trie_nom_clicked();

    void on_trie_prenom_clicked();

    void on_recherche_textChanged(const QString &arg1);


    void on_pb_statistics_clicked();

private:
    Ui::client *ui;
    classclient c;
    QStringList files;
    QMediaPlayer *mMediaPlayer ;
};

#endif // CLIENT_H

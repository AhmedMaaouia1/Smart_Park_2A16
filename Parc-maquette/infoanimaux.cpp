#include "infoanimaux.h"
#include "ui_infoanimaux.h"

infoanimaux::infoanimaux(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infoanimaux)
{
    ui->setupUi(this);
}

infoanimaux::~infoanimaux()
{
    delete ui;
}

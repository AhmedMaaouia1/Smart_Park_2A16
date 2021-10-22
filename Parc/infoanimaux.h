#ifndef INFOANIMAUX_H
#define INFOANIMAUX_H

#include <QDialog>

namespace Ui {
class infoanimaux;
}

class infoanimaux : public QDialog
{
    Q_OBJECT

public:
    explicit infoanimaux(QWidget *parent = nullptr);
    ~infoanimaux();

private:
    Ui::infoanimaux *ui;
};

#endif // INFOANIMAUX_H

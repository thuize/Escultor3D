#ifndef DIMENSAO_H
#define DIMENSAO_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class Dimensao;
}

class Dimensao : public QDialog
{
    Q_OBJECT

public:
    explicit Dimensao(QWidget *parent = nullptr);
    ~Dimensao();
    int getDimensaoX();
    int getDimensaoY();
    int getDimensaoZ();

private slots:

    void on_pushButton_NovaEscultura_clicked();

private:
    Ui::Dimensao *ui;
    MainWindow *form2;
};

#endif // DIMENSAO_H

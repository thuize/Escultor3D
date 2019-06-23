#ifndef DIMENSAO_H
#define DIMENSAO_H

#include <QDialog>

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

private:
    Ui::Dimensao *ui;
};

#endif // DIMENSAO_H

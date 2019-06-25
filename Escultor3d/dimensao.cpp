#include "dimensao.h"
#include "ui_dimensao.h"


Dimensao::Dimensao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dimensao)
{
    ui->setupUi(this);
}

Dimensao::~Dimensao()
{
    delete ui;
}
int Dimensao::getDimensaoX()
{
  return ui->horizontalSlider_DimensaoX->value();
}

int Dimensao::getDimensaoY()
{
  return ui->horizontalSlider_DimensaoY->value();
}

int Dimensao::getDimensaoZ()
{
  return ui->horizontalSlider_DimensaoZ->value();
}


void Dimensao::on_pushButton_NovaEscultura_clicked()
{
    form2 = new MainWindow(this);
    form2->show();

}

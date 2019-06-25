#include "dimensao.h"
#include "ui_dimensao.h"
#include "QDialog"
#include "sculptor.h"
#include "QMessageBox"
#include "QString"

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
  return ui->lcdNumber_DimensaoX->value();
}

int Dimensao::getDimensaoY()
{
  return ui->lcdNumber_DimensaoY->value();
}

int Dimensao::getDimensaoZ()
{
  return ui->lcdNumber_DimensaoZ->value();
}


void Dimensao::on_pushButton_NovaEscultura_clicked()
{
    //hide();
    form2 = new MainWindow(this);
    form2->show();
    int Dx=getDimensaoX();
    int Dy=getDimensaoY();
    int Dz=getDimensaoZ();
    Sculptor a(Dz,Dy,Dx);

    QMessageBox box;
    QString msg;
    msg = "x = <b>"+QString::number(Dx)+"</b> <br>"+
        "y = <b>"+QString::number(Dy)+"</b> <br>"+
        "z = <b>"+QString::number(Dz)+"</b>";
    box.setText(msg);
    box.exec();
}

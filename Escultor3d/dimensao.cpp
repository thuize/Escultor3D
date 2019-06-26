#include "dimensao.h"
#include "ui_dimensao.h"
#include "QDialog"
#include "sculptor.h"
#include "QMessageBox"
#include "QString"
/**
 * @brief Dimensao::Dimensao
 * @details Método construtor da classe Dimensao
 * @param parent
 */
Dimensao::Dimensao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dimensao)
{
    ui->setupUi(this);
}
/**
 * @brief Dimensao::~Dimensao
 * @details Método destrutor da classe Dimensao
 */
Dimensao::~Dimensao()
{
    delete ui;
}
/**
 * @brief Dimensao::getDimensaoX
 * @return Valor da dimensão de x
 * @details Método responsável por recuperar o valor da dimensão x mostrada no lcd number.
 */
int Dimensao::getDimensaoX()
{
  return ui->lcdNumber_DimensaoX->value();
}
/**
 * @brief Dimensao::getDimensaoY
 * @return Valor da dimensão de y
 * @details Método responsável por recuperar o valor da dimensão y mostrada no lcd number.
 */
int Dimensao::getDimensaoY()
{
  return ui->lcdNumber_DimensaoY->value();
}
/**
 * @brief Dimensao::getDimensaoZ
 * @return Valor da dimensão de z
 * @details Método responsável por recuperar o valor da dimensão z mostrada no lcd number.
 */
int Dimensao::getDimensaoZ()
{
  return ui->lcdNumber_DimensaoZ->value();
}

/**
 * @brief Dimensao::on_pushButton_NovaEscultura_clicked
 * @details Método responsável por criar uma nova escultura ao evento de clique do botão
 */
void Dimensao::on_pushButton_NovaEscultura_clicked()
{
    //hide();
    form2 = new MainWindow(this);
    form2->show();
    int Dx=getDimensaoX();
    int Dy=getDimensaoY();
    int Dz=getDimensaoZ();

    QMessageBox box;
    QString msg;
    msg = "x = <b>"+QString::number(Dx)+"</b> <br>"+
        "y = <b>"+QString::number(Dy)+"</b> <br>"+
        "z = <b>"+QString::number(Dz)+"</b>";
    box.setText(msg);
    box.exec();
    _X=Dx;
    _Y=Dy;
    _Z=Dz;
}


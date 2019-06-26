#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QColorDialog>
#include <QColor>
#include <QAction>
#include "dimensao.h"
#include "sculptor.h"
/**
 *	@file		mainwindow.cpp
 *	@brief		Classe MainWindow
 *	@author		Thuize Thainá
 *  @author     Felipe Lima
 *	@date		25/05/2019
 *	@since		25/05/2019
 */
static Sculptor a(_Z,_Y,_Z);
/**
 * @brief MainWindow::MainWindow
 * @details Construtor da classe MainWindow
 * @param parent
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
/**
 * @brief MainWindow::~MainWindow
 * @details Método Destrutor da classe MainWindow
 */
MainWindow::~MainWindow()
{
    delete ui;
}
/**
 * @brief MainWindow::on_pushButton_Novo_clicked
 * @details Método responsável por criar o escultor com base nos valores das coordenadas passadas.
 */
void MainWindow::on_pushButton_Novo_clicked()
{
    Sculptor a(_Z,_Y,_Z);
}

/**
 * @brief MainWindow::on_pushButton_SelecionaCor_clicked
 * @details Método responsável por coletar a cor fornecida na nova janela aberta para esse fim.
 */
void MainWindow::on_pushButton_SelecionaCor_clicked()
{

    float r, g, b;
    QColor cor;
    QMessageBox box;
    QString msg;
    QColorDialog d;
    d.exec();
    cor = d.selectedColor();
    lineColor = cor;
    r = cor.red();
    g = cor.green();
    b = cor.blue();
    msg = "r = <b>"+QString::number(r)+"</b> <br>"+
           "g = <b>"+QString::number(g)+"</b> <br>"+
           "b = <b>"+QString::number(b)+"</b>";
    a.setColor(_red,_green,_blue,0.0);
    box.setText(msg);
    box.exec();
    repaint();



}

/**
 * @brief MainWindow::getPosicaoX
 * @return Valor da posição x
 * @details Método responsável por recuperar o valor da posição x exibido no lcd number.
 */
int MainWindow::getPosicaoX()
{
    return ui->lcdNumber_PosicaoX->value();
}
/**
 * @brief MainWindow::getPosicaoY
 * @return Valor da posição y
 * @details Método responsável por recuperar o valor da posição y exibido no lcd number.
 */
int MainWindow::getPosicaoY()
{
    return ui->lcdNumber_PosicaoY->value();
}
/**
 * @brief MainWindow::getPosicaoZ
 * @return Valor da posição z
 * @details Método responsável por recuperar o valor da posição z exibido no lcd number.
 */
int MainWindow::getPosicaoZ()
{
    return ui->lcdNumber_PosicaoZ->value();
}
/**
 * @brief MainWindow::posicaoAtual
 * @details Método responsável por recuperar o valor das coordenadas na posição atual
 */
void MainWindow::posicaoAtual()
{

    Px=getPosicaoX();
    Py=getPosicaoY();
    Pz=getPosicaoZ();

}
/**
 * @brief MainWindow::on_pushButton_putVoxel_clicked
 * @details Método responsável pela crição do voxel ao clique do botão putVoxel
 */
void MainWindow::on_pushButton_putVoxel_clicked()
{
    posicaoAtual();
    a.setColor((_red/255),(_green/255),(_blue/255),0.0);
    a.putVoxel(Px,Py,Pz);

}
/**
 * @brief MainWindow::on_pushButton_Salvar_clicked
 * @details Método responsável por salvar o arquivo no formato .off ao clique do botão salvar.
 */
void MainWindow::on_pushButton_Salvar_clicked()
{
    a.writeOFF("testeM.OFF");
}



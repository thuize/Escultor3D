#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QString>
#include <QColorDialog>
#include <QColor>
#include <QAction>
#include "dimensao.h"
#include "sculptor.h"

static Sculptor a(_Z,_Y,_Z);

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Novo_clicked()
{
    Sculptor a(_Z,_Y,_Z);
}


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


int MainWindow::getPosicaoX()
{
    return ui->lcdNumber_PosicaoX->value();
}
int MainWindow::getPosicaoY()
{
    return ui->lcdNumber_PosicaoY->value();
}
int MainWindow::getPosicaoZ()
{
    return ui->lcdNumber_PosicaoZ->value();
}

void MainWindow::posicaoAtual()
{

    Px=getPosicaoX();
    Py=getPosicaoY();
    Pz=getPosicaoZ();

}

void MainWindow::on_pushButton_putVoxel_clicked()
{
    posicaoAtual();
    a.setColor((_red/255),(_green/255),(_blue/255),0.0);
    a.putVoxel(Px,Py,Pz);

}

void MainWindow::on_pushButton_Salvar_clicked()
{
    a.writeOFF("testeM.OFF");
}



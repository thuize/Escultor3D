#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sculptor.h"
#include "newsculptor.h"
#include <QMessageBox>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    Sculptor *a;
    int zz=10; int yy=10; int xx=10;
    a = new Sculptor(zz,yy,xx);

    ui->setupUi(this);

    connect(ui->actionNew,
             SIGNAL(triggered(bool)),
             this,
             SLOT(newsculptor()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newSculptor()
{
  QMessageBox box;
  QString msg;
  newSculptor dialog;

  if(dialog.exec() == QDialog::Accepted){
    box.exec();
  }
}

void MainWindow::on_pushButton_clicked()
{
    int r, g, b;
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
    box.setText(msg);
    box.exec();
    repaint();
}

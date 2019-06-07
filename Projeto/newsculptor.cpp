#include "newsculptor.h"
#include "ui_newsculptor.h"

newSculptor::newSculptor(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::newSculptor)
{
  ui->setupUi(this);
}

newSculptor::~newSculptor()
{
  delete ui;
}

int newSculptor::getX()
{
  return ui->horizontalSliderR->value();
}

int newSculptor::getY()
{
  return ui->horizontalSliderG->value();
}

int newSculptor::getZ()
{
  return ui->horizontalSliderB->value();
}


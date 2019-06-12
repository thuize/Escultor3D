#ifndef NEWSCULPTOR_H
#define NEWSCULPTOR_H

#include <QDialog>

namespace Ui{

class newSculptor;
}

class newSculptor: public QDialog
{

    Q_OBJECT

public:
   explicit newSculptor(QWidget *parent);
   ~newSculptor();
   int getX();
   int getY();
   int getZ();

private:
   Ui::newSculptor *ui;
};


#endif // NEWSCULPTOR_H

#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>

/**
 * @brief Plotter::Plotter
 * @param parent
 */
Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}
/**
 * @brief Plotter::paintEvent
 * @param event
 * @details Método responsável por executar as instruções de desenho dos voxels e figuras geométricas.
 */
void Plotter::paintEvent(QPaintEvent *event)
{

    Dimensao dx,dy,dz;
    int x,y,z;
   /* x=width()/dx.getDimensaoX();
    y=height()/dy.getDimensaoY();
    z=dz.getDimensaoZ();
    if(x==NULL || y==NULL || z==NULL){*/
        x=100,y=100,z=100;
    //}
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0,0,0));
    pen.setWidth(1);

    painter.setBrush(brush);
    painter.setPen(pen);

    // XY

   for(int i =0; i<width();i=i+x){
        for(int j =0; j<height();j=j+x){

            painter.drawRect(i,j,x,y);


        }
    }

}

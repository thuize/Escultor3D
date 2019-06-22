#include "plotter.h"
#include <Qpainter>
#include <QBrush>
#include <QPen>


Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(0,0,0));
    pen.setWidth(1);

    painter.setBrush(brush);
    painter.setPen(pen);

    for(int i =0; i<width(); i= i+5){
        for(int j =0; j<height(); j = j+5){
            painter.drawRect(i,j,5,5);

}
}
}

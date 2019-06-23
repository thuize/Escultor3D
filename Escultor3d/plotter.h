#ifndef PLOTTER_H
#define PLOTTER_H

#include <QObject>
#include <QWidget>
#include "sculptor.h"
#include "dimensao.h"

class Plotter : public QWidget
{
    Q_OBJECT

public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void drawClick(QPaintEvent *event);

signals:

public slots:
};

#endif // PLOTTER_H

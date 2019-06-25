#include "mainwindow.h"
#include "dimensao.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dimensao w;
    w.show();

    return a.exec();
}

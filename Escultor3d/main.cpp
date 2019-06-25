#include "mainwindow.h"
#include "dimensao.h"
#include <QApplication>
/**
 *	@file		main.cpp
 *	@brief		Arquivo main
 *	@author		Thuize Thainá
 *  @author     Felipe Lima
 *	@date		25/05/2019
 *	@since		25/05/2019
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dimensao w;
    w.show();

    return a.exec();
}

#ifndef PLOTTER_H
#define PLOTTER_H
/**
 *	@file		plotter.h
 *	@brief		Classe Plotter
 *	@author		Thuize Thainá
 *  @author     Felipe Lima
 *	@date		25/05/2019
 *	@since		25/05/2019
 */
#include <QObject>
#include <QWidget>
#include "sculptor.h"
#include "dimensao.h"
/**
 * @class Classe Plotter
 * @brief Classe responsável pela exibição e manipulação do desenho na matriz 3D.
 */
class Plotter : public QWidget
{
    Q_OBJECT

public:
    /**
     * @brief Plotter
     * @param parent
     */
    explicit Plotter(QWidget *parent = nullptr);
    /**
     * @brief paintEvent
     * @param event
     */
    void paintEvent(QPaintEvent *event);
    /**
     * @brief drawClick
     * @param event
     */
    void drawClick(QPaintEvent *event);

signals:

public slots:
};

#endif // PLOTTER_H

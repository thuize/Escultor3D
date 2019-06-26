#ifndef DIMENSAO_H
#define DIMENSAO_H
/**
 *	@file		dimensao.h
 *	@brief		Classe Dimensao
 *	@author		Thuize Thainá
 *  @author     Felipe Lima
 *	@date		25/05/2019
 *	@since		25/05/2019
 */
#include <QDialog>
#include "mainwindow.h"

// VARIAVEIS GLOBAIS PARA ARMEZENAR O TAMANHO DA MATRIZ


namespace Ui {
/**
 * @class Classe Dimensao
 * @brief Classe responsável por definir as dimensões do escultor.
 */
class Dimensao;
}

class Dimensao : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief Dimensao
     * @param parent
     */
    explicit Dimensao(QWidget *parent = nullptr);
    /**
     * @brief Destrutor da classe dimensao
     * **/
    ~Dimensao();
    /**
     * @brief getDimensaoX
     * @return valor de x
     */
    int getDimensaoX();
    /**
     * @brief getDimensaoY
     * @return valor de y
     */
    int getDimensaoY();
    /**
     * @brief getDimensaoZ
     * @return valor de z
     */
    int getDimensaoZ();

public slots:

private slots:

    void on_pushButton_NovaEscultura_clicked();

private:
    Ui::Dimensao *ui;
    MainWindow *form2;
};

#endif // DIMENSAO_H

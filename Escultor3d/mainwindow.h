#ifndef MAINWINDOW_H
#define MAINWINDOW_H
/**
 *	@file		mainwindow.h
 *	@brief		Classe MainWindow
 *	@author		Thuize Thainá
 *  @author     Felipe Lima
 *	@date		25/05/2019
 *	@since		25/05/2019
 */
#include <QMainWindow>
#include <QColor>
/**
 * @brief _X
 */
static int _X=99;
/**
 * @brief _Y
 */
static int _Y=99;
/**
 * @brief _Z
 */
static int _Z=99;
/**
 * @brief Px
 */
static int Px;
/**
 * @brief Py
 */
static int Py;
/**
 * @brief Pz
 */
static int Pz;

namespace Ui {
/**
 * @class Classe MainWindow
 * @brief Classe que corresponde a tela principal do programa
 */
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    /**
     * @brief criaMatriz
     */
    void criaMatriz();
    /**
     * @brief getPosicaoX
     * @return
     */
    int getPosicaoX();
    /**
     * @brief getPosicaoY
     * @return
     */
    int getPosicaoY();
    /**
     * @brief getPosicaoZ
     * @return
     */
    int getPosicaoZ();
    /**
     * @brief posicaoAtual
     */
    void posicaoAtual();


private:
    Ui::MainWindow *ui;
    /**
     * @brief lineColor
     */
    QColor lineColor;
    /**
     * @brief actionMudaCor
     */
    QAction *actionMudaCor;
    /**
     * @brief cor
     */
    int cor;
    /**
     * @brief _red
     */
    float _red;
    /**
     * @brief _green
     */
    float _green;
    /**
     * @brief _blue
     */
    float _blue;

public slots:
//void mudaCor();
private slots:
 /**
 * @brief on_pushButton_SelecionaCor_clicked
 * @details Método para a ação de mudar a cor do desenho
 */
void on_pushButton_SelecionaCor_clicked();
/**
 * @brief on_pushButton_putVoxel_clicked
 * @details Método para a ação de clique do botão putVoxel
 */
void on_pushButton_putVoxel_clicked();
/**
 * @brief on_pushButton_Salvar_clicked
 * @details Método para a ação de clique no botão de salvar
 */
void on_pushButton_Salvar_clicked();
/**
 * @brief on_pushButton_Novo_clicked
 * @details Método para a ação de clique do botão de novo
 */
void on_pushButton_Novo_clicked();
void on_pushButton_cutVoxel_clicked();
void on_pushButton_putRect_clicked();
int getx1Rect();
int getz1Rect();
int gety1Rect();
void on_pushButton_cutRect_clicked();
void on_pushButton_putSphere_clicked();
int getRadiusSphere();
void on_pushButton_cutSphere_clicked();
int getRXEllipsoid();
int getRYEllipsoid();
int getRZEllipsoid();
void on_pushButton_putEllipsoid_clicked();
void on_pushButton_cutEllipsoid_clicked();
};


#endif // MAINWINDOW_H

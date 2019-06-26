#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColor>

static int _X=99;
static int _Y=99;
static int _Z=99;
static int Px;
static int Py;
static int Pz;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void criaMatriz();
    int getPosicaoX();
    int getPosicaoY();
    int getPosicaoZ();
    void posicaoAtual();


private:
    Ui::MainWindow *ui;
    QColor lineColor;
    QAction *actionMudaCor;
    int cor;
    float _red;
    float _green;
    float _blue;

public slots:
//void mudaCor();
private slots:
void on_pushButton_SelecionaCor_clicked();
void on_pushButton_putVoxel_clicked();
void on_pushButton_Salvar_clicked();
void on_pushButton_Novo_clicked();
};


#endif // MAINWINDOW_H

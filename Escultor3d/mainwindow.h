#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QColor>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int getPosicaoX();
    int getPosicaoY();
    int getPosicaoZ();
    void posicaoAtual();

private:
    Ui::MainWindow *ui;
    QColor lineColor;
    QAction *actionMudaCor;
    int cor;


public slots:
//void mudaCor();
private slots:
void on_pushButton_SelecionaCor_clicked();


void on_pushButton_3_toggled(bool checked);
void on_pushButton_3_clicked();
};


#endif // MAINWINDOW_H

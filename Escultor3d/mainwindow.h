#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <Qcolor>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QColor lineColor;
    QAction *actionMudaCor;
    int cor;


public slots:
//void mudaCor();
private slots:
void on_pushButton_SelecionaCor_clicked(bool checked);
};


#endif // MAINWINDOW_H
/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNovo;
    QAction *actionSalvar_off;
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *pushButton_Novo;
    QPushButton *pushButton_Salvar;
    QPushButton *pushButton_putVoxel;
    QPushButton *pushButton_cutVoxel;
    QPushButton *pushButton_SelecionaCor;
    QHBoxLayout *horizontalLayout_14;
    Plotter *widget;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalSlider_Xsculptor;
    QLCDNumber *lcdNumber_PosicaoX;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSlider *horizontalSlider_Ysculptor;
    QLCDNumber *lcdNumber_PosicaoY;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSlider *horizontalSlider_Zsculptor;
    QLCDNumber *lcdNumber_PosicaoZ;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *pushButton_putRect;
    QPushButton *pushButton_cutRect;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QSlider *horizontalSlider_Xret;
    QLCDNumber *lcdNumber_Xret;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QSlider *horizontalSlider_Yret;
    QLCDNumber *lcdNumber_Yret;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_8;
    QSlider *horizontalSlider_Zret;
    QLCDNumber *lcdNumber_Zret;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton_putSphere;
    QPushButton *pushButton_cutSphere;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_10;
    QSlider *horizontalSlider_RaioEsfera;
    QLCDNumber *lcdNumber_RaioEsfera;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *pushButton_putEllipsoid;
    QPushButton *pushButton_cutEllipsoid;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_10;
    QSlider *horizontalSlider_Xellipsoid;
    QLCDNumber *lcdNumber_Xellipsoid;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QSlider *horizontalSlider_Yellipsoid;
    QLCDNumber *lcdNumber_Yellipsoid;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_12;
    QSlider *horizontalSlider_Zellipsoid;
    QLCDNumber *lcdNumber_Zellipsoid;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(684, 623);
        actionNovo = new QAction(MainWindow);
        actionNovo->setObjectName(QString::fromUtf8("actionNovo"));
        actionSalvar_off = new QAction(MainWindow);
        actionSalvar_off->setObjectName(QString::fromUtf8("actionSalvar_off"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1, 10, 661, 541));
        verticalLayout_11 = new QVBoxLayout(layoutWidget);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        pushButton_Novo = new QPushButton(layoutWidget);
        pushButton_Novo->setObjectName(QString::fromUtf8("pushButton_Novo"));

        horizontalLayout_15->addWidget(pushButton_Novo);

        pushButton_Salvar = new QPushButton(layoutWidget);
        pushButton_Salvar->setObjectName(QString::fromUtf8("pushButton_Salvar"));

        horizontalLayout_15->addWidget(pushButton_Salvar);

        pushButton_putVoxel = new QPushButton(layoutWidget);
        pushButton_putVoxel->setObjectName(QString::fromUtf8("pushButton_putVoxel"));

        horizontalLayout_15->addWidget(pushButton_putVoxel);

        pushButton_cutVoxel = new QPushButton(layoutWidget);
        pushButton_cutVoxel->setObjectName(QString::fromUtf8("pushButton_cutVoxel"));

        horizontalLayout_15->addWidget(pushButton_cutVoxel);

        pushButton_SelecionaCor = new QPushButton(layoutWidget);
        pushButton_SelecionaCor->setObjectName(QString::fromUtf8("pushButton_SelecionaCor"));

        horizontalLayout_15->addWidget(pushButton_SelecionaCor);


        verticalLayout_11->addLayout(horizontalLayout_15);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        widget = new Plotter(layoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));

        horizontalLayout_14->addWidget(widget);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSlider_Xsculptor = new QSlider(layoutWidget);
        horizontalSlider_Xsculptor->setObjectName(QString::fromUtf8("horizontalSlider_Xsculptor"));
        horizontalSlider_Xsculptor->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_Xsculptor);

        lcdNumber_PosicaoX = new QLCDNumber(layoutWidget);
        lcdNumber_PosicaoX->setObjectName(QString::fromUtf8("lcdNumber_PosicaoX"));

        horizontalLayout->addWidget(lcdNumber_PosicaoX);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSlider_Ysculptor = new QSlider(layoutWidget);
        horizontalSlider_Ysculptor->setObjectName(QString::fromUtf8("horizontalSlider_Ysculptor"));
        horizontalSlider_Ysculptor->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_Ysculptor);

        lcdNumber_PosicaoY = new QLCDNumber(layoutWidget);
        lcdNumber_PosicaoY->setObjectName(QString::fromUtf8("lcdNumber_PosicaoY"));

        horizontalLayout_2->addWidget(lcdNumber_PosicaoY);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        horizontalSlider_Zsculptor = new QSlider(layoutWidget);
        horizontalSlider_Zsculptor->setObjectName(QString::fromUtf8("horizontalSlider_Zsculptor"));
        horizontalSlider_Zsculptor->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_Zsculptor);

        lcdNumber_PosicaoZ = new QLCDNumber(layoutWidget);
        lcdNumber_PosicaoZ->setObjectName(QString::fromUtf8("lcdNumber_PosicaoZ"));

        horizontalLayout_3->addWidget(lcdNumber_PosicaoZ);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_10->addLayout(verticalLayout_2);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_5->addWidget(label_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        pushButton_putRect = new QPushButton(layoutWidget);
        pushButton_putRect->setObjectName(QString::fromUtf8("pushButton_putRect"));

        horizontalLayout_13->addWidget(pushButton_putRect);

        pushButton_cutRect = new QPushButton(layoutWidget);
        pushButton_cutRect->setObjectName(QString::fromUtf8("pushButton_cutRect"));

        horizontalLayout_13->addWidget(pushButton_cutRect);


        verticalLayout_3->addLayout(horizontalLayout_13);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        horizontalSlider_Xret = new QSlider(layoutWidget);
        horizontalSlider_Xret->setObjectName(QString::fromUtf8("horizontalSlider_Xret"));
        horizontalSlider_Xret->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_Xret);

        lcdNumber_Xret = new QLCDNumber(layoutWidget);
        lcdNumber_Xret->setObjectName(QString::fromUtf8("lcdNumber_Xret"));

        horizontalLayout_4->addWidget(lcdNumber_Xret);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        horizontalSlider_Yret = new QSlider(layoutWidget);
        horizontalSlider_Yret->setObjectName(QString::fromUtf8("horizontalSlider_Yret"));
        horizontalSlider_Yret->setOrientation(Qt::Horizontal);

        horizontalLayout_5->addWidget(horizontalSlider_Yret);

        lcdNumber_Yret = new QLCDNumber(layoutWidget);
        lcdNumber_Yret->setObjectName(QString::fromUtf8("lcdNumber_Yret"));

        horizontalLayout_5->addWidget(lcdNumber_Yret);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_6->addWidget(label_8);

        horizontalSlider_Zret = new QSlider(layoutWidget);
        horizontalSlider_Zret->setObjectName(QString::fromUtf8("horizontalSlider_Zret"));
        horizontalSlider_Zret->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_Zret);

        lcdNumber_Zret = new QLCDNumber(layoutWidget);
        lcdNumber_Zret->setObjectName(QString::fromUtf8("lcdNumber_Zret"));

        horizontalLayout_6->addWidget(lcdNumber_Zret);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_9->addLayout(verticalLayout_5);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        pushButton_putSphere = new QPushButton(layoutWidget);
        pushButton_putSphere->setObjectName(QString::fromUtf8("pushButton_putSphere"));

        horizontalLayout_11->addWidget(pushButton_putSphere);

        pushButton_cutSphere = new QPushButton(layoutWidget);
        pushButton_cutSphere->setObjectName(QString::fromUtf8("pushButton_cutSphere"));

        horizontalLayout_11->addWidget(pushButton_cutSphere);


        verticalLayout_7->addLayout(horizontalLayout_11);

        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        verticalLayout_7->addWidget(label_13);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSlider_RaioEsfera = new QSlider(layoutWidget);
        horizontalSlider_RaioEsfera->setObjectName(QString::fromUtf8("horizontalSlider_RaioEsfera"));
        horizontalSlider_RaioEsfera->setOrientation(Qt::Horizontal);

        horizontalLayout_10->addWidget(horizontalSlider_RaioEsfera);

        lcdNumber_RaioEsfera = new QLCDNumber(layoutWidget);
        lcdNumber_RaioEsfera->setObjectName(QString::fromUtf8("lcdNumber_RaioEsfera"));

        horizontalLayout_10->addWidget(lcdNumber_RaioEsfera);


        verticalLayout_7->addLayout(horizontalLayout_10);


        verticalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_8->addWidget(label_9);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        pushButton_putEllipsoid = new QPushButton(layoutWidget);
        pushButton_putEllipsoid->setObjectName(QString::fromUtf8("pushButton_putEllipsoid"));

        horizontalLayout_12->addWidget(pushButton_putEllipsoid);

        pushButton_cutEllipsoid = new QPushButton(layoutWidget);
        pushButton_cutEllipsoid->setObjectName(QString::fromUtf8("pushButton_cutEllipsoid"));

        horizontalLayout_12->addWidget(pushButton_cutEllipsoid);


        verticalLayout_8->addLayout(horizontalLayout_12);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_7->addWidget(label_10);

        horizontalSlider_Xellipsoid = new QSlider(layoutWidget);
        horizontalSlider_Xellipsoid->setObjectName(QString::fromUtf8("horizontalSlider_Xellipsoid"));
        horizontalSlider_Xellipsoid->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(horizontalSlider_Xellipsoid);

        lcdNumber_Xellipsoid = new QLCDNumber(layoutWidget);
        lcdNumber_Xellipsoid->setObjectName(QString::fromUtf8("lcdNumber_Xellipsoid"));

        horizontalLayout_7->addWidget(lcdNumber_Xellipsoid);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_8->addWidget(label_11);

        horizontalSlider_Yellipsoid = new QSlider(layoutWidget);
        horizontalSlider_Yellipsoid->setObjectName(QString::fromUtf8("horizontalSlider_Yellipsoid"));
        horizontalSlider_Yellipsoid->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(horizontalSlider_Yellipsoid);

        lcdNumber_Yellipsoid = new QLCDNumber(layoutWidget);
        lcdNumber_Yellipsoid->setObjectName(QString::fromUtf8("lcdNumber_Yellipsoid"));

        horizontalLayout_8->addWidget(lcdNumber_Yellipsoid);


        verticalLayout_6->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_9->addWidget(label_12);

        horizontalSlider_Zellipsoid = new QSlider(layoutWidget);
        horizontalSlider_Zellipsoid->setObjectName(QString::fromUtf8("horizontalSlider_Zellipsoid"));
        horizontalSlider_Zellipsoid->setOrientation(Qt::Horizontal);

        horizontalLayout_9->addWidget(horizontalSlider_Zellipsoid);

        lcdNumber_Zellipsoid = new QLCDNumber(layoutWidget);
        lcdNumber_Zellipsoid->setObjectName(QString::fromUtf8("lcdNumber_Zellipsoid"));

        horizontalLayout_9->addWidget(lcdNumber_Zellipsoid);


        verticalLayout_6->addLayout(horizontalLayout_9);


        verticalLayout_8->addLayout(verticalLayout_6);


        verticalLayout_9->addLayout(verticalLayout_8);


        verticalLayout_10->addLayout(verticalLayout_9);


        horizontalLayout_14->addLayout(verticalLayout_10);

        horizontalLayout_14->setStretch(0, 70);
        horizontalLayout_14->setStretch(1, 30);

        verticalLayout_11->addLayout(horizontalLayout_14);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 684, 21));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QString::fromUtf8("menuArquivo"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuArquivo->addAction(actionNovo);
        menuArquivo->addAction(actionSalvar_off);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_Xellipsoid, SIGNAL(sliderMoved(int)), lcdNumber_Xellipsoid, SLOT(display(int)));
        QObject::connect(horizontalSlider_Yellipsoid, SIGNAL(sliderMoved(int)), lcdNumber_Yellipsoid, SLOT(display(int)));
        QObject::connect(horizontalSlider_Zellipsoid, SIGNAL(sliderMoved(int)), lcdNumber_Zellipsoid, SLOT(display(int)));
        QObject::connect(horizontalSlider_RaioEsfera, SIGNAL(sliderMoved(int)), lcdNumber_RaioEsfera, SLOT(display(int)));
        QObject::connect(horizontalSlider_Zret, SIGNAL(sliderMoved(int)), lcdNumber_Zret, SLOT(display(int)));
        QObject::connect(horizontalSlider_Yret, SIGNAL(sliderMoved(int)), lcdNumber_Yret, SLOT(display(int)));
        QObject::connect(horizontalSlider_Xret, SIGNAL(sliderMoved(int)), lcdNumber_Xret, SLOT(display(int)));
        QObject::connect(horizontalSlider_Zsculptor, SIGNAL(sliderMoved(int)), lcdNumber_PosicaoZ, SLOT(display(int)));
        QObject::connect(horizontalSlider_Ysculptor, SIGNAL(sliderMoved(int)), lcdNumber_PosicaoY, SLOT(display(int)));
        QObject::connect(horizontalSlider_Xsculptor, SIGNAL(sliderMoved(int)), lcdNumber_PosicaoX, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNovo->setText(QApplication::translate("MainWindow", "Novo", nullptr));
        actionSalvar_off->setText(QApplication::translate("MainWindow", "Salvar .off", nullptr));
        pushButton_Novo->setText(QApplication::translate("MainWindow", "Novo", nullptr));
        pushButton_Salvar->setText(QApplication::translate("MainWindow", "Salvar", nullptr));
        pushButton_putVoxel->setText(QApplication::translate("MainWindow", "Put Voxel", nullptr));
        pushButton_cutVoxel->setText(QApplication::translate("MainWindow", "Cut Voxel", nullptr));
        pushButton_SelecionaCor->setText(QApplication::translate("MainWindow", "Selecionar Cor", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Percorrer Matriz", nullptr));
        label->setText(QApplication::translate("MainWindow", "X", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Y", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Z", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Ret\303\242ngulo", nullptr));
        pushButton_putRect->setText(QApplication::translate("MainWindow", "Put Rect", nullptr));
        pushButton_cutRect->setText(QApplication::translate("MainWindow", "Cut Rect", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "X", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Y", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Z", nullptr));
        pushButton_putSphere->setText(QApplication::translate("MainWindow", "Put Sphere", nullptr));
        pushButton_cutSphere->setText(QApplication::translate("MainWindow", "Cut Sphere", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Raio esfera", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Raio Elipsoide", nullptr));
        pushButton_putEllipsoid->setText(QApplication::translate("MainWindow", "Put Ellipsoid", nullptr));
        pushButton_cutEllipsoid->setText(QApplication::translate("MainWindow", "Cut Ellipsoid", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "X", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Y", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "Z", nullptr));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'dimensao.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIMENSAO_H
#define UI_DIMENSAO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dimensao
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *horizontalSlider_DimensaoX;
    QLCDNumber *lcdNumber_DimensaoX;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSlider *horizontalSlider_DimensaoY;
    QLCDNumber *lcdNumber_DimensaoY;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSlider *horizontalSlider_DimensaoZ;
    QLCDNumber *lcdNumber_DimensaoZ;
    QPushButton *pushButton_NovaEscultura;

    void setupUi(QDialog *Dimensao)
    {
        if (Dimensao->objectName().isEmpty())
            Dimensao->setObjectName(QString::fromUtf8("Dimensao"));
        Dimensao->resize(197, 151);
        layoutWidget = new QWidget(Dimensao);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 12, 170, 118));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSlider_DimensaoX = new QSlider(layoutWidget);
        horizontalSlider_DimensaoX->setObjectName(QString::fromUtf8("horizontalSlider_DimensaoX"));
        horizontalSlider_DimensaoX->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(horizontalSlider_DimensaoX);

        lcdNumber_DimensaoX = new QLCDNumber(layoutWidget);
        lcdNumber_DimensaoX->setObjectName(QString::fromUtf8("lcdNumber_DimensaoX"));

        horizontalLayout->addWidget(lcdNumber_DimensaoX);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSlider_DimensaoY = new QSlider(layoutWidget);
        horizontalSlider_DimensaoY->setObjectName(QString::fromUtf8("horizontalSlider_DimensaoY"));
        horizontalSlider_DimensaoY->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_DimensaoY);

        lcdNumber_DimensaoY = new QLCDNumber(layoutWidget);
        lcdNumber_DimensaoY->setObjectName(QString::fromUtf8("lcdNumber_DimensaoY"));

        horizontalLayout_2->addWidget(lcdNumber_DimensaoY);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSlider_DimensaoZ = new QSlider(layoutWidget);
        horizontalSlider_DimensaoZ->setObjectName(QString::fromUtf8("horizontalSlider_DimensaoZ"));
        horizontalSlider_DimensaoZ->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider_DimensaoZ);

        lcdNumber_DimensaoZ = new QLCDNumber(layoutWidget);
        lcdNumber_DimensaoZ->setObjectName(QString::fromUtf8("lcdNumber_DimensaoZ"));

        horizontalLayout_3->addWidget(lcdNumber_DimensaoZ);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_NovaEscultura = new QPushButton(layoutWidget);
        pushButton_NovaEscultura->setObjectName(QString::fromUtf8("pushButton_NovaEscultura"));

        verticalLayout->addWidget(pushButton_NovaEscultura);


        retranslateUi(Dimensao);
        QObject::connect(horizontalSlider_DimensaoZ, SIGNAL(sliderMoved(int)), lcdNumber_DimensaoZ, SLOT(display(int)));
        QObject::connect(horizontalSlider_DimensaoY, SIGNAL(sliderMoved(int)), lcdNumber_DimensaoY, SLOT(display(int)));
        QObject::connect(horizontalSlider_DimensaoX, SIGNAL(sliderMoved(int)), lcdNumber_DimensaoX, SLOT(display(int)));

        QMetaObject::connectSlotsByName(Dimensao);
    } // setupUi

    void retranslateUi(QDialog *Dimensao)
    {
        Dimensao->setWindowTitle(QApplication::translate("Dimensao", "Dialog", nullptr));
        label->setText(QApplication::translate("Dimensao", "X", nullptr));
        label_2->setText(QApplication::translate("Dimensao", "Y", nullptr));
        label_3->setText(QApplication::translate("Dimensao", "Z", nullptr));
        pushButton_NovaEscultura->setText(QApplication::translate("Dimensao", "Nova Escultura", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dimensao: public Ui_Dimensao {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIMENSAO_H

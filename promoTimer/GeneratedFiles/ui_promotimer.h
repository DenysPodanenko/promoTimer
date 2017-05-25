/********************************************************************************
** Form generated from reading UI file 'promotimer.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROMOTIMER_H
#define UI_PROMOTIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_promoTimerClass
{
public:
    QWidget *centralWidget;
    QSpinBox *breakLength;
    QSpinBox *sesionLength;
    QLabel *timerText;
    QPushButton *btnStart;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *promoTimerClass)
    {
        if (promoTimerClass->objectName().isEmpty())
            promoTimerClass->setObjectName(QStringLiteral("promoTimerClass"));
        promoTimerClass->resize(693, 644);
        centralWidget = new QWidget(promoTimerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        breakLength = new QSpinBox(centralWidget);
        breakLength->setObjectName(QStringLiteral("breakLength"));
        breakLength->setGeometry(QRect(140, 250, 161, 31));
        sesionLength = new QSpinBox(centralWidget);
        sesionLength->setObjectName(QStringLiteral("sesionLength"));
        sesionLength->setGeometry(QRect(350, 250, 171, 31));
        timerText = new QLabel(centralWidget);
        timerText->setObjectName(QStringLiteral("timerText"));
        timerText->setGeometry(QRect(150, 330, 341, 111));
        btnStart = new QPushButton(centralWidget);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setGeometry(QRect(350, 210, 93, 28));
        promoTimerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(promoTimerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 693, 26));
        promoTimerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(promoTimerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        promoTimerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(promoTimerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        promoTimerClass->setStatusBar(statusBar);

        retranslateUi(promoTimerClass);

        QMetaObject::connectSlotsByName(promoTimerClass);
    } // setupUi

    void retranslateUi(QMainWindow *promoTimerClass)
    {
        promoTimerClass->setWindowTitle(QApplication::translate("promoTimerClass", "promoTimer", 0));
        timerText->setText(QApplication::translate("promoTimerClass", "TextLabel", 0));
        btnStart->setText(QApplication::translate("promoTimerClass", "START", 0));
    } // retranslateUi

};

namespace Ui {
    class promoTimerClass: public Ui_promoTimerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROMOTIMER_H

/********************************************************************************
** Form generated from reading UI file 'demoqtgui1.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMOQTGUI1_H
#define UI_DEMOQTGUI1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_demoqtgui1Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *demoqtgui1Class)
    {
        if (demoqtgui1Class->objectName().isEmpty())
            demoqtgui1Class->setObjectName(QString::fromUtf8("demoqtgui1Class"));
        demoqtgui1Class->resize(600, 400);
        menuBar = new QMenuBar(demoqtgui1Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        demoqtgui1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(demoqtgui1Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        demoqtgui1Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(demoqtgui1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        demoqtgui1Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(demoqtgui1Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        demoqtgui1Class->setStatusBar(statusBar);

        retranslateUi(demoqtgui1Class);

        QMetaObject::connectSlotsByName(demoqtgui1Class);
    } // setupUi

    void retranslateUi(QMainWindow *demoqtgui1Class)
    {
        demoqtgui1Class->setWindowTitle(QCoreApplication::translate("demoqtgui1Class", "demoqtgui1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class demoqtgui1Class: public Ui_demoqtgui1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMOQTGUI1_H

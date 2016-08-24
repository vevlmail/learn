/********************************************************************************
** Form generated from reading UI file 'scalesmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCALESMANAGER_H
#define UI_SCALESMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScalesManagerClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ScalesManagerClass)
    {
        if (ScalesManagerClass->objectName().isEmpty())
            ScalesManagerClass->setObjectName(QStringLiteral("ScalesManagerClass"));
        ScalesManagerClass->resize(600, 400);
        menuBar = new QMenuBar(ScalesManagerClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ScalesManagerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ScalesManagerClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ScalesManagerClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ScalesManagerClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ScalesManagerClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ScalesManagerClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ScalesManagerClass->setStatusBar(statusBar);

        retranslateUi(ScalesManagerClass);

        QMetaObject::connectSlotsByName(ScalesManagerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ScalesManagerClass)
    {
        ScalesManagerClass->setWindowTitle(QApplication::translate("ScalesManagerClass", "ScalesManager", 0));
    } // retranslateUi

};

namespace Ui {
    class ScalesManagerClass: public Ui_ScalesManagerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCALESMANAGER_H

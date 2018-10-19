/********************************************************************************
** Form generated from reading UI file 'opengl_no1.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENGL_NO1_H
#define UI_OPENGL_NO1_H

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

class Ui_OpenGL_NO1Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OpenGL_NO1Class)
    {
        if (OpenGL_NO1Class->objectName().isEmpty())
            OpenGL_NO1Class->setObjectName(QStringLiteral("OpenGL_NO1Class"));
        OpenGL_NO1Class->resize(600, 400);
        menuBar = new QMenuBar(OpenGL_NO1Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        OpenGL_NO1Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OpenGL_NO1Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OpenGL_NO1Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(OpenGL_NO1Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        OpenGL_NO1Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(OpenGL_NO1Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OpenGL_NO1Class->setStatusBar(statusBar);

        retranslateUi(OpenGL_NO1Class);

        QMetaObject::connectSlotsByName(OpenGL_NO1Class);
    } // setupUi

    void retranslateUi(QMainWindow *OpenGL_NO1Class)
    {
        OpenGL_NO1Class->setWindowTitle(QApplication::translate("OpenGL_NO1Class", "OpenGL_NO1", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenGL_NO1Class: public Ui_OpenGL_NO1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENGL_NO1_H

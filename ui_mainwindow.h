/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *input_button;
    QPushButton *new_button;
    QPushButton *difference_button;
    QPushButton *add_button;
    QTextBrowser *textBrowser;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(592, 327);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        input_button = new QPushButton(centralWidget);
        input_button->setObjectName(QStringLiteral("input_button"));
        input_button->setGeometry(QRect(450, 70, 111, 23));
        new_button = new QPushButton(centralWidget);
        new_button->setObjectName(QStringLiteral("new_button"));
        new_button->setGeometry(QRect(450, 120, 111, 23));
        difference_button = new QPushButton(centralWidget);
        difference_button->setObjectName(QStringLiteral("difference_button"));
        difference_button->setGeometry(QRect(450, 220, 111, 23));
        add_button = new QPushButton(centralWidget);
        add_button->setObjectName(QStringLiteral("add_button"));
        add_button->setGeometry(QRect(450, 170, 111, 23));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(30, 30, 401, 261));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        input_button->setText(QApplication::translate("MainWindow", "Input", Q_NULLPTR));
        new_button->setText(QApplication::translate("MainWindow", "Creare Indicator", Q_NULLPTR));
        difference_button->setText(QApplication::translate("MainWindow", "Distan\310\233a Hamming", Q_NULLPTR));
        add_button->setText(QApplication::translate("MainWindow", "Ad\304\203ugare progres", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

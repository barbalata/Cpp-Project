#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "second_windows.h"
#include "third_window.h"

#include <stdio.h>
#include <QFileDialog>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <fstream>

using namespace std;


float in_real[100],in_prop[100],an[100],luna[100],zi[100];
int nr=0;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_input_button_clicked()
{
    QString source =
        QFileDialog::getOpenFileName(this, "Open a file", "./",
                "Text file (*.txt)");

    ifstream f(qUtf8Printable(source));
    int i = 0;

    while(f>>in_real[i]) {
        f>>in_prop[i]>>an[i]>>luna[i]>>zi[i];
        i++;
    }

    nr = i;
}

void MainWindow::on_new_button_clicked()
{
    Second_windows secwind;
    secwind.setModal(true);
    secwind.exec();
}

void MainWindow::on_add_button_clicked()
{
    Third_window thirdwind;
    thirdwind.setModal(true);
    thirdwind.exec();
}

void MainWindow::on_difference_button_clicked()
{

    float prop=0,real=0;
    int i;
    for(i=0;i<nr;i++)
    {
        prop += in_prop[i];
        real += in_real[i];
    }

    float H;

    H = prop - real;
    H = (H*100) / prop;

    QFile file("hamming.txt");

    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream stream(&file);

        stream<<"Data\tIndicatori propusi\tIndicatori realizati\n\n";

        for(i=0;i<nr;i++)
            stream<<zi[i]<<"-"<<luna[i]<<"-"<<an[i]<<"\t"<<in_prop[i]<<"\t\t"<<in_real[i]<<endl;

        stream<<endl<<endl<<"Distanta Hamming = "<<H;
        stream.flush();
        file.close();
    }

    QFile file2("hamming.txt");

    file2.open(QIODevice::ReadOnly);

    QTextStream in(&file2);

    QString content = in.readAll();

    file2.close();

    ui->textBrowser->setText(content);
}




#include "third_windows.h"
#include "ui_third_windows.h"

#include "second_windows.h"

#include <QLabel>
#include <QDateTimeEdit>
#include <QDoubleSpinBox>
#include <QVBoxLayout>
#include <QtGui>
#include <QSpinBox>
#include <QRadioButton>
#include <QDoubleSpinBox>

#include <iostream>
using namespace std;

Third_windows::Third_windows(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Third_windows)
{
    ui->setupUi(this);

    //////////          DATE SETTING            //////////
    ui->time_set_data->setDisplayFormat("dd MMM yyyy");

    ui->time_set_data->setDateTime( QDateTime::currentDateTime() );
    ui->time_set_data->setMaximumDateTime(QDateTime::currentDateTime());

    //////////          DOUBLESPIN SETTING      //////////
    ui->progress_nr->setMinimum(0);
    ui->progress_nr->setMaximum(1.0);
    ui->progress_nr->setSingleStep(0.01);
}

Third_windows::~Third_windows()
{
    delete ui;


}

void Third_windows::on_end_button_clicked()
{
    if(var1 < nr_spin)
        ui->end_button->setText("Adăugare element.");
        i++;
    }

    ui->end_button->setText("Am terminat!");
}

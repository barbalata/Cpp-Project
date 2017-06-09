#include "third_window.h"
#include "ui_third_window.h"
#include "ui_second_windows.h"

#include <iostream>
#include <stdio.h>



#include <QDateTime>
#include <QLabel>
#include <QDateTimeEdit>
#include <QDoubleSpinBox>
#include <QVBoxLayout>
#include <QtGui>
#include <QSpinBox>
#include <QRadioButton>
#include <QDoubleSpinBox>
#include <QFileDialog>
#include <QFile>
#include <QStringBuilder>
#include <QVariant>

using namespace std;

Third_window::Third_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Third_window)
{
    ui->setupUi(this);

    //////////          BUTTON SETTING          //////////
    ui->address_button->setText("Alegeți un director");
    ui->save_button->setText("Nesalvat");
    ui->address_button->setText("Nesalvat");

    //////////          UNIT SPIN SETTING       //////////
    ui->time_unit_spin->setMinimum(0);
    ui->time_unit_spin->setMaximum(1000);
    ui->time_unit_spin->setSingleStep(1);

    //////////          DATE SETTING            //////////
    ui->time_set_data->setDisplayFormat("dd.MM.yy");
    ui->time_set_data->setDateTime( QDateTime::currentDateTime() );

    //////////          PROGRESS SETTING        //////////
    ui->progress_spin->setMinimum(0);
    ui->progress_spin->setMaximum(1000);
    ui->progress_spin->setSingleStep(5);

    //////////          PROPOSEED SETTING       //////////
    ui->proposed_spin->setMinimum(0);
    ui->proposed_spin->setMaximum(1000);
    ui->proposed_spin->setSingleStep(5);
}

Third_window::~Third_window()
{
    delete ui;
}

/////////////////// BOX 1 ////////////////////////////

void Third_window::on_address_button_clicked()
{
    link_file =
            QFileDialog::getOpenFileName(this, "Open a file", "/home/user/Downloads",
                    "Text file (*.txt)");
    ui->address_button->setText("Director ales.");
}

/////////////////// BOX 2 ////////////////////////////
void Third_window::on_time_unit_month_clicked()
{
    time_unit_clik = false;
}

void Third_window::on_time_unit_year_clicked()
{
    time_unit_clik = true;
}

void Third_window::on_save_button_clicked()
{
    var1 = 0;

    if(time_unit_clik == true){
        if(ui->time_unit_spin->value() == 1){
            ui->time_unit_spin->setSuffix(" an");
        }
        else{
            ui->time_unit_spin->setSuffix(" ani");
        }
    }
    else{
        if(ui->time_unit_spin->value() == 1){
            ui->time_unit_spin->setSuffix(" lună");
        }
        else{
            ui->time_unit_spin->setSuffix(" luni");
        }
    }

    ui->save_button->setText("Salvat");
}


/////////////////// BOX 3 ////////////////////////////
void Third_window::on_end_button_2_clicked()
{
    //////////          BUTTON TEXT           //////////
    if(var1+1 == ui->time_unit_spin->value()){
        ui->end_button_2->setText("Adăugare finalizată");
    }

    if(var1+1 == ui->time_unit_spin->value()+1){
        this->reject();
    }

    //////////          GET PROGRESS         //////////
    QString progress_value = QString::number(ui->progress_spin->value());

    //////////          GET PROPOSED         //////////
    QString proposed_value = QString::number(ui->proposed_spin->value());

    //////////          GET DATA             //////////

    ui->time_set_data->setDisplayFormat("yyyy MM dd");
    QString date_value = ui->time_set_data->text();
    ui->time_set_data->setDisplayFormat("dd.MM.yy");

    //////////          OPEN FILE            //////////
    QFile new_item(link_file);
    new_item.open(QIODevice::Append);

    //////////       ADD INFORMATIONS       //////////
    QTextStream stream(&new_item);
    if(var1 < ui->time_unit_spin->value()){
         stream << progress_value << " " <<  proposed_value << " " << date_value << " ";
    }

    var1++;
}

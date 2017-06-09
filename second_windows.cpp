#include "second_windows.h"
#include "ui_second_windows.h"

#include "third_window.h"


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

#include <fstream>

#include <iostream>
using namespace std;

Second_windows::Second_windows(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Second_windows)
{
    ui->setupUi(this);

    //////////          BUTTON SETTING          //////////
    ui->link_button->setText("Alegeți un director");
    ui->save_button->setText("Nesalvat");
    ui->save_button_2->setText("Nesalvat");

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

Second_windows::~Second_windows()
{
    delete ui;
}

/////////////////// BOX 1 ////////////////////////////

void Second_windows::on_link_button_clicked()
{
    link_file =
        QFileDialog::getExistingDirectory(this,
                                          tr("Open Directory"),
                                          "/home/user/Downloads",
                                          QFileDialog::ShowDirsOnly| QFileDialog::DontResolveSymlinks);
    ui->link_button->setText("Director ales.");
}

void Second_windows::on_save_button_2_clicked()
{
    QString source = link_file % QString("/")% ui->title_edit->displayText() % QString(".txt");
    cout<<endl<<qUtf8Printable(source)<<endl;

    QFile new_item(source);

    link_file = source;

    if(new_item.open(QIODevice::WriteOnly) == true){
        cout<<"DA"<<endl;
    }
    else{
        cout<<"NU"<<endl;
    }

    ui->save_button_2->setText("Salvat");
}

/////////////////// BOX 2 ////////////////////////////
void Second_windows::on_time_unit_year_clicked()
{
    time_unit_clik = true;
}

void Second_windows::on_time_unit_month_clicked()
{
    time_unit_clik = false;
}

void Second_windows::on_save_button_clicked()
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


void Second_windows::on_end_button_2_clicked()
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


#include "add_2.h"
#include "ui_add_2.h"

#include <QDateTimeEdit>
#include <QDoubleSpinBox>

#include <iostream>
using namespace std;

add_2::add_2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_2)
{
    ui->setupUi(this);


}

add_2::~add_2()
{
    delete ui;
}

void add_2::on_time_set_data_editingFinished()
{

    //cout<<ui->time_set_data->visibleRegion();
}

void add_2::on_progress_nr_editingFinished()
{

}

void add_2::on_progress_ok_clicked()
{

}

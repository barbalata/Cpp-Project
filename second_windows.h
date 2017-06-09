#ifndef SECOND_WINDOWS_H
#define SECOND_WINDOWS_H

#include <QDialog>
#include <QFile>

namespace Ui {
class Second_windows;
}

class Second_windows : public QDialog
{
    Q_OBJECT

public:

    QString link_file;

    int var1;
    bool time_unit_clik;


    explicit Second_windows(QWidget *parent = 0);
    ~Second_windows();

    void changePrecision(int decimals);

private slots:

    void on_time_unit_year_clicked();

    void on_time_unit_month_clicked();

    void on_end_button_2_clicked();

    void on_link_button_clicked();

    void on_save_button_2_clicked();

    void on_save_button_clicked();

private:
    Ui::Second_windows *ui;
};

#endif // SECOND_WINDOWS_H

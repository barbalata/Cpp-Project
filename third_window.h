#ifndef THIRD_WINDOW_H
#define THIRD_WINDOW_H

#include <QDialog>

namespace Ui {
class Third_window;
}

class Third_window : public QDialog
{
    Q_OBJECT

public:
    int var1;
    QString link_file;
    bool time_unit_clik;

    explicit Third_window(QWidget *parent = 0);
    ~Third_window();

private slots:

    void on_address_button_clicked();

    void on_save_button_clicked();

    void on_time_unit_month_clicked();

    void on_time_unit_year_clicked();

    void on_end_button_2_clicked();

private:
    Ui::Third_window *ui;
};

#endif // THIRD_WINDOW_H

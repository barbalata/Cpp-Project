#ifndef ADD_2_H
#define ADD_2_H

#include <QDialog>

namespace Ui {
class add_2;
}

class add_2 : public QDialog
{
    Q_OBJECT

public:
    explicit add_2(QWidget *parent = 0);
    ~add_2();

private slots:
    void on_time_set_data_editingFinished();

    void on_progress_nr_editingFinished();

    void on_progress_ok_clicked();

private:
    Ui::add_2 *ui;
};

#endif // ADD_2_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_difference_button_clicked();

    void on_input_button_clicked();

    void on_new_button_clicked();

    void on_add_button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

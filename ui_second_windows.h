/********************************************************************************
** Form generated from reading UI file 'second_windows.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECOND_WINDOWS_H
#define UI_SECOND_WINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Second_windows
{
public:
    QLabel *main_title_lable;
    QGroupBox *name_box;
    QPushButton *save_button_2;
    QLabel *title_label;
    QLineEdit *title_edit;
    QLabel *link_label;
    QPushButton *link_button;
    QGroupBox *add_box;
    QLabel *time_set_lable;
    QDateEdit *time_set_data;
    QLabel *progress_label;
    QPushButton *end_button_2;
    QLabel *proposed_label;
    QSpinBox *progress_spin;
    QSpinBox *proposed_spin;
    QGroupBox *time_box;
    QRadioButton *time_unit_month;
    QPushButton *save_button;
    QSpinBox *time_unit_spin;
    QLabel *time_unit_2;
    QLabel *time_unit_lable_1;
    QRadioButton *time_unit_year;

    void setupUi(QDialog *Second_windows)
    {
        if (Second_windows->objectName().isEmpty())
            Second_windows->setObjectName(QStringLiteral("Second_windows"));
        Second_windows->resize(526, 533);
        Second_windows->setMouseTracking(false);
        main_title_lable = new QLabel(Second_windows);
        main_title_lable->setObjectName(QStringLiteral("main_title_lable"));
        main_title_lable->setGeometry(QRect(20, 10, 193, 19));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(12);
        font.setBold(false);
        font.setUnderline(true);
        font.setWeight(50);
        main_title_lable->setFont(font);
        name_box = new QGroupBox(Second_windows);
        name_box->setObjectName(QStringLiteral("name_box"));
        name_box->setGeometry(QRect(20, 50, 481, 91));
        save_button_2 = new QPushButton(name_box);
        save_button_2->setObjectName(QStringLiteral("save_button_2"));
        save_button_2->setGeometry(QRect(380, 60, 75, 23));
        title_label = new QLabel(name_box);
        title_label->setObjectName(QStringLiteral("title_label"));
        title_label->setGeometry(QRect(20, 50, 181, 16));
        title_edit = new QLineEdit(name_box);
        title_edit->setObjectName(QStringLiteral("title_edit"));
        title_edit->setGeometry(QRect(210, 50, 111, 20));
        link_label = new QLabel(name_box);
        link_label->setObjectName(QStringLiteral("link_label"));
        link_label->setGeometry(QRect(20, 20, 191, 16));
        link_button = new QPushButton(name_box);
        link_button->setObjectName(QStringLiteral("link_button"));
        link_button->setGeometry(QRect(210, 20, 111, 23));
        add_box = new QGroupBox(Second_windows);
        add_box->setObjectName(QStringLiteral("add_box"));
        add_box->setGeometry(QRect(20, 310, 481, 191));
        time_set_lable = new QLabel(add_box);
        time_set_lable->setObjectName(QStringLiteral("time_set_lable"));
        time_set_lable->setGeometry(QRect(20, 40, 91, 16));
        time_set_data = new QDateEdit(add_box);
        time_set_data->setObjectName(QStringLiteral("time_set_data"));
        time_set_data->setGeometry(QRect(210, 40, 110, 22));
        progress_label = new QLabel(add_box);
        progress_label->setObjectName(QStringLiteral("progress_label"));
        progress_label->setGeometry(QRect(20, 80, 191, 16));
        end_button_2 = new QPushButton(add_box);
        end_button_2->setObjectName(QStringLiteral("end_button_2"));
        end_button_2->setGeometry(QRect(374, 160, 101, 23));
        proposed_label = new QLabel(add_box);
        proposed_label->setObjectName(QStringLiteral("proposed_label"));
        proposed_label->setGeometry(QRect(20, 120, 191, 16));
        progress_spin = new QSpinBox(add_box);
        progress_spin->setObjectName(QStringLiteral("progress_spin"));
        progress_spin->setGeometry(QRect(210, 80, 111, 22));
        proposed_spin = new QSpinBox(add_box);
        proposed_spin->setObjectName(QStringLiteral("proposed_spin"));
        proposed_spin->setGeometry(QRect(210, 120, 111, 22));
        end_button_2->raise();
        time_set_lable->raise();
        time_set_data->raise();
        progress_label->raise();
        proposed_label->raise();
        progress_spin->raise();
        proposed_spin->raise();
        time_box = new QGroupBox(Second_windows);
        time_box->setObjectName(QStringLiteral("time_box"));
        time_box->setGeometry(QRect(20, 150, 481, 151));
        time_unit_month = new QRadioButton(time_box);
        time_unit_month->setObjectName(QStringLiteral("time_unit_month"));
        time_unit_month->setGeometry(QRect(210, 30, 82, 17));
        save_button = new QPushButton(time_box);
        save_button->setObjectName(QStringLiteral("save_button"));
        save_button->setGeometry(QRect(380, 110, 75, 23));
        time_unit_spin = new QSpinBox(time_box);
        time_unit_spin->setObjectName(QStringLiteral("time_unit_spin"));
        time_unit_spin->setGeometry(QRect(210, 80, 101, 22));
        time_unit_spin->setMinimumSize(QSize(101, 22));
        time_unit_spin->setMaximumSize(QSize(101, 16777215));
        time_unit_2 = new QLabel(time_box);
        time_unit_2->setObjectName(QStringLiteral("time_unit_2"));
        time_unit_2->setGeometry(QRect(20, 80, 181, 16));
        time_unit_lable_1 = new QLabel(time_box);
        time_unit_lable_1->setObjectName(QStringLiteral("time_unit_lable_1"));
        time_unit_lable_1->setGeometry(QRect(20, 30, 151, 16));
        time_unit_year = new QRadioButton(time_box);
        time_unit_year->setObjectName(QStringLiteral("time_unit_year"));
        time_unit_year->setGeometry(QRect(210, 50, 82, 17));

        retranslateUi(Second_windows);

        QMetaObject::connectSlotsByName(Second_windows);
    } // setupUi

    void retranslateUi(QDialog *Second_windows)
    {
        Second_windows->setWindowTitle(QApplication::translate("Second_windows", "Dialog", Q_NULLPTR));
        main_title_lable->setText(QApplication::translate("Second_windows", "Creare indicator", Q_NULLPTR));
        name_box->setTitle(QApplication::translate("Second_windows", "Crearea indicatorului", Q_NULLPTR));
        save_button_2->setText(QApplication::translate("Second_windows", "Salvare!", Q_NULLPTR));
        title_label->setText(QApplication::translate("Second_windows", "Numele proiectului", Q_NULLPTR));
        link_label->setText(QApplication::translate("Second_windows", "Unde salva\310\233i indicatorul?", Q_NULLPTR));
        link_button->setText(QString());
        add_box->setTitle(QApplication::translate("Second_windows", "Ad\304\203ugarea indicatorilor de performan\310\233\304\203", Q_NULLPTR));
        time_set_lable->setText(QApplication::translate("Second_windows", "Data inregistr\304\203rii:", Q_NULLPTR));
        progress_label->setText(QApplication::translate("Second_windows", "C\303\242t a\310\233i f\304\203cut? (unit\304\203\310\233i)", Q_NULLPTR));
        end_button_2->setText(QApplication::translate("Second_windows", "Ad\304\203ugare element", Q_NULLPTR));
        proposed_label->setText(QApplication::translate("Second_windows", "C\303\242t v-a\310\233i propus s\304\203 face\310\233i? (unit\304\203\310\233i)", Q_NULLPTR));
        time_box->setTitle(QApplication::translate("Second_windows", "Timpul de lucru", Q_NULLPTR));
        time_unit_month->setText(QApplication::translate("Second_windows", "Luni", Q_NULLPTR));
        save_button->setText(QApplication::translate("Second_windows", "Salvare", Q_NULLPTR));
        time_unit_2->setText(QApplication::translate("Second_windows", "C\303\242t timp ave\310\233i la dispozi\310\233ie?", Q_NULLPTR));
        time_unit_lable_1->setText(QApplication::translate("Second_windows", "Ce unitate de m\304\203sur\304\203 folosi\310\233i?", Q_NULLPTR));
        time_unit_year->setText(QApplication::translate("Second_windows", "Ani", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Second_windows: public Ui_Second_windows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECOND_WINDOWS_H

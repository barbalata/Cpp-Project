/********************************************************************************
** Form generated from reading UI file 'third_window.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRD_WINDOW_H
#define UI_THIRD_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Third_window
{
public:
    QLabel *main_title_lable;
    QGroupBox *name_box;
    QLabel *address_label;
    QPushButton *address_button;
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

    void setupUi(QDialog *Third_window)
    {
        if (Third_window->objectName().isEmpty())
            Third_window->setObjectName(QStringLiteral("Third_window"));
        Third_window->resize(514, 482);
        main_title_lable = new QLabel(Third_window);
        main_title_lable->setObjectName(QStringLiteral("main_title_lable"));
        main_title_lable->setGeometry(QRect(20, 10, 193, 19));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(12);
        font.setBold(false);
        font.setUnderline(true);
        font.setWeight(50);
        main_title_lable->setFont(font);
        name_box = new QGroupBox(Third_window);
        name_box->setObjectName(QStringLiteral("name_box"));
        name_box->setGeometry(QRect(20, 50, 481, 61));
        address_label = new QLabel(name_box);
        address_label->setObjectName(QStringLiteral("address_label"));
        address_label->setGeometry(QRect(20, 20, 341, 16));
        address_button = new QPushButton(name_box);
        address_button->setObjectName(QStringLiteral("address_button"));
        address_button->setGeometry(QRect(360, 20, 101, 23));
        add_box = new QGroupBox(Third_window);
        add_box->setObjectName(QStringLiteral("add_box"));
        add_box->setGeometry(QRect(20, 280, 481, 191));
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
        time_box = new QGroupBox(Third_window);
        time_box->setObjectName(QStringLiteral("time_box"));
        time_box->setGeometry(QRect(20, 120, 481, 151));
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

        retranslateUi(Third_window);

        QMetaObject::connectSlotsByName(Third_window);
    } // setupUi

    void retranslateUi(QDialog *Third_window)
    {
        Third_window->setWindowTitle(QApplication::translate("Third_window", "Dialog", Q_NULLPTR));
        main_title_lable->setText(QApplication::translate("Third_window", "Ad\304\203ugarea indicatorilor", Q_NULLPTR));
        name_box->setTitle(QApplication::translate("Third_window", "Adresa indicatorului", Q_NULLPTR));
        address_label->setText(QApplication::translate("Third_window", "Introduce\310\233i fi\310\231iereul", Q_NULLPTR));
        address_button->setText(QString());
        add_box->setTitle(QApplication::translate("Third_window", "Ad\304\203ugarea indicatorilor de performan\310\233\304\203", Q_NULLPTR));
        time_set_lable->setText(QApplication::translate("Third_window", "Data inregistr\304\203rii:", Q_NULLPTR));
        progress_label->setText(QApplication::translate("Third_window", "C\303\242t a\310\233i f\304\203cut? (unit\304\203\310\233i)", Q_NULLPTR));
        end_button_2->setText(QApplication::translate("Third_window", "Ad\304\203ugare element", Q_NULLPTR));
        proposed_label->setText(QApplication::translate("Third_window", "C\303\242t v-a\310\233i propus s\304\203 face\310\233i? (unit\304\203\310\233i)", Q_NULLPTR));
        time_box->setTitle(QApplication::translate("Third_window", "Timpul de lucru", Q_NULLPTR));
        time_unit_month->setText(QApplication::translate("Third_window", "Luni", Q_NULLPTR));
        save_button->setText(QApplication::translate("Third_window", "Salvare", Q_NULLPTR));
        time_unit_2->setText(QApplication::translate("Third_window", "C\303\242t timp ave\310\233i la dispozi\310\233ie?", Q_NULLPTR));
        time_unit_lable_1->setText(QApplication::translate("Third_window", "Ce unitate de m\304\203sur\304\203 folosi\310\233i?", Q_NULLPTR));
        time_unit_year->setText(QApplication::translate("Third_window", "Ani", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Third_window: public Ui_Third_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRD_WINDOW_H

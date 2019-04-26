/**
 * @file gui.h
 * @version 1.0
 * @date 25/04/19-
 * @authors angelortizv
 * @title
 * @brief
 */

#ifndef GUI_H
#define GUI_H

#include <QDialog>
#include <iostream>
#include "src/Utils.h"
#include "src/Vehicles.h"

using namespace std;

namespace Ui {
class gui;
}

class gui : public QDialog
{
    Q_OBJECT

public:
    explicit gui(QWidget *parent = 0);
    ~gui();


private slots:
    void on_pushButton_clicked();

    void on_cv1_clicked();
    void on_cv2_clicked();
    void on_cv3_clicked();
    void on_cv4_clicked();
    void on_cv5_clicked();
    void on_cv6_clicked();

private:
    Ui::gui *ui;
};

#endif // GUI_H

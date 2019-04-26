/**
 * @file mainwindow.h
 * @version 1.0
 * @date 25/04/19-
 * @authors angelortizv
 * @title
 * @brief
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ui_mainwindow.h"
#include "gui.h"
#include "about.h"

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
    void on_startButton_clicked();

    void on_acercade_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

/**
 * @file mainwindow.h
 * @version 1.0
 * @date 21/04/19-28/04/19
 * @authors angelortiz
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include "src/util.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_exit_Button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

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
#include "src/util/util.h"

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

    void on_exitButton_clicked();

    void on_infoButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

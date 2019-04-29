/**
 * @file principal.h
 * @version 1.0
 * @date 21/04/19-28/04/19
 * @authors angelortiz, isolis2000, jesquivel48, JoseAgus00
 */

#ifndef PRINCIPAL_H
#define PRINCIPAL_H

#include "mainwindow.h"
#include <unistd.h>
#include <iostream>
#include <string>
#include <QApplication>
#include <QProgressBar>
#include <QLabel>
#include <QString>
#include <QDebug>
#include <thread>
#include <QListWidget>
#include <queue>
#include <iostream>
#include "src/vehicle.h"
#include "dataStructures/queueAux/queue.h"

using namespace std;

class principal {

private:
    Queue vehiclesQueue;
    Queue processesQueue;
    Vehicle* vehicles[6]={};
    bool queueArray[6]={};

    MainWindow* w;
    QLabel** ArrayL;
    QProgressBar** ArrayB;
    QLabel* LabelSec;
    QListWidget* List;

public:
    principal(MainWindow *w, QLabel **ArrayL, QProgressBar **ArrayB);
    void update();
    void updateCycle();
    void factoryProcesses();
};


#endif // PRINCIPAL_H

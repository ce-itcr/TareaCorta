#include "mainwindow.h"
#include "src/processes.h"
#include "dataStructures/queueAux/queue.h"
#include "src/principal.h"
#include <unistd.h>
#include <iostream>
#include <QApplication>
#include <QProgressBar>
#include <QLabel>
#include <QString>
#include <QDebug>
#include <thread>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    QLabel* ArrayL[6]={};
    QProgressBar* ArrayB[6]={};

    principal* E=new principal(&w,ArrayL,ArrayB);
    E->generateBars();

    w.show();

    thread t(&principal::updateCycle,E);
    return a.exec();
}

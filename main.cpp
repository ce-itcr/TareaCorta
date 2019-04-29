#include "mainwindow.h"
#include "src/principal.h"
#include <iostream>
#include <QApplication>
#include <thread>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    Util* utils = &Util::getInstance();
    principal* main = new principal(&w,utils->ArrayL,utils->ArrayB);
    main->factoryProcesses();

    w.show();
    thread t(&principal::updateCycle,main);
    return a.exec();
}

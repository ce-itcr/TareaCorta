/**
 * @file util.h
 * @version 1.0
 * @date 21/04/19-28/04/19
 * @authors angelortizv
 */

#ifndef UTIL_H
#define UTIL_H

#include <iostream>
#include <ctime>
#include <sstream>
#include <cstdlib>
#include <QLabel>
#include <QProgressBar>

using namespace std;

class Util
{
public:
    static Util& getInstance(){
        static Util instance;
        return instance;
    }
    Util();
    string getDate();
    QLabel* ArrayL[6]={};
    QProgressBar* ArrayB[6]={};
    static int car1Num;
    static int car2Num;
    static int car3Num;
    static int car4Num;
    static int car5Num;
    static int car6Num;
};

#endif // UTIL_H

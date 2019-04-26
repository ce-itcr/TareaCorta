/**
 * @file Vehicles.h
 * @version 1.0
 * @date 21/04/19-
 * @authors isolis2000
 * @title
 * @brief
 */

#ifndef VEHICLES_H
#define VEHICLES_H

#include "Vehicle.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <unistd.h>
#include "../dataStructures/queue/Queue.h"

class Vehicles {

private:
    int stopWatch1=0;
    int stopWatch2=0;
    int stopWatch3=0;
    int stopWatch4=0;
    int stopWatch5=0;
    int stopWatch6=0;

public:
//    static int processCount1;
//    static int processCount2;
//    static int processCount3;
//    static int processCount4;
//    static int processCount5;
//    static int processCount6;
    static Queue queue1;
    static Queue queue2;
    static Queue queue3;
    static Queue queue4;
    static Queue queue5;
    static Queue queue6;
    Vehicle* v;
    void createVehicle(int n);
    void vehicle1();
    void vehicle2();
    void vehicle3();
    void vehicle4();
    void vehicle5();
    void vehicle6();
    void process(int* a, int* b, int* c, int* d, int* e, int* f);
};

#endif // VEHICLES_H

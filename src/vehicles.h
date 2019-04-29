/**
 * @file vehicles.h
 * @version 1.0
 * @date 21/04/19-28/04/19
 * @authors isolis2000, jesquivel48, JoseAgus00
 */

#ifndef VEHICLES_H
#define VEHICLES_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <queue>
#include <unistd.h>
#include "vehicle.h"
#include "dataStructures/queueAux/queue.h"

class Vehicles {

private:
    int stopWatch1=0;
    int stopWatch2=0;
    int stopWatch3=0;
    int stopWatch4=0;
    int stopWatch5=0;
    int stopWatch6=0;

public:
    static Queue queue1;
    static Queue queue2;
    static Queue queue3;
    static Queue queue4;
    static Queue queue5;
    static Queue queue6;
    Vehicle* v;
    void createVehicle(int n);
    void process(int* a, int* b, int* c, int* d, int* e, int* f);
    void vehicle1();
    void vehicle2();
    void vehicle3();
    void vehicle4();
    void vehicle5();
    void vehicle6();
};

#endif // VEHICLES_H

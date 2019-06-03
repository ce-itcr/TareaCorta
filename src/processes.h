/**
 * @file Processes.h
 * @version 1.0
 * @date 21/04/19-28/04/19
 * @authors angelortiz, isolis2000, jesquivel48, JoseAgus00
 */

#ifndef PROCESSES_H
#define PROCESSES_H

#include <iostream>
#include <qdebug.h>
#include <queue>
#include "util/util.h"

using namespace std;

class Processes
{
private:
    int processes[6][3]={{8,8,8},{8,8,8},{8,8,8},{8,8,8},{8,8,8},{8,8,8}};
public:
    static Processes& getInstance(){
        static Processes instance;
        return instance;
    }

    Processes();
    void takeProcess(int process,int vehicle);
    void putProcess(int process, int vehicle);
    bool consultProcess(int process, int vehicle);
    void printProcesses();
};


#endif // PROCESSES_H

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
};

#endif // UTIL_H

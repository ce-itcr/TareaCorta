#include <iostream>
#include "productionLine/vehicles.h"

using namespace std;

int main(){

    bool running = true;
    while(running){

        int car;
        vehicles* v1 = &vehicles::getInstance();
        cout << "Ingrese el número de vehiculo que desea fabricar: ";
        cin >> car;
        v1->vehicleSelector(car);
        
    }

}
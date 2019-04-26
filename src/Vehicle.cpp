#include "Vehicle.h"
#include "Vehicles.h"
#include "Utils.h"

Vehicle::Vehicle(int a, int b, int c, int d, int e, int f, int cNum) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->e = e;
    this->f = f;
    this->cNum = cNum;
    A = *(new Node(a, "a", cNum, getNumbOfVeh()));
    B = *(new Node(b, "b", cNum, getNumbOfVeh()));
    C = *(new Node(c, "c", cNum, getNumbOfVeh()));
    D = *(new Node(d, "d", cNum, getNumbOfVeh()));
    E = *(new Node(e, "e", cNum, getNumbOfVeh()));
    F = *(new Node(f, "f", cNum, getNumbOfVeh()));
}

//void Vehicle::processQueue(int* a, int* b, int* c, int* d, int* e, int* f){
//    cont=3;
//    while(true){
//        sleep(1);
//        stopWatch1++;
//        stopWatch2++;
//        stopWatch3++;
//        if(stopWatch1==*a){
//            cout<<"proceso1 finalizado"<<endl;
//            cont--;
//        }
//        if(stopWatch2==*b){
//            cout<<"proceso2 finalizado"<<endl;
//            cont--;
//        }
//        if(stopWatch3==*c){
//            cout<<"proceso3 finalizado"<<endl;
//            cont--;
//        }
//        if(cont == 2 || cont== 1 ||cont == 0){
//            stopWatch4++;
//            if(stopWatch4==*d){
//                cout<<"proceso4 finalizado"<<endl;
//                cont--;
//            }
//        }
//        if(cont == 1 || cont == 0 || cont == -1){
//            stopWatch5++;
//            if(stopWatch5==*d){
//                cout<<"proceso5 finalizado"<<endl;
//                cont--;
//            }
//        }
//        if(cont == 0 || cont == -1 || cont == -2){
//            stopWatch6++;
//            if(stopWatch6==*d){
//                cout<<"proceso6 finalizado"<<endl;
//                cont--;
//            }
//        }
//        if(cont == -3){
//            break;
//        }
//    }
//    stopWatch1=0;
//    stopWatch2=0;
//    stopWatch3=0;
//    stopWatch4=0;
//    stopWatch5=0;
//    stopWatch6=0;
//    cont=3;
//    cout<<"Procesos finalizados"<<endl;
//}

int* Vehicle::getA() {
    return &a;
}

int *Vehicle::getB() {
    return &b;
}

int *Vehicle::getC() {
    return &c;
}

int *Vehicle::getD() {
    return &d;
}

int *Vehicle::getE() {
    return &e;
}

int *Vehicle::getF() {
    return &f;
}

int Vehicle::getCNum() const {
    return cNum;
}

Node Vehicle::generateNode(string letter) {
    if (letter == "a"){

    }
}

int Vehicle::getNumbOfVeh() {
//    if (cNum == 1)
//        return Utils::car1Num;
//    else if (cNum == 2)
//        return Utils::car2Num;
//    else if (cNum == 3)
//        return Utils::car3Num;
//    else if (cNum == 4)
//        return Utils::car4Num;
//    else if (cNum == 5)
//        return Utils::car5Num;
//    else if (cNum == 6)
//        return Utils::car6Num;
}

void Vehicle::processQueue() {
    if (cNum == 1){
//        if (Vehicles::queue1.getCont() != 3){
//            Vehicles::queue1.addItem(A);
//        }
    }
}

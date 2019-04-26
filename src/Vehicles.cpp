#include "Vehicles.h"

void Vehicles::createVehicle(int n) {
    if (n == 1){
      v = new Vehicle(2, 7, 9, 2, 4, 6, 1);
      vehicle1();
    } else if (n == 2){
      v = new Vehicle(10, 13, 16, 12, 15, 10, 1);
      vehicle2();
    } else if (n == 3){
      v = new Vehicle(10, 13, 16, 12, 15, 10, 1);
      vehicle3();
    } else if (n == 4){
      v = new Vehicle(10, 13, 16, 12, 15, 10, 1);
      vehicle4();
    } else if (n == 5){
      v = new Vehicle(10, 13, 16, 12, 15, 10, 1);
      vehicle5();
    } else if (n == 6){
      v = new Vehicle(10, 13, 16, 12, 15, 10, 1);
      vehicle6();
    }
}

void Vehicles::process(int* a, int* b, int* c, int* d, int* e, int* f){
    int cont=3;
    while(true){
        sleep(1);
        stopWatch1++;
        stopWatch2++;
        stopWatch3++;
        if(stopWatch1==*a){
            cout<<"proceso1 finalizado"<<endl;
            cont--;
        }
        if(stopWatch2==*b){
            cout<<"proceso2 finalizado"<<endl;
            cont--;
        }
        if(stopWatch3==*c){
            cout<<"proceso3 finalizado"<<endl;
            cont--;
        }
        if(cont == 2 || cont== 1 ||cont == 0){
            stopWatch4++;
            if(stopWatch4==*d){
                cout<<"proceso4 finalizado"<<endl;
                cont--;
            }
        }
        if(cont == 1 || cont == 0 || cont == -1){
            stopWatch5++;
            if(stopWatch5==*d){
                cout<<"proceso5 finalizado"<<endl;
                cont--;
            }
        }
        if(cont == 0 || cont == -1 || cont == -2){
            stopWatch6++;
            if(stopWatch6==*d){
                cout<<"proceso6 finalizado"<<endl;
                cont--;
            }
        }
        if(cont == -3){
            break;
        }
    }
    stopWatch1=0;
    stopWatch2=0;
    stopWatch3=0;
    stopWatch4=0;
    stopWatch5=0;
    stopWatch6=0;
    cont=3;
    cout<<"Procesos finalizados"<<endl;
}

void Vehicles::vehicle1() {
    process(v->getA(),v->getB(),v->getC(),v->getD(),v->getE(),v->getF());
}
void Vehicles::vehicle2() {
    process(v->getA(),v->getB(),v->getC(),v->getD(),v->getE(),v->getF());
}
void Vehicles::vehicle3() {
    process(v->getA(),v->getB(),v->getC(),v->getD(),v->getE(),v->getF());
}
void Vehicles::vehicle4() {
    process(v->getA(),v->getB(),v->getC(),v->getD(),v->getE(),v->getF());
}
void Vehicles::vehicle5() {
    process(v->getA(),v->getB(),v->getC(),v->getD(),v->getE(),v->getF());
}
void Vehicles::vehicle6() {
    process(v->getA(),v->getB(),v->getC(),v->getD(),v->getE(),v->getF());
}

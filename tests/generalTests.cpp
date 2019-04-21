#include <iostream>
#include "dataStructures/queue/queue.h"
#include "dataStructures/linkedList/list.h"
#include "dataStructures/linkedList/list.cpp"

using namespace std;

void queueTest(){
    queue myQueue;

    cout << "Cola Inicial" << endl;
    myQueue.removeItem();
    myQueue.addItem("P1");
    myQueue.addItem("P2");
    myQueue.addItem("P3");
    myQueue.print();

    cout << "\nCola 2" << endl;
    myQueue.removeItem();
    myQueue.print();

    myQueue.erase();
}

void linkedListTest(){
    List<int> list_1;
    List<int> list_2;
    int ele;

    int dim;
    int pos;

    cout << "Ingresa la dimensión de la lista: " << endl;
    cin >> dim;

    list_1.fill_random(dim);

    cout << "Lista A al inicio " << endl;
    list_1.print();

    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;
    list_1.add_head(ele);
    list_1.print();

    cout << "Lista invertida: " << endl;
    list_1.invert();
    list_1.print();

    cout << "Lista ordenada: " << endl;
    list_1.sort();
    list_1.print();

    cout << "Agrega un elemento. Será insertado ordenadamente: " << endl;
    cin >> ele;
    list_1.add_sort(ele);
    list_1.print();

    cout << "Busca un elemento: " << endl;
    cin >> ele;
    list_1.search(ele);

    cout << "Elimina un elemento por dato: " << endl;
    cin >> ele;
    list_1.del_by_data(ele);
    list_1.print();

    cout << "Elimina un elemento por posición: " << endl;
    cin >> pos;
    list_1.del_by_position(pos);
    list_1.print();

    cout << "Interseccion entre las listas A y B: " << endl;
    list_1.intersection(list_2);

    cout << "Listas A y B concatenadas: " << endl;
    list_1.concat(list_2);
    list_1.print();

    list_1.del_all();
    list_1.print();
}

//int main(){
//    bool running = true;
//    int verification;
//
//    while(running){
//        cout << "Ingrese: "
//                "1.Para Test de Queue, "
//                "2.Para Test de LinkedList, "
//                "3.Para Salir." << endl;
//        cin >> verification;
//        if(verification == 1){
//            queueTest();
//        } else if(verification == 2){
//            linkedListTest();
//        } else if(verification == 3){
//            running = false;
//        } else{
//            cout << "Ingrese una opción válida" << endl;
//        }
//    }
//}

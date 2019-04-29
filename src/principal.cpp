#include "principal.h"

principal::principal(MainWindow *w, QLabel **ArrayL, QProgressBar **ArrayB){
    this->w = w;
    this->ArrayL = ArrayL;
    this->ArrayB = ArrayB;
    for (int i=0;i<6;i++){
        vehicles[i]=new Vehicle(i);
    }
}

/**
 * @brief principal::generateBars
 */
void principal::generateBars(){

    QProgressBar* B;
    QLabel* L;
    QLabel* Ltmp;
    int h;

    QLabel* Labeltmp=new QLabel(w);
    Labeltmp->setText("Cola de espera");
    Labeltmp->setGeometry(800,0,100,100);

    QLabel* Labeltmp2=new QLabel(w);
    Labeltmp2->setText("Línea de Producción");
    Labeltmp2->setGeometry(580,0,200,100);

    this->LabelSec=new QLabel(w);
    this->LabelSec->setGeometry(570,320,200,20);

    this->List=new QListWidget(w);
    this->List->setGeometry(795,70,100,250);

    for (int i=0;i<6;i++){
        h=40*i+75;

        Ltmp=new QLabel(w);
        Ltmp->setGeometry(570,h,20,20);
        Ltmp->setText("V"+QString::number(i+1));
        usleep(50*1000);

        L=new QLabel(w);
        L->setGeometry(700,h,100,20);
        L->setText(QString::number(i+1));
        usleep(50*1000);

        B=new QProgressBar (w);
        B->setGeometry(590,h,100,20);
        B->setValue(10*i);
           usleep(50*1000);

        ArrayL[i]=L;
        ArrayB[i]=B;

        vehicles[i]->start();
       }

       usleep(1000*1000);
}

/**
 * @brief principal::update
 */
void principal::update(){
    int processPercentage;
    int process;
    int v = 5;

    for(int i=0; i<v+1; i++){
        vehicles[i]->moveAlong();

        processPercentage = vehicles[i]->getActualStateAux();
        process = vehicles[i]->getActualProcess();

        ArrayB[i]->setValue(processPercentage);
        ArrayL[i]->setText(QChar(process));


        if(process == 'P' && !queueArray[i]){
            queueArray[i]=1;
            vehiclesQueue.enqueue(i);
            processesQueue.enqueue(vehicles[i]->getActualState());
            char tmp = vehicles[i]->getActualState()+65;
            List->addItem("V"+QString::number(i+1)+"-"+QChar(tmp));
        }
        usleep(50*1000);
    }
}
/**
 * @brief principal::updateCycle
 */
void principal::updateCycle(){

    unsigned int msWait=2000;
    int limit=30;

    for (int i=0;i<limit;i++){
        //qDebug()<<"#"<<i;

        LabelSec->setText("Tiempo de Ejecución: "+QString::number(i)+"s");
        usleep(50*1000);
        qDebug()<<" SIGUIENTE=======>";
        if (i%5==0 && !processesQueue.emptyQueue()){
            Processes *p1=&Processes::getInstance();
            p1->putProcess(processesQueue.dequeue(),vehiclesQueue.dequeue());
            p1->printProcesses();
            delete List->item(0);
        }

        usleep(50*1000);

        update();
        Processes *p1=&Processes::getInstance();
        p1->printProcesses();

        usleep(msWait*1000);

    }

    return;
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Util* utils = new Util();
    cout << "------------------- Tarea Corta, CE2103 -------------------" << endl;
    cout << "--------------------- " << utils->getDate() << " ---------------------" << endl;
    cout << "-------------- Fábrica de Vehículos Iniciada --------------" << endl;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exitButton_clicked()
{
    Util* utils = new Util();
    cout << "--------------------- " << utils->getDate() << " ---------------------" << endl;
    cout << "--------------- Fábrica de Vehículos Cerrada --------------" << endl;
    this->close();
}

void MainWindow::on_infoButton_clicked()
{
    QMessageBox::information(this, "About", "\nTarea Corta: \n"
                                            "El presente corresponde a la Tarea Corta del Curso de Algoritmos y Estructuras de Datos II (CE2103), I Semestre 2019. La misma pretende profundizar el concepto de gestión de memoria desde la perspectiva de la codificación del software."
                                            "\n\nEspecificación: \n"
                                            "El contexto que se utiliza para esta implementación es el siguiente:"
                                            "Una fábrica de vehículos tiene 6 líneas diferentes de producción: Vehículo tipo 1, Vehículo tipo 2, Vehículo tipo 3, Vehículo tipo 4, Vehículo tipo 5 y Vehículo tipo 6."
                                            "Cada línea de producción utiliza los siguientes procesos: Proceso A, Proceso B, Proceso C, Proceso D y Proceso E. Cada línea de producción define su propio orden para estos procesos."
                                            "Para cada proceso se define un tiempo de producción de acuerdo a la línea de producción"
                                            "Por cada proceso existe un encargado que es el que maneja la agenda del proceso para todas las solicitudes de las líneas de producción."
                                            "Cada línea de producción puede atender solamente 3 procesos al mismo tiempo."
                                            "Cuando una línea de producción solicita un proceso y ya la agenda de ese proceso está llena, debe dar prioridad a la nueva solicitud y poner en pausa alguna de las que estaba realizando."
                                            "Los procesos que se ponen en pausa pasan a una cola de espera general (de todos los procesos). Cada 5 segundos el que esté de primero en la cola debe ser atendido."
                                            "Debe mostrarse en tiempo real los procesos que se están ejecutando y los que están en cola de espera. Además, se debe visualizar aspectos como paginación e intercambio de páginas."
                                            "\n\nAutores: \n"
                                            "Angelo Ortiz - Desarrollador - angelortizv\n"
                                            "Iván Solís - Desarrollador - isolis2000\n"
                                            "Jonathan Esquivel - Desarrollador - jesquivel48\n"
                                            "Agustín Venegas - Desarrollador - JoseAgus00\n");
 }

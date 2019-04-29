#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMovie>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Util* utils = &Util::getInstance();
    cout << "------------------- Tarea Corta, CE2103 -------------------" << endl;
    cout << "--------------------- " << utils->getDate() << " ---------------------" << endl;
    cout << "-------------- Fábrica de Vehículos Iniciada --------------" << endl;

    QMovie *movie = new QMovie(":/loading2.gif");
    QLabel *processLabel = new QLabel(this);
    processLabel->setMovie(movie);
    processLabel->setGeometry(470,390,500,250);
    movie->start();

}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::on_exit_Button_clicked
 */
void MainWindow::on_exit_Button_clicked()
{
    Util* utils = &Util::getInstance();
    cout << "--------------------- " << utils->getDate() << " ---------------------" << endl;
    cout << "--------------- Fábrica de Vehículos Cerrada --------------" << endl;
    this->close();
}

#include "mainwindow.h"
#include <QMovie>
#include <QLabel>
#include <QFrame>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    QLabel *gif = new QLabel(this);
//    gif->setFrameStyle(QFrame::Panel | QFrame::Sunken);
//    gif->setStyleSheet("border: 0px;");

//    QMovie *movie = new QMovie(":/rick.gif");
//    gif->setMovie (movie);
//    movie->start ();
//    gif->setGeometry(220,180,800,300);
//    gif->setAlignment(Qt::AlignCenter);
//    gif->lower();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_startButton_clicked()
{
    close();
    gui processes;
    processes.setModal(true);
    processes.exec();
}

void MainWindow::on_acercade_clicked()
{
    close();
    aboutApp about;
    about.setModal(true);
    about.exec();
}

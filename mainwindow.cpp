#include "mainwindow.h"
#include <QMovie>
#include <QLabel>
#include <QFrame>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    QPixmap bkgnd(":/background.jpg");
//       bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
//       QPalette palette;
//       palette.setBrush(QPalette::Background, bkgnd);
//       this->setPalette(palette);


    QLabel *gif = new QLabel(this);
    gif->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    gif->setStyleSheet("border: 0px;");

//    QMovie *movie = new QMovie(":/shooting.gif");
//    gif->setMovie (movie);
//    movie->start ();
//    gif->setGeometry(230,295,800,300);
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

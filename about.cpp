#include "about.h"
#include "ui_about.h"

aboutApp::aboutApp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutApp)
{
    ui->setupUi(this);
}

aboutApp::~aboutApp()
{
    delete ui;
}

void aboutApp::on_backButton_clicked()
{
    close();
    MainWindow *w = new MainWindow();
    w->show();
}

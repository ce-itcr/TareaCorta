#include "gui.h"
#include "ui_gui.h"

gui::gui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::gui)
{
    ui->setupUi(this);
}

gui::~gui()
{
    delete ui;
}

void gui::on_pushButton_clicked()
{
    this->close();
}

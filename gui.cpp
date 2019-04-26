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

void gui::on_cv1_clicked()
{
    cout << "Iniciando Procesos de Vehículo 1" << endl;


}

void gui::on_cv2_clicked()
{
    cout << "Iniciando Procesos de Vehículo 2" << endl;
}

void gui::on_cv3_clicked()
{
    cout << "Iniciando Procesos de Vehículo 3" << endl;
}

void gui::on_cv4_clicked()
{
    cout << "Iniciando Procesos de Vehículo 4" << endl;
}

void gui::on_cv5_clicked()
{
    cout << "Iniciando Procesos de Vehículo 5" << endl;
}

void gui::on_cv6_clicked()
{
    cout << "Iniciando Procesos de Vehículo 6" << endl;
}


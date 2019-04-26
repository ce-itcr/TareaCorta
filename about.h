#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class aboutApp;
}

class aboutApp : public QDialog
{
    Q_OBJECT

public:
    explicit aboutApp(QWidget *parent = 0);
    ~aboutApp();

private slots:
    void on_backButton_clicked();

private:
    Ui::aboutApp *ui;
};

#endif // ABOUT_H

#ifndef GUI_H
#define GUI_H

#include <QDialog>

namespace Ui {
class gui;
}

class gui : public QDialog
{
    Q_OBJECT

public:
    explicit gui(QWidget *parent = 0);
    ~gui();

private slots:
    void on_pushButton_clicked();

private:
    Ui::gui *ui;
};

#endif // GUI_H

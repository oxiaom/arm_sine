#include "dialog_reset.h"
#include "ui_dialog_reset.h"

Dialog_reset::Dialog_reset(BackSystm *bks, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_reset)
{
    ui->setupUi(this);
    this->bks = bks;
}

Dialog_reset::~Dialog_reset()
{
    delete ui;
}

void Dialog_reset::on_pushButton_clicked()
{
    this->close();
}

void Dialog_reset::on_pushButton_2_clicked()
{

    this->close();
    this->bks->reset();

}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::set_(BackSystm *bk,Form_main *fm){
    this->bk = bk;
    this->fm = fm;
    this->ui->username->setText(this->bk->username);
}

void MainWindow::on_pushButton_clicked()
{
    if( (this->ui->passwdline->text() == this->bk->passwd ) && ( this->ui->username->text() == this->bk->username ) ){
        this->hide();
        this->fm->set_myid( this->bk->isys->get_Devid() );
        this->fm->showFullScreen( );
    }else{
        this->ui->labbackinfo->setText("账号或者密码有错误");
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    this->ui->passwdline->insert("1");
}

void MainWindow::on_pushButton_3_clicked()
{
    this->ui->passwdline->insert("2");
}

void MainWindow::on_pushButton_4_clicked()
{
   this->ui->passwdline->insert("3");
}

void MainWindow::on_pushButton_5_clicked()
{
  this->ui->passwdline->insert("4");
}

void MainWindow::on_pushButton_6_clicked()
{
   this->ui->passwdline->insert("5");
}

void MainWindow::on_pushButton_7_clicked()
{
   this->ui->passwdline->insert("6");
}

void MainWindow::on_pushButton_8_clicked()
{
   this->ui->passwdline->insert("7");
}

void MainWindow::on_pushButton_9_clicked()
{
    this->ui->passwdline->insert("8");
}

void MainWindow::on_pushButton_10_clicked()
{
    this->ui->passwdline->insert("9");
}

void MainWindow::on_pushButton_11_clicked()
{
    QString line = this->ui->passwdline->text();
    if(line.length()>0){
        line.chop(1);
    }
    this->ui->passwdline->clear();
    this->ui->passwdline->insert(line);
}

void MainWindow::on_pushButton_12_clicked()
{
    this->ui->passwdline->insert("0");
}

void MainWindow::on_pushButton_13_clicked()
{
    this->ui->passwdline->clear();
}

void MainWindow::on_pushButton_14_clicked()
{
    Dialog_reset *res = new Dialog_reset(bk,this);
    res->show();
}

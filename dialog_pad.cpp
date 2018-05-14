#include "dialog_pad.h"
#include "ui_dialog_pad.h"

Dialog_pad::Dialog_pad(QString name, QLineEdit *ed, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_pad)
{
    ui->setupUi(this);
    this->ed = ed;
    this->ui->label_2->setText(name);
}

Dialog_pad::~Dialog_pad()
{
    delete ui;
}

void Dialog_pad::on_pushButton_4_clicked() //clear
{
    this->ui->lineEdit->clear();
}

void Dialog_pad::on_pushButton_clicked() //OK
{
     QString checkline =this->ui->lineEdit->text(); //0~255.0~255.0~255.0~255
     if(this->ui->label_2->text()!="Server Port:"){
         QRegExp rx("\\b(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\b");
         if(rx.exactMatch(checkline)){
            this->ed->setText(checkline);
            this->close();
         }else{
            this->ui->label->setText("格式不正确");
         }
     }else{
         QRegExp rx("^[0-9]*[1-9][0-9]*$");
         if(rx.exactMatch(checkline)){
            this->ed->setText(checkline);
            this->close();
         }else{
            this->ui->label->setText("格式不正确");
         }
     }



}

void Dialog_pad::on_pushButton_2_clicked()//close
{
    this->close();
}

void Dialog_pad::on_pushButton_3_clicked()//1
{
    this->ui->lineEdit->insert("1");
}

void Dialog_pad::on_pushButton_5_clicked()//2
{
    this->ui->lineEdit->insert("2");
}

void Dialog_pad::on_pushButton_6_clicked()//3
{
    this->ui->lineEdit->insert("3");
}

void Dialog_pad::on_pushButton_10_clicked()//4
{
    this->ui->lineEdit->insert("4");
}

void Dialog_pad::on_pushButton_9_clicked()//5
{
    this->ui->lineEdit->insert("5");
}

void Dialog_pad::on_pushButton_11_clicked()//6
{
    this->ui->lineEdit->insert("6");
}

void Dialog_pad::on_pushButton_12_clicked()//7
{
    this->ui->lineEdit->insert("7");
}

void Dialog_pad::on_pushButton_8_clicked()//8
{
    this->ui->lineEdit->insert("8");
}

void Dialog_pad::on_pushButton_13_clicked()//9
{
    this->ui->lineEdit->insert("9");
}

void Dialog_pad::on_pushButton_7_clicked()//0
{
    this->ui->lineEdit->insert("0");
}

void Dialog_pad::on_pushButton_15_clicked()//.
{
    this->ui->lineEdit->insert(".");
}

void Dialog_pad::on_pushButton_14_clicked()
{
    QString line = this->ui->lineEdit->text();
    if(line.length()>0){
        line.chop(1);
    }
    this->ui->lineEdit->clear();
    this->ui->lineEdit->insert(line);
}

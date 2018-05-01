#include "dialog3.h"
#include "ui_dialog3.h"
#include <qhttp.h>
Dialog3::Dialog3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
    this->ui->pushButton->hide();
    this->ui->textBrowser->insertHtml("正在执行~！");
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::on_pushButton_clicked()
{
    this->close();
}
void Dialog3::back_data_cmds(QByteArray data,int code){
    if(code == 1){
        qDebug()<< data;

        QJsonObject obj = this->bk->didi3(data);
        if(obj.value("parse").toBool()){
            if(obj.value("objt").toObject().value("res").toBool()){
              this->ui->textBrowser->insertHtml("<br>添加成功");
              emit backsig(true);
            }else{
                this->ui->textBrowser->insertHtml("<br>环境有误失败-识别码:EA10092");
                emit backsig(false);
            }
        }else{
            this->ui->textBrowser->insertHtml("<br>环境有误失败-识别码:EA10091");
            emit backsig(false);
        }
        this->ui->pushButton->show();
    }else if(code == 2){

    }

}


void Dialog3::dohttp(){
 QString url;
 QHTTP *hp = new QHTTP(this);
 connect(hp,SIGNAL( over(QByteArray,int) ),this,SLOT( back_data_cmds(QByteArray,int) ) );
 QString  cmdline = "userid=";
 cmdline.append(QString::number(this->bk->userid));
 cmdline.append("&fzname=");
 cmdline.append(fzname);
 url = bk->backurl(3).append(cmdline);
 qDebug()<<url;
 QByteArray lllll ;
 for(QString  l : this->snlist){
     lllll.append(l);

     lllll.append("`");
 }
 lllll.chop(1);
 hp->settingPost( url , 1 , lllll );

}



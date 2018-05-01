#include "waiting.h"
#include "ui_waiting.h"

waiting::waiting(BackSystm *bk, QListWidgetItem *item, bool isstart, int taskid, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::waiting)
{
    ui->setupUi(this);
    mv = new QMovie (":load1.gif");
    this->ui->label->setMovie(mv);
    //mv->start();
    this->taskid = taskid;
    this->bk = bk;
    this->item = item;
    htp = new QHTTP(this);
    connect(htp,SIGNAL( over(QByteArray,int) ),this,SLOT( back_data_cmds(QByteArray,int) ) );
    QString  url,cmdline = "userid=";
    cmdline.append(QString::number(this->bk->userid));
    cmdline.append("&taskid=");
    cmdline.append(QString::number(this->taskid));
    if(isstart){
        url = bk->backurl( 8 ).append(cmdline);
        qDebug() << url;
        htp->setting( url , 8 );
        mv->start();
    }else{
        url = bk->backurl( 9 ).append(cmdline);
        qDebug() << url;
        htp->setting( url , 9 );
        mv->start();
    }


}

waiting::~waiting()
{
    delete ui;
}

void waiting::back_data_cmds( QByteArray data , int code ){

    if( code == 8 ){

        QJsonObject obj = this->bk->didi3( data );
        if(obj.value("parse").toBool()){
            if(obj.value("objt").toObject().value("res").toBool()){
                qDebug()<<obj;
                emit this->backres(1,this->item);
                this->close();
            }
        }else{
            qDebug()<<"sth error";
            emit this->backres(3,this->item);
        }
    }else if ( code == 9 ){
        QJsonObject obj = this->bk->didi3( data );
        if(obj.value("parse").toBool()){
            if(obj.value("objt").toObject().value("res").toBool()){
                qDebug()<<obj;
                this->close();
                emit this->backres(2,this->item);
            }
        }else{
            qDebug()<<"sth error";
            emit this->backres(4,this->item);
        }
    }
}
void waiting::error(QNetworkReply::NetworkError er){
    emit this->backres(5,this->item);
}

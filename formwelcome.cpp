#include "formwelcome.h"
#include "ui_formwelcome.h"
#include <QDebug>
#include "dialog_pad.h"
#include "qhttp.h"

FormWelcome::FormWelcome(BackSystm *bk, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormWelcome)
{
    ui->setupUi(this);
    this->bk = bk;
    ui->stackedWidget->setCurrentIndex(0);
    this->ui->lineEdit_1->setText(this->bk->isys->job.value("severip").toString());
    this->ui->lineEdit_2->setText( QString::number(this->bk->isys->job.value("severport").toInt()) );
    this->ui->lineEdit_3->setText(this->bk->isys->job.value("localip").toString());
    this->ui->lineEdit_4->setText(this->bk->isys->job.value("localmask").toString());
    this->ui->lineEdit_5->setText(this->bk->isys->job.value("localwg").toString());
}

FormWelcome::~FormWelcome()
{
    delete ui;
}

void FormWelcome::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void FormWelcome::on_pushButton_5_clicked()
{
    Dialog_pad *da = new Dialog_pad("Server IP:",this->ui->lineEdit_1,this);
    da->open();
    qDebug()<<"on_pushButton_5_clicked";
}

void FormWelcome::on_pushButton_6_clicked() //Server Port:
{
    Dialog_pad *da = new Dialog_pad("Server Port:",this->ui->lineEdit_2,this);
    da->open();
    qDebug()<<"on_pushButton_6_clicked";
}

void FormWelcome::on_pushButton_7_clicked() //Local IP:
{
    Dialog_pad *da = new Dialog_pad("Local IP:",this->ui->lineEdit_3,this);
    da->open();
    qDebug()<<"on_pushButton_7_clicked";
}

void FormWelcome::on_pushButton_8_clicked() //Local Mask
{
    Dialog_pad *da = new Dialog_pad("Local Mask:",this->ui->lineEdit_4,this);
    da->open();
    qDebug()<<"on_pushButton_8_clicked";
}

void FormWelcome::on_pushButton_9_clicked() //Local Wg
{
    Dialog_pad *da = new Dialog_pad("Local Wg:",this->ui->lineEdit_5,this);
    da->open();
    qDebug()<<"on_pushButton_9_clicked";
}

void FormWelcome::on_pushButton_2_clicked()// Test
{

    if(ispassed == false){

        this->bk->isys->set_Server_ip(this->ui->lineEdit_1->text());
        this->bk->isys->set_Server_port(this->ui->lineEdit_2->text().toInt());
        this->bk->isys->set_Local_ip(this->ui->lineEdit_3->text());
        this->bk->isys->set_Local_Mask(this->ui->lineEdit_4->text());
        this->bk->isys->set_Local_Wg(this->ui->lineEdit_5->text());

        this->bk->ip = this->ui->lineEdit_1->text();

        QString cmdline,url;
        cmdline="ifconfig eth0 #TIHUAN1 netmask #TIHUAN2";

        cmdline.replace("#TIHUAN1",this->bk->isys->job.value("localip").toString());
        cmdline.replace("#TIHUAN2",this->bk->isys->job.value("localmask").toString());
        qDebug()<<"cmdline:"<<cmdline;
        system(cmdline.toLatin1().data());
        cmdline = "route add default gw #TIHUAN1";
        cmdline.replace("#TIHUAN1",this->bk->isys->job.value("localwg").toString());
        qDebug()<<"cmdline:"<<cmdline;
        system(cmdline.toLatin1().data());

        QHTTP *hp = new QHTTP(this);
        connect(hp,SIGNAL( over(QByteArray,int) ),this,SLOT( back_data_cmds(QByteArray,int) ) );
        connect(hp,SIGNAL(error(QNetworkReply::NetworkError)),this,SLOT(back_error(QNetworkReply::NetworkError)));
        cmdline = "userid=";
        cmdline.append( QString::number( this->bk->userid ) );
        url = bk->backurl(4).append( cmdline );
        qDebug()<<url;
        hp->setting( url , 4 );

    }else{
        this->ui->stackedWidget->setCurrentIndex(2);
        QString cmdline,url;
        QHTTP *hp = new QHTTP(this);
        connect(hp,SIGNAL( over(QByteArray,int) ),this,SLOT( back_data_cmds(QByteArray,int) ) );
        connect(hp,SIGNAL( error(QNetworkReply::NetworkError)),this,SLOT(back_error(QNetworkReply::NetworkError)));
        cmdline = "onlyone=";
        cmdline.append( QString::number( this->bk->isys->get_Devid() ) );
        url = bk->backurl( 5 ).append( cmdline );
        qDebug()<<url;
        hp->setting( url , 5 );
    }

}

void FormWelcome::timerout_(){
    QString cmdline,url;
    QHTTP *hp = new QHTTP(this);
    connect(hp,SIGNAL( over(QByteArray,int) ),this,SLOT( back_data_cmds(QByteArray,int) ) );
    connect(hp,SIGNAL(error(QNetworkReply::NetworkError)),this,SLOT(back_error(QNetworkReply::NetworkError)));
    cmdline = "onlyone=";
    cmdline.append( QString::number( this->bk->isys->get_Devid() ) );
    url = bk->backurl( 6 ).append( cmdline );
    qDebug()<<url;
    hp->setting( url , 6 );
}

void FormWelcome::back_error(QNetworkReply::NetworkError er){
    qDebug()<<"FormWelcome::back_error:"<<er;
    this->ui->label_2->setText("配置有误不能正常工作和联通");
    this->ispassed = false;
}

void FormWelcome::back_data_cmds( QByteArray data  , int code ){
    qDebug()<<data;
    if( code == 1 ){

        QJsonObject obj = this->bk->didi3(data);
        if(obj.value("parse").toBool()){

        }
    }else if( code == 2 ){
        QJsonObject obj = this->bk->didi3(data);
        if(obj.value("parse").toBool()){

        }
    }else if( code == 4 ){
        QJsonObject obj = this->bk->didi3( data );
        if(obj.value("parse").toBool()){
            if( obj.value("objt").toObject().value("res").toBool() ){
               this->ui->label_2->setText("测试通过");
               this->ui->pushButton_2->setText("下一步");
               this->ispassed = true;
            }
        }
    }else if( code == 5 ){

        QJsonObject obj = this->bk->didi3( data );
        // this->ui->textBrowser->insertHtml(data);
        if(obj.value("parse").toBool()){
            if( obj.value("objt").toObject().value("res").toBool() ){

                this->t = new QTimer(this);
                connect(this->t,SIGNAL(timeout()),this,SLOT(timerout_()));
                this->t->setInterval(4000);
                this->t->setSingleShot(false);
                this->t->start();

                if( obj.value("objt").toObject().value("mode").toString() == "UPDATE" ){
                    this->ui->textBrowser->insertHtml("已请求服务器重置配置  <br>  请到管理中心 管理员对话筒进行设置~！<br>");
                }else{
                    this->ui->textBrowser->insertHtml("已请求服务器初始化配置 <br> 请到管理中心 管理员对话筒进行设置~！<br>");
                }
            }
        }

    }else if( code == 6 ){

        QJsonObject obj = this->bk->didi3( data );
        //this->ui->textBrowser->insertHtml(data);
        if(obj.value("parse").toBool()){

            if( obj.value("objt").toObject().value("res").toBool() ){

                this->t->stop();
                this->t->deleteLater();
                this->ui->textBrowser->insertHtml("<br/> OK  已经配置好了 可以重启使用了 <br/>");
                this->bk->isys->set_passwd(obj.value("objt").toObject().value("passwd").toString() );
                this->bk->isys->set_username(obj.value("objt").toObject().value("username").toString() );

                this->bk->isys->set_userid(obj.value("objt").toObject().value("userid").toString().toInt() );
                this->bk->passwd =obj.value("objt").toObject().value("passwd").toString();
                this->bk->userid =obj.value("objt").toObject().value("userid").toString().toInt();
                this->bk->username =obj.value("objt").toObject().value("username").toString();
                this->bk->isys->set_isconfig(true);
                qDebug()<<"Save code==6 :"<<obj.value("objt").toObject();
                this->ui->pushButton_4->setText("REBOOT");

            }else{
                this->ui->textBrowser->insertHtml(".");
            }
        }

    }

}

void FormWelcome::on_pushButton_4_clicked()
{
    if( this->bk->isys->get_isconfig() ){
        QString cmdline;
        cmdline="reboot";
        qDebug()<<"cmdline:"<<cmdline;
        system(cmdline.toLatin1().data());
    }
}

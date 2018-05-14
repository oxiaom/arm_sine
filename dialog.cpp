#include "dialog.h"
#include "ui_dialog.h"
#include <QProcess>
#include <QThread>
#include <stdio.h>
#include <stdlib.h>
#include <QFile>
#include"qpainter.h"

Dialog::Dialog(BackSystm *bk, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    FILE *pp;
    ui->setupUi(this);
    this->sock = new QTcpSocket(this);
    connect(this->sock,SIGNAL(readyRead( )),this,SLOT(rdy( )));
    connect(this->sock,SIGNAL(connected( )),this,SLOT(connected( )));
    connect(this->sock,SIGNAL(disconnected( )),this,SLOT(disconnected( )));
    connect(this->sock,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(error(QAbstractSocket::SocketError)));
    this->bk = bk;
    this->sock->connectToHost(QHostAddress(bk->ip),41001);

    qDebug()<<"Dialog::Dialog(BackSystm *bk, QWidget *parent)" ;

    qDebug()<<"init Dialog(BackSystm *bk , int localport ,QWidget *parent )";

    system("amixer cget numid=5 | grep \": value\"  > /tmp/pifile"); //建立管道
    QFile f("/tmp/pifile");
    f.open(QIODevice::ReadOnly);
    QByteArray da = f.readAll();
    int vl =  QString(da.split('=').at(1)).toInt();
    qDebug()<<"vl:"<<vl;
    this->ui->verticalSlider->setValue(vl);
    f.close();

    system("amixer cget numid=6 | grep \": value\"  > /tmp/pifile"); //建立管道
    QFile f2("/tmp/pifile");
    f2.open(QIODevice::ReadOnly);
    QByteArray da2 = f2.readAll();
    int vl2 =  QString(da2.split('=').at(1)).toInt();
    qDebug()<<"vl2:"<<vl2;
    this->ui->verticalSlider_2->setValue(vl2);
    this->ui->verticalSlider_2->setVisible(false);
    this->ui->verticalSlider->setValue((vl-1)*7+vl2);
    this->nowmic = (vl-1)*7+vl2;
    f2.close();
    mv = new QMovie(":load4.gif");
    this->ui->label->setMovie(mv);
    mv->start();
}



RenderArea::RenderArea(QWidget *parent)
    : QWidget(parent)
{
    setBackgroundRole(QPalette::Base);
    setAutoFillBackground(true);

    m_level = 0;
    setMinimumHeight(30);
    setMinimumWidth(100);
}

void RenderArea::paintEvent(QPaintEvent * /* event */)
{
    QPainter painter(this);

    painter.setPen(Qt::black);
    painter.drawRect(QRect(painter.viewport().left()+1 ,
                           painter.viewport().top()+1 ,
                           painter.viewport().right()-2 ,
                           painter.viewport().bottom()-2 ));
    if (m_level == 0.0)
        return;

    int pos = ((painter.viewport().right()-1)-(painter.viewport().left()+11))*m_level;
    painter.fillRect(painter.viewport().left()+2,
                     painter.viewport().top()+1,
                     pos,
                     painter.viewport().height()-2,
                     Qt::yellow);
}

void RenderArea::setLevel(qreal value)
{
    m_level = value;
    update();
}
Dialog::Dialog(BackSystm *bk , int localport ,QWidget *parent ):
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);


    this->sock = new QTcpSocket(this);
    connect(this->sock,SIGNAL(readyRead( )),this,SLOT(rdy( )));
    connect(this->sock,SIGNAL(connected( )),this,SLOT(localprot_connected( )));
    connect(this->sock,SIGNAL(disconnected( )),this,SLOT(disconnected( )));
    connect(this->sock,SIGNAL(error(QAbstractSocket::SocketError)),this,SLOT(error(QAbstractSocket::SocketError)));
    this->bk = bk;
    this->localport =  localport;
    this->sock->connectToHost(QHostAddress(bk->ip),41001);
    //ra= new RenderArea(this);
    //this->ui->verticalLayout->addWidget(ra);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    this->sock->close();
}
void Dialog::localprot_connected(){
    QJsonObject obj;
    obj.insert("cmd","RTCCOMING");
    obj.insert("userid",this->bk->userid);
    obj.insert("username",this->bk->username);
    obj.insert("rdoid",this->bk->userid);
    obj.insert("snlist",QJsonArray::fromStringList( this->list ) );
    this->sock->write(QJsonDocument(obj).toJson());
    udpk = new QUdpSocket(this);
    udpk->setReadBufferSize(7000);
    udpk->bind(QHostAddress::LocalHost, localport);
    connect(udpk,SIGNAL(readyRead()),this,SLOT(localprot_urdy()));
    //system("cat /mnt/1.mp3 > /tmp/mp3_in_fifo");
}
void Dialog::connected(){
    QJsonObject obj;
    obj.insert("cmd","RTCCOMING");
    obj.insert("userid",this->bk->userid);
    obj.insert("username",this->bk->username);
    obj.insert("rdoid",this->bk->userid);
    obj.insert("snlist",QJsonArray::fromStringList( this->list ) );
    this->sock->write(QJsonDocument(obj).toJson());
    udpk = new QUdpSocket(this);
    udpk->setReadBufferSize(1024);
    udpk->bind(QHostAddress::LocalHost, 6000);
    connect(udpk,SIGNAL( readyRead() ) , this , SLOT( urdy() ));
}

void Dialog::disconnected(){
    this->sock->abort();
    this->sock->close();
    this->udpk->close();
    this->close();
}
void Dialog::error(QAbstractSocket::SocketError er){
    qDebug()<<er;
    if(er == QAbstractSocket::ConnectionRefusedError){


        this->close();
    }else if(er == QAbstractSocket::RemoteHostClosedError){

        this->close();

    }else if(er == QAbstractSocket::HostNotFoundError ){

        this->close();
    }else{

        this->close();
    }

}
void Dialog::rdy(){
     this->sock->readAll().size();
     QByteArray ba  = this->sock->readAll();
}

void Dialog::urdy(){

    while (udpk->hasPendingDatagrams()) {
         QByteArray datagram;
          datagram.resize(udpk->pendingDatagramSize());
          QHostAddress sender;
          quint16 senderPort;
          udpk->readDatagram(datagram.data(), datagram.size(),&sender, &senderPort);
          this->sock->write(datagram);
    }

}

void Dialog::localprot_urdy(){
    while (udpk->hasPendingDatagrams()) {
         QByteArray datagram;
         int res;
          datagram.resize(udpk->pendingDatagramSize());
          QHostAddress sender;
          quint16 senderPort;
          res = udpk->readDatagram(datagram.data(), datagram.size(),&sender, &senderPort);
          qDebug()<<"udpread data"<<res;
          this->sock->write(datagram.data(),res);
    }
}

void Dialog::on_save_value1(int value){
    QString cmdline;
    cmdline.sprintf("amixer cset numid=5,iface=MIXER,name='Mic1 Boost Volume' %d",value);
    qDebug()<<cmdline;
    system(cmdline.toLatin1().data());
    cmdline.sprintf("alsactl store");
    qDebug()<<cmdline;
    system(cmdline.toLatin1().data());
}

void Dialog::on_save_value2(int value){
    QString cmdline;
    cmdline.sprintf("amixer cset  numid=6,iface=MIXER,name='ADC Gain Capture Volume' %d",value);
    qDebug()<<cmdline;
    system(cmdline.toLatin1().data());
    cmdline.sprintf("alsactl store");
    qDebug()<<cmdline;
    system(cmdline.toLatin1().data());

}

void Dialog::on_save_value(int value){
    on_save_value1(value%7 + 1);
    on_save_value2(value%7);
    this->ui->verticalSlider->setValue(value);
}

void Dialog::on_verticalSlider_valueChanged(int value)
{
    on_save_value(value);
    this->nowmic = value;
}




void Dialog::on_verticalSlider_2_valueChanged(int value)
{
    QString cmdline;
    cmdline.sprintf("amixer cset  numid=6,iface=MIXER,name='ADC Gain Capture Volume' %d",value);
    qDebug()<<cmdline;
    system(cmdline.toLatin1().data());
    cmdline.sprintf("alsactl store");
    qDebug()<<cmdline;
    system(cmdline.toLatin1().data());
}

void Dialog::on_pushButton_2_clicked()//+
{

    if(nowmic < 21 ){
        on_save_value(++nowmic);

    }
}

void Dialog::on_pushButton_3_clicked()//-
{
    if(nowmic > 1){
        on_save_value(--nowmic);
    }
}

#include "qhttp.h"
#include <QHttpMultiPart>
#include <QDebug>
QHTTP::QHTTP(QObject *parent) : QObject(parent)
{

}
void QHTTP::setting(QString url , int code){
    newUrl = QUrl::fromUserInput(url);
    mg = new QNetworkAccessManager(this);
    this->code = code;
    this->by.clear();

    this->repy = mg->get(QNetworkRequest(newUrl));
    connect(this->repy,SIGNAL(error(QNetworkReply::NetworkError)),SLOT(Error(QNetworkReply::NetworkError)));
    connect(this->repy,SIGNAL(readyRead()),this,SLOT(Datain()));
    connect(this->repy,SIGNAL(finished()),this,SLOT(Dataover()));
    isstart = false;

}

void QHTTP::settingPost(QString url,int code,QByteArray value1){
    newUrl = QUrl::fromUserInput(url);
    mg = new QNetworkAccessManager(this);
    this->code = code;
    this->by.clear();
    QHttpMultiPart *multiPart = new QHttpMultiPart(QHttpMultiPart::FormDataType);
    QHttpPart textPart;
    textPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"PostV1\""));
    textPart.setBody(value1);
    multiPart->append(textPart);
    this->repy = mg->post(QNetworkRequest(newUrl),multiPart);
    connect(this->repy,SIGNAL(error( QNetworkReply::NetworkError )),SLOT(Error(QNetworkReply::NetworkError)));
    connect(this->repy,SIGNAL(readyRead()),this,SLOT(Datain()));
    connect(this->repy,SIGNAL(finished()),this,SLOT(Dataover()));
    isstart = false;
}

void QHTTP::Dataover(){

    QByteArray d;
    d = this->repy->readAll();
    this->by.append(d);
    qDebug()<<"Data_back:"<<this->by;
    emit this->over(this->by,this->code);
    isstart = false;
    this->deleteLater();
}


void QHTTP::Datain(){

    QByteArray d;
    d = this->repy->readAll();
    this->by.append(d);
    isstart = false;
}

void QHTTP::Error( QNetworkReply::NetworkError er ){
    qDebug()<<"void QHTTP::Error( QNetworkReply::NetworkError er )"<<er;
    emit this->error(er);
}

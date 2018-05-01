#ifndef QHTTP_H
#define QHTTP_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrl>
class QHTTP : public QObject
{
    Q_OBJECT
public:
    explicit QHTTP(QObject *parent = 0);
    void settingPost(QString url, int code, QByteArray value1 );
    void setting(QString url , int code);
signals:
    void present(QByteArray d,bool f);
    void over(QByteArray d , int code);
    void error(QNetworkReply::NetworkError er);
public slots:
    void Error(QNetworkReply::NetworkError er);
    void Datain();
    void Dataover();

private:
    QNetworkAccessManager *mg;
    QNetworkReply *repy;
    QUrl newUrl;
    bool isstart;
    QByteArray by;
    int code;
};

#endif // QHTTP_H

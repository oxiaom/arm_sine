#ifndef BACKSYSTM_H
#define BACKSYSTM_H

#include <QObject>
#include <QHostAddress>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <mainwindow.h>
#include "initsys.h"
#include "formwelcome.h"
#include "form_main.h"
class MainWindow;
class FormWelcome;
class BackSystm : public QObject
{
    Q_OBJECT
public:
    explicit BackSystm(QObject *parent = 0);
    QJsonObject  didi3(QByteArray data);
    QString backurl(int key);
    QString username;
    QString passwd;
    int userid;
    QString ip;
    MainWindow *m;
    Initsys *isys;
    Form_main *fm;
    FormWelcome *fw;
    int port;
    QString Get_urldevices = "/webapi/GetdeviceList.php?";           //key = 1
    QString Get_urlfenzus = "/webapi/GetfenzuList.php?";             //key = 2
    QString Get_urladdfenzus = "/webapi/GetaddfenzuList.php?";       //key = 3
    QString Get_urltest = "/webapi/justfortest.php?";                //key = 4
    QString start_huatongconfig = "/webapi/start_huatongconfig.php?";//start_huatongconfig.php 5
    QString pull_huatongstatus = "/webapi/pull_huatongstatus.php?";  // 6
    QString GetListTask_db = "/webapi/GetListTask_db.php?";           // 7
    QString do_urlpaypid = "/webapi/do_urlpaypid.php?";           // 8
    QString do_urlstoppid = "/webapi/do_urlstoppid.php?";           // 9
    QString do_urldelfenzu = "/webapi/Delelte_fenzu.php?";           // 9


signals:

public slots:
    void init_user();
    void reset();
    QJsonObject back_setting();


};

#endif // BACKSYSTM_H

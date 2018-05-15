#ifndef INITSYS_H
#define INITSYS_H
#include <QVariant>
#include <QObject>
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>


class Initsys : public QObject
{
    Q_OBJECT
public:
    explicit Initsys(QObject *parent = 0);
    QJsonObject job;
    QJsonObject fuck;
    void reset();
signals:

public slots:
    QVariant getautologin();//获取自动登录状态
    QVariant getremem();//获取记住密码状态
    QVariant getadmin();//获取用户名
    QVariant getpassword();//获取密码
    QVariant getduankou();//获取登录端口
    QVariant getIP();//获取IP
    QVariant b64Encode(QVariant b);//64编码
    QVariant b64Decode(QVariant b);//64位解码
    QVariant getport_updata();//获取上传端口
    QVariant getport_shujuku();//获取数据端口

    bool get_isconfig();
    void setautologin(QVariant r);//保存自动登录状态
    void setremem(QVariant r);//保存记住密码状态
    void setadmin(QVariant r);//保存用户名
    void setpassword(QVariant r);//保存密码
    void setIP(QVariant r);//保存IP
    void setduankou(QVariant r);//保存登录端口
    void setport_updata(QVariant r);//保存上传端口
    void setport_shujuku(QVariant r);//保存数据端口

    void set_Server_ip(QString ip);
    void set_Server_port(int port);
    void set_Local_ip(QString lip);
    void set_Local_Mask(QString mask);
    void set_Local_Wg(QString wg);

    void set_userid(  int userid );
    void set_passwd(  QString passwd );
    void set_username(QString username );
    void set_isconfig(bool isconfig);
    QString get_Server_ip();
    int get_Server_port();
    QString get_Local_ip();
    QString get_Local_Mask();
    QString get_Local_Wg();
    int get_Devid();



    //QByteArray getutf8(QString wenjian_name);

private:
    QFile  *f,*fu;

};

#endif // INITSYS_H

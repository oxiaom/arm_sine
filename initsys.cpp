#include "initsys.h"
#include <QDebug>

#include <QJsonValue>
Initsys::Initsys(QObject *parent) : QObject(parent)
{

    qDebug()<<"Initsys::Initsys(QObject *parent) : QObject(parent)";
  hahaha:
    f  = new  QFile("/etc/huatong.json");
    fu = new QFile("/etc/setid.json");
    f->open(QFile::ReadWrite);
    QByteArray p = f->readAll();

    fu->open(QFile::ReadWrite);
    QByteArray pu = fu->readAll();

    qDebug()<<p;
    QJsonParseError er;
    QJsonDocument json = QJsonDocument::fromJson(p,&er);

    if(er.error != QJsonParseError::NoError){
        job.insert("Parse",false);

        if(!job.contains("isconfig")){
            job.insert("isconfig",false);
        }
        if(!job.contains("severip")){
            job.insert("severip","192.168.2.22");
        }
        if(!job.contains("severport")){
            job.insert("severport",2666);
        }
        if(!job.contains("localip")){
            job.insert("localip","192.168.2.88");
        }
        if(!job.contains("localmask")){
            job.insert("localmask","255.255.255.0");
        }
        if(!job.contains("localwg")){
            job.insert("localwg","192.168.2.1");
        }
        if( !job.contains("token") ){
            job.insert("token","hhahahhahahahhahahahahh");
        }
        if( !job.contains("username") ){
            job.insert("username","username");
        }
        if(!job.contains("passwd")){
            job.insert("passwd","passwd");
        }
        if(!job.contains("userid")){
            job.insert("userid",-1);
        }
        qDebug()<<QJsonDocument(job).toJson();
        f->resize(0);
        f->seek(0);
        f->write(QJsonDocument(job).toJson());
        f->flush();
        f->close();
        qDebug()<<"Parse Error reset\r\n";
        goto hahaha;
    }else{

        job = json.object();
        job.insert("Parse",true);
        qDebug()<< "job init over:" <<job;
    }


    QJsonDocument json_u = QJsonDocument::fromJson( pu , &er );
    if(er.error != QJsonParseError::NoError){
        qDebug()<<"error~ No settingID json check /etc/jsonid.json";
    }else{
        fuck = json_u.object();
        qDebug()<<fuck;
    }
}

void Initsys::reset(){
    job.insert("isconfig",false);
    f->resize(0);
    f->seek(0);
    f->write(QJsonDocument(job).toJson());
    f->flush();
    f->close();
    QString cmdline;
    cmdline.sprintf("reboot");
    system(cmdline.toLatin1().data());

}

int Initsys::get_Devid(){

    return fuck.value("devid").toInt();
}

QVariant Initsys::getautologin()
{

    return job.value("zidongdenglu").toVariant();
}

QVariant Initsys::getremem()
{
    return job.value("jizhumima").toVariant();
}

QVariant Initsys::getadmin()
{
    return job.value("yonghuming").toVariant();
}

QVariant Initsys::getpassword()
{
    return job.value("mima").toVariant();
}

QVariant Initsys::getIP()
{
    return job.value("IP").toVariant();
}

QVariant Initsys::getduankou()
{
    return job.value("duankou").toVariant();
}

QVariant Initsys::b64Encode(QVariant b)
{
    return QVariant::fromValue(b.toByteArray().toBase64());
}

QVariant Initsys::b64Decode(QVariant b)
{
    return QVariant::fromValue(QByteArray::fromBase64( b.toByteArray()));
}

void Initsys::setautologin(QVariant r){
    job.remove("zidongdenglu");
    job.insert("zidongdenglu",QJsonValue::fromVariant(r));
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);

    f->write(QJsonDocument(job).toJson());
    f->flush();
}

void Initsys::setremem(QVariant r){
    job.remove("jizhumima");
    job.insert("jizhumima",QJsonValue::fromVariant(r));
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write(QJsonDocument(job).toJson());
    f->flush();
}

void Initsys::setadmin(QVariant r){
    job.remove("yonghuming");
    job.insert("yonghuming",QJsonValue::fromVariant(r));
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write(QJsonDocument(job).toJson());
    f->flush();
}

void Initsys::setpassword(QVariant r){
    job.remove("mima");
    job.insert("mima",QJsonValue::fromVariant(r));
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write(QJsonDocument(job).toJson());
    f->flush();
}
void Initsys::setIP(QVariant r){
    job.remove("IP");
    job.insert("IP",QJsonValue::fromVariant(r));
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write(QJsonDocument(job).toJson());
    f->flush();
}
void Initsys::setduankou(QVariant r){
    job.remove("duankou");
    job.insert("duankou",QJsonValue::fromVariant(r));
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write(QJsonDocument(job).toJson());
    f->flush();
}
void Initsys::setport_updata(QVariant r){
    job.remove("port_updata");
    job.insert("port_updata",QJsonValue::fromVariant(r));
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write(QJsonDocument(job).toJson());
    f->flush();
}
void Initsys::setport_shujuku(QVariant r){
    job.remove("port_shuju");
    job.insert("port_shuju",QJsonValue::fromVariant(r));
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write(QJsonDocument(job).toJson());
    f->flush();
}

void Initsys::set_Server_ip(QString ip){
    job.remove("severip");
    job.insert("severip",ip);
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write(QJsonDocument(job).toJson());
    f->flush();
}
void Initsys::set_Server_port(int port){
    job.remove("severport");
    job.insert("severport",port);
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write(QJsonDocument(job).toJson());
    f->flush();
}

void Initsys::set_Local_ip(QString lip){
    job.remove("localip");
    job.insert("localip",lip);
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write(QJsonDocument(job).toJson());
    f->flush();
}

void Initsys::set_Local_Mask(QString mask){
    job.remove("localmask");
    job.insert("localmask",mask);
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write(QJsonDocument(job).toJson());
    f->flush();
}

void Initsys::set_Local_Wg(QString wg){
    job.remove("localwg");
    job.insert("localwg",wg);
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write( QJsonDocument(job).toJson() );
    f->flush();
}

void Initsys::set_userid(  int userid ){
    job.remove("userid");
    job.insert("userid",userid);
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write( QJsonDocument(job).toJson() );
    f->flush();
}
void Initsys::set_isconfig(bool isconfig){
    job.remove("isconfig");
    job.insert("isconfig",isconfig);
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write( QJsonDocument(job).toJson() );
    f->flush();

}

void Initsys::set_passwd(  QString passwd ){
    job.remove("passwd");
    job.insert("passwd",passwd);
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write( QJsonDocument(job).toJson() );
    f->flush();
}

void Initsys::set_username(QString username ){
    job.remove("username");
    job.insert("username",username);
    qDebug()<<QJsonDocument(job).toJson();
    f->resize(0);
    f->seek(0);
    f->write( QJsonDocument(job).toJson() );
    f->flush();
}

QString Initsys::get_Server_ip(){
    return job.value("severip").toString();
}

int Initsys::get_Server_port(){
    return job.value("severport").toInt();
}

QString Initsys::get_Local_ip(){
    return job.value("localip").toString();
}

QString Initsys::get_Local_Mask(){
    return job.value("localmask").toString();
}

QString Initsys::get_Local_Wg(){
    return job.value("localwg").toString();
}

QVariant Initsys::getport_updata(){
    return job.value("port_updata").toVariant();
}

QVariant Initsys::getport_shujuku(){
    return job.value("port_shuju").toVariant();
}

bool Initsys::get_isconfig(){
    if(job.contains("isconfig")){
        return job.value("isconfig").toBool();
    }else{
        return false;
    }
}

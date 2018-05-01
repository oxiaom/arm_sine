#include "backsystm.h"
#include <QFile>
BackSystm::BackSystm(QObject *parent) : QObject(parent)
{

}
void BackSystm::init_user(){
    isys = new   Initsys();

    qDebug()<<"Initsys over";
    fw = new FormWelcome(this);
    qDebug()<<"FormWelcome over";
    m = new MainWindow();
    qDebug()<<"MainWindow over";
    fm = new Form_main();
    qDebug()<<"Form_main over";
    fm->bk = this ;

    this->port = 30080;

    if( !isys->get_isconfig()){
        this->fw->showFullScreen();
    }else{

        qDebug()<<"void BackSystm::init_user(:"<<this->isys->job;
        this->username= this->isys->job.value("username").toString(); //"webtest";
        this->passwd  = this->isys->job.value("passwd").toString();//"1234569870" ;
        this->userid  = this->isys->job.value("userid").toInt();
        this->ip      = this->isys->job.value("severip").toString(); //"192.168.2.33" ;
        qDebug()<<"username"<<username;
        qDebug()<<"passwd"<<passwd;
        qDebug()<<"userid"<<userid;
        qDebug()<<"ip"<<ip;
        m->set_(this,fm);
        this->m->showFullScreen();

    }
}

QJsonObject BackSystm::back_setting(){



}

void BackSystm::reset(){
    this->isys->reset();
}

QString BackSystm::backurl(int key){
    QString httpurl= "http://";
    httpurl.append(ip);
    httpurl.append(":");
    httpurl.append( QString::number(port) );
  switch(key){
    case 1:
    {
        httpurl.append(Get_urldevices);
        return httpurl;
        break;
    }

    case 2:
    {
       httpurl.append(Get_urlfenzus);
       return httpurl;
       break;
    }

    case 3:
    {
       httpurl.append(Get_urladdfenzus);
       return httpurl;
       break;
    }

    case 4:
    {
       httpurl.append(Get_urltest);
       return httpurl;
       break;
    }

    case 5:
    {
       httpurl.append(start_huatongconfig);
       return httpurl;
       break;
    }

    case 6:
    {
       httpurl.append(pull_huatongstatus );
       return httpurl;
       break;
    }

      case 7:
      {
         httpurl.append(GetListTask_db );
         return httpurl;
         break;
      }

      case 8:
      {
         httpurl.append(do_urlpaypid );
         return httpurl;
         break;
      }

      case 9:
      {
         httpurl.append(do_urlstoppid );
         return httpurl;
         break;
      }
      case 10:
      {
         httpurl.append(do_urldelfenzu );
         return httpurl;
         break;
      }
    default:
        return "ERROR";
      break;
  }

}

QJsonObject BackSystm::didi3(QByteArray data){
    QJsonObject obj,objt;
    QJsonParseError simp_json_error;
    QJsonDocument simp_parse_doucment = QJsonDocument::fromJson(data, &simp_json_error);
    if (simp_json_error.error == QJsonParseError::NoError) {
        objt = simp_parse_doucment.object();
        obj.insert("parse",true);
        obj.insert("objt",objt);

    }else{
        obj.insert("parse",false);
        return  obj;
    }
    return obj;
}

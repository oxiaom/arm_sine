#include "form_main.h"
#include "ui_form_main.h"
#include <QTabWidget>
#include <QPixmap>
#include <QScrollBar>
#include <qhttp.h>
#include <QJsonObject>
#include <QJsonArray>
#include <dialog2.h>
#include <QHBoxLayout>
#include <QMessageBox>
Form_main::Form_main(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form_main)
{
    ui->setupUi(this);


    ico.addFile(":l3.png",QSize(80,80),QIcon::Normal);
    ico.addFile(":l2.png",QSize(80,80),QIcon::Selected);
    icondis.addFile(":l1.png",QSize(80,80),QIcon::Normal);//掉线
    fenquico.addFile(":KJ1.png",QSize(80,80),QIcon::Normal);
    fenquico.addFile(":KJ2.png",QSize(80,80),QIcon::Selected);

    ui->listWidget->setViewMode( QListView::IconMode );
    ui->listWidget->setDragEnabled( false );
    ui->listWidget->setIconSize( QSize( 150 , 150 ) );
    ui->listWidget->verticalScrollBar()->setStyleSheet( this->qss );
    ui->listWidget->setSelectionMode( QAbstractItemView::MultiSelection );
    ui->listWidget->setWordWrap(true);

    ui->listWidget_2->setViewMode( QListView::IconMode );
    ui->listWidget_2->setDragEnabled( false );
    ui->listWidget_2->setIconSize( QSize( 150 , 150 ) );
    ui->listWidget_2->verticalScrollBar()->setStyleSheet( this->qss );
    ui->listWidget_2->setSelectionMode( QAbstractItemView::MultiSelection );

    ui->listWidget_3->setViewMode( QListView::ListMode );
    ui->listWidget_3->setDragEnabled( false );
    ui->listWidget_3->setIconSize( QSize( 150 , 150 ) );
    ui->listWidget_3->verticalScrollBar()->setStyleSheet( this->qss );
    ui->listWidget_3->setSelectionMode( QAbstractItemView::MultiSelection );
    ui->listWidget_3->setSpacing(2);
    connect(this->ui->listWidget_3,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT(dianbo_itemclicked(QListWidgetItem*)));

    this->ui->stackedWidget->setCurrentIndex(0);
}

void Form_main::set_myid(int id){
    this->ui->label_3->setText( QString::number( id ) );
}

Form_main::~Form_main()
{
    delete ui;
}


void Form_main::on_pushButtonduidian_clicked()
{
    int is = this->ui->listWidget->count();
    for(int j ; j < is;j++){
       delete this->ui->listWidget->item(j);
    }
    ui->listWidget->clear();
    reflash_devices();
    this->ui->stackedWidget->setCurrentIndex(0);
}

void Form_main::on_pushButton_2_clicked()
{
    int is = this->ui->listWidget_2->count();
    for(int j ; j < is;j++){
       delete this->ui->listWidget_2->item(j);
    }
    ui->listWidget_2->clear();

    reflash_fenqu();
    this->ui->stackedWidget->setCurrentIndex(1);
}

void Form_main::on_pushButton_3_clicked()
{
    int is = this->ui->listWidget_3->count();
    for(int j ; j < is;j++){
       delete this->ui->listWidget_3->item(j);
    }
    ui->listWidget_3->clear();
    reflash_dianbo();
    this->ui->stackedWidget->setCurrentIndex(2);
}



void Form_main::on_pushButton_clicked(bool checked)
{
    if(checked){
        this->ui->listWidget->selectAll();
        this->ui->pushButton->setText("取消");
    }else{
        for(int i = 0;i < this->ui->listWidget->count();i++){
            this->ui->listWidget->item(i)->setSelected(false);
        }
        this->ui->pushButton->setText("全选");
    }
}

void Form_main::on_pushButton_6_clicked()
{
    reflash_devices();
}
void Form_main::reflash_devices(){
    QString url;
    QHTTP *hp = new QHTTP(this);
    connect(hp,SIGNAL( over(QByteArray,int) ),this,SLOT( back_data_cmds(QByteArray,int) ) );
    QString  cmdline = "userid=";
    cmdline.append(QString::number(this->bk->userid));
    url = bk->backurl(1).append(cmdline);
    qDebug()<<url;
    hp->setting( url , 1 );


}
void Form_main::reflash_fenqu(){
    QString url;
    QHTTP *hp = new QHTTP(this);
    connect(hp,SIGNAL( over(QByteArray,int) ),this,SLOT( back_data_cmds(QByteArray,int) ) );
    QString  cmdline = "userid=";
    cmdline.append(QString::number(this->bk->userid));
    url = bk->backurl(2).append(cmdline);
    qDebug()<<url;
    hp->setting( url , 2 );

}

void Form_main::reflash_dianbo(){
    QString url;
    QHTTP *hp = new QHTTP(this);
    connect(hp,SIGNAL( over( QByteArray , int) ),this,SLOT( back_data_cmds(QByteArray,int) ) );
    QString  cmdline = "userid=";
    cmdline.append(QString::number(this->bk->userid));
    url = bk->backurl(7).append(cmdline);
    qDebug()<<url;
    hp->setting( url , 7 );
}

void Form_main::back_data_cmds(QByteArray data,int code){


    if( code == 1 ){
        QJsonObject obj = this->bk->didi3(data);
        if(obj.value("parse").toBool()){
            if(obj.value("objt").toObject().value("res").toBool()){
                QJsonArray objary =  obj.value("objt").toObject().value("data").toArray();


                int is = this->ui->listWidget->count();
                for(int j ; j < is;j++){
                  delete this->ui->listWidget->item(j);
                }

                ui->listWidget->clear();

                QListWidgetItem *item;
                qDebug()<<objary;
                for(int i = 0; i <  objary.count() ; i++ ){
                    item = new QListWidgetItem(ico,objary.at(i).toObject().value("name").toString());

                    if(objary.at(i).toObject().value("status").toInt() == 0){
                        item->setFlags(Qt::ItemIsEnabled);
                        item->setIcon(icondis);
                    }else{
                        item->setIcon(ico);
                    }
                    ui->listWidget->addItem(item);
                    item->setData(10000,objary.at(i).toObject().value("sn"));//sn
                    item->setData(10001,objary.at(i).toObject().value("devid"));//devid
                    item->setData(10002,objary.at(i).toObject().value("kindsk"));//kindsk
                    item->setData(10003,objary.at(i).toObject().value("name"));//name
                    item->setData(10004,objary.at(i).toObject().value("status"));//status
                }
            }else{
                QMessageBox::information(NULL, QString("提示"), QString("服务器不在线"));
            }
        }
    }else if( code == 2 ){

        QJsonObject obj = this->bk->didi3(data);
        if(obj.value("parse").toBool()){
            if(obj.value("objt").toObject().value("res").toBool()){
                QListWidgetItem *item;
                QJsonArray objary =  obj.value("objt").toObject().value("data").toArray();
                int is = this->ui->listWidget_2->count();
                for(int j ; j < is;j++){
                   delete this->ui->listWidget_2->item(j);
                }
                ui->listWidget_2->clear();
                qDebug()<<objary;
                for(int i = 0; i <  objary.count() ; i++ ){
                    item = new QListWidgetItem(fenquico,objary.at(i).toObject().value("fenzuname").toString());
                    ui->listWidget_2->addItem(item);
                    item->setData(10000,objary.at(i).toObject().value("id"));       //id
                    item->setData(10001,objary.at(i).toObject().value("userid"));   //userid
                    item->setData(10002,objary.at(i).toObject().value("fenzuname"));//fenzuname
                    item->setData(10003,objary.at(i).toObject().value("fdevid"));   //fdevid
                    item->setData(10004,objary.at(i).toObject().value("snlist"));   //snlist
                }
            }else{
                QMessageBox::information(NULL, QString("提示"), QString("服务器不在线"));
            }
        }
    }else if( code == 7 ){

        QJsonObject obj = this->bk->didi3(data);
        if(obj.value("parse").toBool()){
            if(obj.value("objt").toObject().value("res").toBool()){
                QListWidgetItem *item;

                QJsonArray objary =  obj.value("objt").toObject().value("data").toArray();
                qDebug()<<"url:7->"<<objary.count();

                int is = this->ui->listWidget_3->count();
                for(int j ; j < is;j++){
                   delete this->ui->listWidget_3->item(j);
                }
                ui->listWidget_3->clear();

                for( int i = 0 ; i <  objary.count() ; i++ ){
                    item = new QListWidgetItem(fenquico,objary.at(i).toObject().value("name").toString());

                    if(objary.at(i).toObject().value("status").toString().toInt() == 0 ){
                        qDebug()<<"set true";
                        item->setIcon(ico);
                    }else{
                        qDebug()<<"set false";
                        item->setIcon(fenquico);
                    }

                    qDebug()<<"add item s ->"<< item->isSelected() << objary.at(i).toObject().value("status").toString().toInt() ;
                    ui->listWidget_3->addItem(item);
                    item->setData(10000,objary.at(i).toObject().value("userid").toString().toInt());       //userid
                    item->setData(10001,objary.at(i).toObject().value("idstask").toString().toInt());      //fdevid
                    item->setData(10002,objary.at(i).toObject().value("status").toString().toInt());       //status


                }


            }else{
                QMessageBox::information(this, QString("提示"), QString("服务器不在线"));
            }
        }
    }


}

void Form_main::dianbo_itemclicked(QListWidgetItem *item){

    qDebug() << "dianbo_itemclicked:" <<item->data(10000).toInt();
    qDebug() << "dianbo_itemclicked:" <<item->data(10001).toInt();
    qDebug() << "dianbo_itemclicked:" <<item->data(10002).toInt();
    qDebug() << "dianbo_itemclicked:" <<item->isSelected();
    if( item == NULL ){
        return;
    }
    this->item = item;
    if( item->data(10002).toString().toInt() == 0 ){
        wait = new waiting(bk,item,true,item->data(10001).toInt(),this);
        connect(this->wait,SIGNAL(backres(int,QListWidgetItem*)),this,SLOT(wait_res(int,QListWidgetItem*)));
        wait->open();
    }else{
        wait = new waiting(bk,item,false,item->data(10001).toInt(),this);
        connect(this->wait,SIGNAL(backres(int,QListWidgetItem*)),this,SLOT(wait_res(int,QListWidgetItem*)));
        wait->open();
    }

}

void Form_main::wait_res( int res,QListWidgetItem *item ){
    if(res == 1){      // 开始成功
        qDebug()<<"change coin to stop v";
        item->setIcon(fenquico);//换成结束的图标
        item->setData(10002,1);
    }else if(res == 2){//结束成功
        qDebug()<<"change coin to start v";
        item->setIcon(ico); //换成开始的图标
        item->setData(10002,0);
    }else if(res == 3){//开始失败

    }else if(res == 4){//结束失败

    }else if(res == 5){ //error

    }
}

void Form_main::on_pushButton_5_clicked()
{
    QStringList list;
    if(ui->listWidget->selectedItems().count() == 0){
        return ;
    }
    for( QListWidgetItem *item :  ui->listWidget->selectedItems() ){
        list.append(item->data(10000).toString());
    }
    qDebug()<<list;
    Dialog *dl = new Dialog(bk,this);

    dl->list =list;
    dl->open();
    qDebug()<<"void Form_main::on_pushButton_5_clicked()";
}

void Form_main::on_pushButton_8_clicked() //编辑
{
    Dialog2 *d2 =  new Dialog2(this);
    d2->bk = bk;
    for(int i = 0 ; i< this->ui->listWidget->count();i++){
        d2->listall.append(this->ui->listWidget->item(i));
    }

    for(int i = 0 ; i< this->ui->listWidget_2->count();i++){
        d2->listfenzu.append(this->ui->listWidget_2->item(i));
    }

    d2->oppen();

}
void Form_main::on_pushButton_7_clicked() //呼叫
{
    qDebug()<<"void Form_main::on_pushButton_7_clicked()";

    QStringList list;
    if(ui->listWidget_2->selectedItems().count() == 0){
        return ;
    }
    for( QListWidgetItem *item :  ui->listWidget_2->selectedItems() ){
        int ii = item->data(10004).toJsonValue().toArray().size();
        for(int j =0;j < ii ;j++){
            list.append( item->data(10004).toJsonValue().toArray().at(j).toString() );
        }
    }

    qDebug()<<list;

    Dialog *dl = new Dialog( bk ,this);
    dl->list = list;
    dl->open();
}

void Form_main::on_pushButton_9_clicked()
{
    QStringList list;

    list.append( "32ffd405474d333344582143" );

    qDebug()<<list;
    Dialog *dl = new Dialog(bk,6001,this);
    dl->list =list;
    dl->open();
    qDebug()<<"void Form_main::on_pushButton_9_clicked()";
}


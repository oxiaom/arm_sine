#include "dialog2.h"
#include "ui_dialog2.h"
#include <QScrollBar>
#include <QDebug>
#include "dialog3.h"
#include <qhttp.h>
Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    ico.addFile(":01.png",QSize(98,98),QIcon::Normal);
    ico.addFile(":02.png",QSize(98,98),QIcon::Selected);

    icondis.addFile(":KJ1.png",QSize(98,98),QIcon::Normal);
    fenquico.addFile(":KJ1.png",QSize(80,80),QIcon::Normal);
    fenquico.addFile(":KJ2.png",QSize(80,80),QIcon::Selected);


    ui->listWidget->setViewMode( QListView::IconMode );
    ui->listWidget->setDragEnabled( false );
    ui->listWidget->setIconSize(QSize(70,70));
    ui->listWidget->verticalScrollBar()->setStyleSheet( this->qss );
    ui->listWidget->setSelectionMode( QAbstractItemView::SingleSelection );

    ui->listWidget_2->setViewMode( QListView::IconMode );
    ui->listWidget_2->setDragEnabled( false );
    ui->listWidget_2->setIconSize(QSize(70,70));
    ui->listWidget_2->verticalScrollBar()->setStyleSheet( this->qss );
    ui->listWidget_2->setSelectionMode( QAbstractItemView::MultiSelection );

    ui->listWidget_3->setViewMode( QListView::IconMode );
    ui->listWidget_3->setDragEnabled( false );
    ui->listWidget_3->setIconSize(QSize(70,70));
    ui->listWidget_3->verticalScrollBar()->setStyleSheet( this->qss );
    ui->listWidget_3->horizontalScrollBar()->setStyleSheet( this->qss );
    ui->listWidget_3->setSelectionMode( QAbstractItemView::MultiSelection );
}

Dialog2::~Dialog2()
{
    delete ui;
}
void Dialog2::oppen(){
    for(QListWidgetItem *it : this->listall){
        QListWidgetItem *is = it->clone();
        is->setTextColor(QColor(255,255,255));
        this->ui->listWidget_3->addItem(is);
        qDebug()<<it->text();
    }
    qDebug()<<"---------------------------------";
    for(QListWidgetItem *it : this->listfenzu){

        QListWidgetItem *is = it->clone();
        is->setTextColor(QColor(255,255,255));
        this->ui->listWidget->addItem(is);
        qDebug()<<it->text();
    }
    this->open();
}
void Dialog2::on_pushButton_4_clicked()
{

    this->close();
}

void Dialog2::on_pushButton_2_clicked() //移入
{
    for(QListWidgetItem *it : this->ui->listWidget_3->selectedItems()){
        this->ui->listWidget_3->removeItemWidget(it);
        QListWidgetItem *is = it->clone();
        is->setTextColor(QColor(255,255,255));
        this->ui->listWidget_2->addItem(is);
        qDebug()<<it->text();
        delete it;
    }
}

void Dialog2::on_pushButton_3_clicked() //移出
{
    for(QListWidgetItem *it : this->ui->listWidget_2->selectedItems()){
        this->ui->listWidget_2->removeItemWidget( it );
        QListWidgetItem *is = it->clone();
        is->setTextColor(QColor(255,255,255));
        this->ui->listWidget_3->addItem( is );
        qDebug()<<it->text();
        delete it;
    }
}

void Dialog2::back_data_cmds( QByteArray data , int code ){


    if( code == 2 ){

        QJsonObject obj = this->bk->didi3(data);
        if(obj.value("parse").toBool()){
            if(obj.value("objt").toObject().value("res").toBool()){
                QListWidgetItem *item;
                QJsonArray objary =  obj.value("objt").toObject().value("data").toArray();
                int is = this->ui->listWidget->count();
                for(int j ; j < is;j++){
                   delete this->ui->listWidget->item(j);
                }
                ui->listWidget->clear();
                qDebug()<<objary;
                for(int i = 0; i <  objary.count() ; i++ ){                    
                    item = new QListWidgetItem(fenquico,objary.at(i).toObject().value("fenzuname").toString());
                    item->setTextColor(QColor(255,255,255));
                    ui->listWidget->addItem(item);

                    item->setData(10000,objary.at(i).toObject().value("id"));       //id
                    item->setData(10001,objary.at(i).toObject().value("userid"));   //userid
                    item->setData(10002,objary.at(i).toObject().value("fenzuname"));//fenzuname
                    item->setData(10003,objary.at(i).toObject().value("fdevid"));   //fdevid
                    item->setData(10004,objary.at(i).toObject().value("snlist"));   //snlist
                }
            }
        }
    }else if( code == 10 ){
        QJsonObject obj = this->bk->didi3(data);
        back_add_kj(obj.value("parse").toBool());
        this->ui->pushButton_5->setDisabled(false);
    }

}
void Dialog2::back_add_kj(bool ress){
    if(ress){
        QString url;
        QHTTP *hp = new QHTTP(this);
        connect(hp,SIGNAL( over(QByteArray,int) ),this->parent(),SLOT( back_data_cmds(QByteArray,int) ) );
        connect(hp,SIGNAL( over(QByteArray,int) ),this,SLOT( back_data_cmds(QByteArray,int) ) );
        QString  cmdline = "userid=";
        cmdline.append( QString::number( this->bk->userid ) );
        url = bk->backurl(2).append( cmdline );
        qDebug()<<url;
        hp->setting( url , 2 );
    }
}
void Dialog2::on_pushButton_clicked()  //添加快捷
{
    qDebug()<<"D2:o D3;";
    Dialog3 *d3 = new Dialog3(this);
    connect(d3,SIGNAL(backsig(bool)),this,SLOT(back_add_kj(bool)));
    d3->bk = this->bk;
    for(int i ; i< this->ui->listWidget_2->count() ; i++ ){
        QListWidgetItem *it = this->ui->listWidget_2->item(i);

        QString sn_devid=it->data(10000).toString();
        sn_devid.append("_");
        sn_devid.append( QString::number( it->data(10001).toInt() ) );
        it->setTextColor(QColor(255,255,255));
        d3->snlist.append(sn_devid);
        qDebug()<<"D3"<<it->text()<<sn_devid;
    }
    d3->fzname = "快捷";
    d3->fzname.append(QString::number( this->ui->listWidget->count() + 1));
    if(d3->snlist.size() > 0){
         d3->open();
         d3->dohttp();
    }else{
         d3->deleteLater();
    }

}

void Dialog2::on_pushButton_5_clicked()
{
    if( ui->listWidget->selectedItems().size() > 0 ){
        this->ui->pushButton_5->setDisabled(true);
        QListWidgetItem *it = this->ui->listWidget->selectedItems().at(0);
        QString url;
        QHTTP *hp = new QHTTP(this);
        connect(hp,SIGNAL( over(QByteArray,int) ),this->parent(),SLOT( back_data_cmds(QByteArray,int) ) );
        connect(hp,SIGNAL( over(QByteArray,int) ),this,SLOT( back_data_cmds(QByteArray,int) ) );
        QString  cmdline = "userid=";
        cmdline.append( QString::number( this->bk->userid ) );
        cmdline.append( "&fzid=" );
        qDebug()<<"it->data(10000)"<<it->data(10000);
        cmdline.append( QString::number( it->data(10000).toJsonValue().toString().toInt() ) );
        url = bk->backurl(10).append( cmdline );
        qDebug()<<url;
        hp->setting( url , 10 );
    }
}

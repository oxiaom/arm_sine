#ifndef FORM_MAIN_H
#define FORM_MAIN_H

#include <QWidget>
#include <QMap>
#include <QListWidgetItem>
#include <backsystm.h>
#include <dialog.h>
#include <waiting.h>

namespace Ui {
class Form_main;
}
class waiting;
class BackSystm;
class Form_main : public QWidget
{
    Q_OBJECT

public:
    explicit Form_main(QWidget *parent = 0);
    ~Form_main();
    BackSystm *bk;
    void reflash_devices();
    void reflash_fenqu();
    void reflash_dianbo();
    void set_myid(int id);
    waiting *wait;
    QListWidgetItem *item;

private slots:
    void dianbo_itemclicked(QListWidgetItem *item);
    void back_data_cmds(QByteArray data,int code);

    void on_pushButtonduidian_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked(bool checked);

    void on_pushButton_6_clicked();


    void on_pushButton_5_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();
    

    void on_pushButton_9_clicked();

    void wait_res(int res,QListWidgetItem *item);

private:

    QIcon ico,huatongico,huatongicodis,fenquico,fenquicodis,icondis,StartCoin,StopCoin;
    Ui::Form_main *ui;
    QMap<int , QListWidgetItem *>  labamap;


    QString qss = "QScrollBar:vertical{" // 留出9px给上面和下面的箭头
                "width:50px;"
                "background:rgba(0,0,0,0%);"
                "margin:0px,0px,0px,0px;"
//                "padding-top:50px;"
//                "padding-bottom:50px;"
            "}"
//           "QScrollBar::handle:vertical"
//           "{"
//                "width:50px;"
//                "background:rgba(0,0,0,25%);"
//            //    "border-radius:25px;"    // 滚动条两端变成椭圆
//                "min-height:50;"
//            "}"
//            "QScrollBar::handle:vertical:hover"  // 鼠标放到滚动条上的时候，颜色变深
//            "{"
//                "width:50px;"
//                "background:rgba(0,0,0,50%);"
//            //    "border-radius:50px;"
//                "min-height:50;"
//            "}"
//            "QScrollBar::add-line:vertical"  // 这个应该是设置下箭头的，3.png就是箭头
//            "{"
//                "height:50px;width:50px;"
//                "border-image:url(:42.png);"
//                "subcontrol-position:bottom;"
//            "}"
//            "QScrollBar::sub-line:vertical"  // 设置上箭头
//            "{"
//                "height:50px;width:50px;"
//                "border-image:url(:42.png);"
//                "subcontrol-position:top;"
//            "}"
//            "QScrollBar::add-line:vertical:hover"   // 当鼠标放到下箭头上的时候
//            "{"
//                "height:50px;width:50px;"
//                "border-image:url(:41.png);"
//                "subcontrol-position:bottom;"
//            "}"
//            "QScrollBar::sub-line:vertical:hover"  // 当鼠标放到下箭头上的时候
//            "{"
//                "height:50px;width:50px;"
//                "border-image:url(:41.png);"
//                "subcontrol-position:top;"
//            "}"
            "QScrollBar::add-page:vertical,QScrollBar::sub-page:vertical" // 当滚动条滚动的时候，上面的部分和下面的部分
            "{"
               " background:rgba(0,0,0,10%);"
             //" border-radius:50px;"
            "}";
};

#endif // FORM_MAIN_H

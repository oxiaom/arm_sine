#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>
#include <QListWidget>
#include <backsystm.h>
namespace Ui {
class Dialog2;
}

class Dialog2 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog2(QWidget *parent = 0);

    ~Dialog2();
    void oppen();
    QListWidget *listdev;
    QListWidget *fenzu;
    QList <QListWidgetItem *> listall;
    QList <QListWidgetItem *> listfenzu;
    BackSystm *bk;
private slots:
    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();
    void back_add_kj(bool ress);
    void back_data_cmds( QByteArray data , int code );


private:
    QIcon ico,huatongico,huatongicodis,fenquico,fenquicodis,icondis;
    Ui::Dialog2 *ui;
    QString qss = "QScrollBar:vertical{" // 留出9px给上面和下面的箭头
                  "width:50px;"
                  "background:rgba(0,0,0,0%);"
                  "}";
};

#endif // DIALOG2_H

#ifndef WAITING_H
#define WAITING_H

#include <QDialog>
#include <QMovie>
#include <QLabel>
#include <qhttp.h>
#include <backsystm.h>

namespace Ui {
class waiting;
}
class BackSystm;
class QListWidgetItem;
class waiting : public QDialog
{
    Q_OBJECT

public:
    explicit waiting( BackSystm *bk ,QListWidgetItem *item , bool isstart , int taskid , QWidget *parent = 0 );
    ~waiting();
signals:
    void backres(int i,QListWidgetItem *item);

public slots:
    void back_data_cmds( QByteArray data , int code );
    void error(QNetworkReply::NetworkError er);
private:
    Ui::waiting *ui;
    QMovie *mv;
    QLabel *lab;
    int taskid;
    QHTTP *htp;
    BackSystm *bk;
    QListWidgetItem *item;
};

#endif // WAITING_H

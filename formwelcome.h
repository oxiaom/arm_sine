#ifndef FORMWELCOME_H
#define FORMWELCOME_H

#include <QWidget>
#include <backsystm.h>
#include <QNetworkReply>
#include <QTimer>
namespace Ui {
class FormWelcome;
}
class BackSystm;

class FormWelcome : public QWidget
{
    Q_OBJECT

public:
    explicit FormWelcome(BackSystm *bk , QWidget *parent = 0);
    ~FormWelcome();
    BackSystm *bk;
public slots:
    void on_pushButton_clicked(); 
    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void back_data_cmds(QByteArray data,int code);
    void back_error(QNetworkReply::NetworkError er);

    void timerout_();

public:
    Ui::FormWelcome *ui;
    QTimer *t;
    bool ispassed = false;


};

#endif // FORMWELCOME_H

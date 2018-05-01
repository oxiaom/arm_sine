#ifndef DIALOG3_H
#define DIALOG3_H

#include <QDialog>

#include <QList>
#include <backsystm.h>
namespace Ui {
class Dialog3;
}

class Dialog3 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog3(QWidget *parent = 0);
    ~Dialog3();
    QList<QString> snlist;
    QString fzname;
    BackSystm *bk;
    void dohttp();
signals:
    void backsig(bool tres);
private slots:
    void on_pushButton_clicked();
    void back_data_cmds(QByteArray data,int code);

private:
    Ui::Dialog3 *ui;
};

#endif // DIALOG3_H

#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QStringList>
#include <QTcpSocket>
#include <QUdpSocket>
#include "backsystm.h"
class BackSystm;
namespace Ui {
    class Dialog;
}
class RenderArea : public QWidget
{
    Q_OBJECT

public:
    RenderArea(QWidget *parent = 0);

    void setLevel(qreal value);

protected:
    void paintEvent(QPaintEvent *event);

private:
    qreal m_level;
    QPixmap m_pixmap;
};

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(BackSystm *bk , QWidget *parent );
    explicit Dialog(BackSystm *bk , int localport ,QWidget *parent );
    QStringList list;
    BackSystm *bk;
    ~Dialog();

private slots:
    void on_pushButton_clicked();
    void connected();
    void disconnected();
    void error(QAbstractSocket::SocketError er);
    void rdy();
    void urdy();
    void on_verticalSlider_valueChanged(int value);

    void localprot_connected();
    void localprot_urdy();

private:
    Ui::Dialog *ui;
    QTcpSocket *sock;
    QUdpSocket *udpk;
    RenderArea *ra;
    int localport;
    bool is_frist=true;
};

#endif // DIALOG_H

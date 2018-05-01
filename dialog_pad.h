#ifndef DIALOG_PAD_H
#define DIALOG_PAD_H

#include <QDialog>
#include <QLineEdit>
namespace Ui {
class Dialog_pad;
}

class Dialog_pad : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_pad(QString name , QLineEdit *ed, QWidget *parent = 0);
    ~Dialog_pad();

    QLineEdit *ed;
private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_15_clicked();

private:
    Ui::Dialog_pad *ui;
};

#endif // DIALOG_PAD_H

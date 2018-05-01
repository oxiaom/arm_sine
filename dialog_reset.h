#ifndef DIALOG_RESET_H
#define DIALOG_RESET_H

#include <QDialog>
#include <backsystm.h>
class BackSystm;
namespace Ui {
class Dialog_reset;
}

class Dialog_reset : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_reset(BackSystm *bks, QWidget *parent = 0);
    ~Dialog_reset();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog_reset *ui;
    BackSystm *bks;
};

#endif // DIALOG_RESET_H

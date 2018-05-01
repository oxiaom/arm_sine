#include "mainwindow.h"
#include <QApplication>

#include <form_main.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    BackSystm *bk = new BackSystm();
    bk->init_user();
    return a.exec();
}

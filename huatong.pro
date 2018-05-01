#-------------------------------------------------
#
# Project created by QtCreator 2017-11-19T11:31:03
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = huatong
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        backsystm.cpp \
        dialog.cpp \
        dialog_pad.cpp \
        dialog2.cpp \
        dialog3.cpp \
        form_main.cpp \
        formwelcome.cpp \
        initsys.cpp \
        qhttp.cpp \
        waiting.cpp \
    dialog_reset.cpp

HEADERS  += mainwindow.h \
    backsystm.h \
    dialog.h \
    dialog_pad.h \
    dialog2.h \
    dialog3.h \
    form_main.h \
    formwelcome.h \
    initsys.h \
    qhttp.h \
    waiting.h \
    dialog_reset.h

FORMS    += \
    dialog.ui \
    dialog_pad.ui \
    dialog2.ui \
    dialog3.ui \
    form_main.ui \
    formwelcome.ui \
    mainwindow.ui \
    waiting.ui \
    dialog_reset.ui

RESOURCES += \
    qq.qrc

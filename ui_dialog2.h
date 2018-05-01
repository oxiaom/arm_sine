/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog2
{
public:
    QListWidget *listWidget;
    QGroupBox *groupBox;
    QListWidget *listWidget_2;
    QGroupBox *groupBox_2;
    QListWidget *listWidget_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName(QStringLiteral("Dialog2"));
        Dialog2->resize(800, 480);
        Dialog2->setStyleSheet(QStringLiteral("background-color: rgb(85, 0, 255);"));
        listWidget = new QListWidget(Dialog2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(20, 20, 651, 101));
        listWidget->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        groupBox = new QGroupBox(Dialog2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 130, 221, 341));
        listWidget_2 = new QListWidget(groupBox);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(10, 20, 201, 311));
        listWidget_2->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        groupBox_2 = new QGroupBox(Dialog2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(400, 130, 391, 341));
        listWidget_3 = new QListWidget(groupBox_2);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(10, 20, 371, 311));
        listWidget_3->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(Dialog2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(260, 320, 121, 71));
        pushButton_2 = new QPushButton(Dialog2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(260, 140, 121, 81));
        pushButton_2->setStyleSheet(QStringLiteral(""));
        pushButton_3 = new QPushButton(Dialog2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(260, 230, 121, 81));
        pushButton_3->setStyleSheet(QStringLiteral("border-color: rgb(85, 255, 0);"));
        pushButton_4 = new QPushButton(Dialog2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(260, 400, 121, 61));
        pushButton_5 = new QPushButton(Dialog2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(680, 20, 111, 101));

        retranslateUi(Dialog2);

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QApplication::translate("Dialog2", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("Dialog2", "\347\273\210\347\253\257", 0));
        groupBox_2->setTitle(QApplication::translate("Dialog2", "\345\205\250\351\203\250\347\273\210\347\253\257", 0));
        pushButton->setText(QApplication::translate("Dialog2", "\346\267\273\345\212\240\345\277\253\346\215\267", 0));
        pushButton_2->setText(QApplication::translate("Dialog2", "\347\247\273\345\205\245", 0));
        pushButton_3->setText(QApplication::translate("Dialog2", "\347\247\273\345\207\272", 0));
        pushButton_4->setText(QApplication::translate("Dialog2", "\351\200\200\345\207\272", 0));
        pushButton_5->setText(QApplication::translate("Dialog2", "\345\210\240\351\231\244\345\277\253\346\215\267", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H

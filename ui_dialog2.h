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
        Dialog2->setStyleSheet(QStringLiteral("border-image: url(:/BJBEIJING.png);"));
        listWidget = new QListWidget(Dialog2);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(40, 30, 631, 101));
        listWidget->setStyleSheet(QLatin1String("\n"
"border-image: url(:/B12.png);"));
        groupBox = new QGroupBox(Dialog2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(40, 160, 221, 301));
        groupBox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);font: 90 16pt \"Aharoni\"; \n"
"border-image: url(:/B12.png);"));
        listWidget_2 = new QListWidget(groupBox);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(10, 40, 211, 251));
        listWidget_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);font: 90 8pt \"Aharoni\"; \n"
"border-image: url(:/B12.png);\n"
"QListWidget{font: 75 12pt \"Aharoni\";color: rgb(255, 255, 255);border-image: url(:B12.png); padding-top:2px; padding-bottom:2px;padding-left:5px;padding-right:2px;}\n"
"\n"
"QListWidget::Item{ margin-top:3px; margin-bottom:3px;margin-left:3px;margin-right:3px;}"));
        groupBox_2 = new QGroupBox(Dialog2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(390, 160, 361, 301));
        groupBox_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);font: 90 16pt \"Aharoni\"; \n"
"border-image: url(:/B12.png);"));
        listWidget_3 = new QListWidget(groupBox_2);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(10, 40, 351, 261));
        listWidget_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);font: 90 8pt \"Aharoni\"; \n"
"border-image: url(:/B12.png);\n"
"QListWidget{font: 75 12pt \"Aharoni\";color: rgb(255, 255, 255);border-image: url(:B12.png); padding-top:2px; padding-bottom:2px;padding-left:2px;padding-right:2px;}\n"
"\n"
"QListWidget::Item{ margin-top:3px; margin-bottom:3px;margin-left:3px;margin-right:3px;}\n"
"\n"
" "));
        pushButton = new QPushButton(Dialog2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 320, 111, 61));
        pushButton->setStyleSheet(QLatin1String(" \n"
"QPushButton{color: rgb(255, 255, 255);font: 90 16pt \"Aharoni\";  border-radius:10px;}\n"
"QPushButton{border-image: url(://KR.png);  border-radius:10px;}\n"
"QPushButton:hover{border-image: url(:/K6.png);  border-radius:10px;}  \n"
"QPushButton:pressed{border-image: url(:/K6.png);  border-radius:10px;}"));
        pushButton_2 = new QPushButton(Dialog2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 160, 111, 51));
        pushButton_2->setStyleSheet(QLatin1String(" \n"
"QPushButton{color: rgb(255, 255, 255);font: 90 16pt \"Aharoni\";  border-radius:10px;}\n"
"QPushButton{border-image: url(://Yellow.png);  border-radius:10px;}\n"
"QPushButton:hover{border-image: url(:/K6.png);  border-radius:10px;}  \n"
"QPushButton:pressed{border-image: url(:/K6.png);  border-radius:10px;}"));
        pushButton_3 = new QPushButton(Dialog2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 240, 111, 51));
        pushButton_3->setStyleSheet(QLatin1String(" \n"
"QPushButton{color: rgb(255, 255, 255);font: 90 16pt \"Aharoni\";  border-radius:10px;}\n"
"QPushButton{border-image: url(://Yellow.png);  border-radius:10px;}\n"
"QPushButton:hover{border-image: url(:/K6.png);  border-radius:10px;}  \n"
"QPushButton:pressed{border-image: url(:/K6.png);  border-radius:10px;}"));
        pushButton_4 = new QPushButton(Dialog2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(270, 400, 111, 61));
        pushButton_4->setStyleSheet(QLatin1String(" \n"
"QPushButton{color: rgb(255, 255, 255);font: 90 16pt \"Aharoni\";  border-radius:10px;}\n"
"QPushButton{border-image: url(://KR.png);  border-radius:10px;}\n"
"QPushButton:hover{border-image: url(:/K6.png);  border-radius:10px;}  \n"
"QPushButton:pressed{border-image: url(:/K6.png);  border-radius:10px;}"));
        pushButton_5 = new QPushButton(Dialog2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(680, 20, 111, 111));
        pushButton_5->setStyleSheet(QLatin1String(" \n"
"QPushButton{color: rgb(255, 255, 255);font: 90 18pt \"Aharoni\";  border-radius:10px;}\n"
"QPushButton{border-image: url(://KR.png);  border-radius:10px;}\n"
"QPushButton:hover{border-image: url(:/K6.png);  border-radius:10px;}  \n"
"QPushButton:pressed{border-image: url(:/K6.png);  border-radius:10px;}"));

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

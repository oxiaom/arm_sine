/********************************************************************************
** Form generated from reading UI file 'form_main.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_MAIN_H
#define UI_FORM_MAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form_main
{
public:
    QWidget *widget;
    QPushButton *pushButtonduidian;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QListWidget *listWidget;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *page_2;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QListWidget *listWidget_2;
    QWidget *page_4;
    QListWidget *listWidget_3;

    void setupUi(QWidget *Form_main)
    {
        if (Form_main->objectName().isEmpty())
            Form_main->setObjectName(QStringLiteral("Form_main"));
        Form_main->resize(800, 480);
        Form_main->setMinimumSize(QSize(800, 480));
        Form_main->setStyleSheet(QStringLiteral(""));
        widget = new QWidget(Form_main);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 801, 481));
        widget->setStyleSheet(QStringLiteral("border-image: url(:/K3.png);"));
        pushButtonduidian = new QPushButton(widget);
        pushButtonduidian->setObjectName(QStringLiteral("pushButtonduidian"));
        pushButtonduidian->setGeometry(QRect(0, 400, 271, 81));
        pushButtonduidian->setStyleSheet(QLatin1String("QPushButton{color: rgb(255, 255, 255);font: 90 22pt \"Aharoni\";}\n"
"QPushButton{border-image: url(://K7.png);}\n"
"QPushButton:hover{border-image: url(:/K6.png);}  \n"
"QPushButton:pressed{border-image: url(:/K6.png);}\n"
""));
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 400, 251, 81));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{color: rgb(255, 255, 255);font: 90 22pt \"Aharoni\";}\n"
"QPushButton{border-image: url(://K7.png);}\n"
"QPushButton:hover{border-image: url(:/K6.png);}  \n"
"QPushButton:pressed{border-image: url(:/K6.png);}\n"
""));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(540, 400, 261, 81));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{color: rgb(255, 255, 255);font: 90 22pt \"Aharoni\";}\n"
"QPushButton{border-image: url(://K7.png);}\n"
"QPushButton:hover{border-image: url(:/K6.png);}  \n"
"QPushButton:pressed{border-image: url(:/K6.png);}"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 251, 31));
        label->setStyleSheet(QLatin1String("font: 75 20pt \"Aharoni\";\n"
"color: rgb(255, 255, 255);\n"
"border-image: url(:/K9.png);"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 20, 54, 21));
        label_2->setStyleSheet(QLatin1String("font: 75 15pt \"Aharoni\";\n"
"color: rgb(255, 255, 255);\n"
"border-image: url(:/K9.png);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(350, 20, 91, 21));
        label_3->setStyleSheet(QLatin1String("font: 75 15pt \"Aharoni\";\n"
"border-image: url(:/K9.png);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget = new QStackedWidget(widget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 50, 801, 351));
        stackedWidget->setStyleSheet(QStringLiteral("border-image: url(:/K1.png);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(640, 20, 161, 101));
        pushButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/K7.png);} \n"
"QPushButton{color: rgb(255, 255, 255);font: 90 30pt \"Aharoni\";}\n"
"QPushButton:checked{border-image: url(:K6.png);}"));
        pushButton->setCheckable(true);
        pushButton->setChecked(false);
        listWidget = new QListWidget(page);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 0, 641, 351));
        listWidget->setStyleSheet(QLatin1String("QListWidget{font: 75 12pt \"Aharoni\";color: rgb(155, 255, 250);border-image: url(:K9.png); margin-top:20px; margin-bottom:20px;margin-left:20px;margin-right:20px;}\n"
"\n"
"QListWidget::Item{ margin-top:10px; margin-bottom:10px;margin-left:15px;margin-right:15px;}"));
        pushButton_5 = new QPushButton(page);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(640, 240, 161, 101));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton{color: rgb(255, 255, 255);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(://K7.png);}\n"
"QPushButton:hover{border-image: url(:/K6.png);}  \n"
"QPushButton:pressed{border-image: url(:/K6.png);}"));
        pushButton_6 = new QPushButton(page);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(640, 130, 161, 101));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton{color: rgb(255, 255, 255);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(://K7.png);}\n"
"QPushButton:hover{border-image: url(:/K6.png);}  \n"
"QPushButton:pressed{border-image: url(:/K6.png);}"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setStyleSheet(QStringLiteral(""));
        pushButton_7 = new QPushButton(page_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(640, 190, 161, 151));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton{color: rgb(255, 255, 255);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(://K7.png);}\n"
"QPushButton:hover{border-image: url(:/K6.png);}  \n"
"QPushButton:pressed{border-image: url(:/K6.png);}"));
        pushButton_8 = new QPushButton(page_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(640, 40, 161, 141));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton{color: rgb(255, 255, 255);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(://K7.png);}\n"
"QPushButton:hover{border-image: url(:/K6.png);}  \n"
"QPushButton:pressed{border-image: url(:/K6.png);}"));
        listWidget_2 = new QListWidget(page_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(0, 0, 641, 351));
        listWidget_2->setStyleSheet(QStringLiteral("border-image: url(:/K9.png);"));
        stackedWidget->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        page_4->setStyleSheet(QStringLiteral(""));
        listWidget_3 = new QListWidget(page_4);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));
        listWidget_3->setGeometry(QRect(30, 20, 741, 311));
        listWidget_3->setStyleSheet(QStringLiteral("font: 75 26pt \"Aharoni\";"));
        stackedWidget->addWidget(page_4);

        retranslateUi(Form_main);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Form_main);
    } // setupUi

    void retranslateUi(QWidget *Form_main)
    {
        Form_main->setWindowTitle(QApplication::translate("Form_main", "Form", 0));
        pushButtonduidian->setText(QApplication::translate("Form_main", "\345\257\271\347\202\271\345\271\277\346\222\255", 0));
        pushButton_2->setText(QApplication::translate("Form_main", "\345\210\206\345\214\272\345\271\277\346\222\255", 0));
        pushButton_3->setText(QApplication::translate("Form_main", "\350\265\204\346\272\220\347\202\271\346\222\255", 0));
        label->setText(QApplication::translate("Form_main", "\350\217\261\345\243\260\345\271\277\346\222\255\347\263\273\347\273\237\345\221\274\345\217\253", 0));
        label_2->setText(QApplication::translate("Form_main", "\347\274\226\345\217\267\357\274\232", 0));
        label_3->setText(QApplication::translate("Form_main", "02", 0));
        pushButton->setText(QApplication::translate("Form_main", "\345\205\250\351\200\211", 0));
        pushButton_5->setText(QApplication::translate("Form_main", "\345\221\274\345\217\253", 0));
        pushButton_6->setText(QApplication::translate("Form_main", "\345\210\267\346\226\260", 0));
        pushButton_7->setText(QApplication::translate("Form_main", "\345\221\274\345\217\253", 0));
        pushButton_8->setText(QApplication::translate("Form_main", "\347\274\226\350\276\221", 0));
    } // retranslateUi

};

namespace Ui {
    class Form_main: public Ui_Form_main {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_MAIN_H

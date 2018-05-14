/********************************************************************************
** Form generated from reading UI file 'formwelcome.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMWELCOME_H
#define UI_FORMWELCOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormWelcome
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QPushButton *pushButton;
    QWidget *page_2;
    QWidget *formLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_5;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_1;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QWidget *page_3;
    QTextBrowser *textBrowser;
    QPushButton *pushButton_4;

    void setupUi(QWidget *FormWelcome)
    {
        if (FormWelcome->objectName().isEmpty())
            FormWelcome->setObjectName(QStringLiteral("FormWelcome"));
        FormWelcome->resize(800, 480);
        stackedWidget = new QStackedWidget(FormWelcome);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(-1, -1, 801, 481));
        stackedWidget->setStyleSheet(QStringLiteral("border-image: url(:/K3.png);"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        pushButton = new QPushButton(page);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(560, 330, 181, 91));
        pushButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-image: url(:/K6.png);\n"
"font: 75 36pt \"Aharoni\";"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        formLayoutWidget = new QWidget(page_2);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 30, 531, 431));
        gridLayout = new QGridLayout(formLayoutWidget);
        gridLayout->setSpacing(20);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(20, 10, 20, 10);
        lineEdit_5 = new QLineEdit(formLayoutWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setMinimumSize(QSize(0, 30));
        lineEdit_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-image: url(:/K9.png);"));

        gridLayout->addWidget(lineEdit_5, 4, 1, 1, 1);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QLatin1String("font: 75 14pt \"Aharoni\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        lineEdit_4 = new QLineEdit(formLayoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setMinimumSize(QSize(0, 30));
        lineEdit_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-image: url(:/K9.png);"));

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 1);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QLatin1String("font: 75 14pt \"Aharoni\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QLatin1String("font: 75 14pt \"Aharoni\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QLatin1String("font: 75 14pt \"Aharoni\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("font: 75 14pt \"Aharoni\";\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(formLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setMinimumSize(QSize(0, 30));
        lineEdit_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-image: url(:/K9.png);"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        lineEdit_2 = new QLineEdit(formLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 30));
        lineEdit_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-image: url(:/K9.png);"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit_1 = new QLineEdit(formLayoutWidget);
        lineEdit_1->setObjectName(QStringLiteral("lineEdit_1"));
        lineEdit_1->setMinimumSize(QSize(0, 30));
        lineEdit_1->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-image: url(:/K9.png);"));

        gridLayout->addWidget(lineEdit_1, 0, 1, 1, 1);

        pushButton_5 = new QPushButton(formLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(60, 60));
        pushButton_5->setStyleSheet(QStringLiteral(" border-image: url(:/K5.png);"));

        gridLayout->addWidget(pushButton_5, 0, 2, 1, 1);

        pushButton_6 = new QPushButton(formLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(30, 60));
        pushButton_6->setStyleSheet(QStringLiteral(" border-image: url(:/K5.png);"));

        gridLayout->addWidget(pushButton_6, 1, 2, 1, 1);

        pushButton_7 = new QPushButton(formLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(30, 60));
        pushButton_7->setStyleSheet(QStringLiteral(" border-image: url(:/K5.png);"));

        gridLayout->addWidget(pushButton_7, 2, 2, 1, 1);

        pushButton_8 = new QPushButton(formLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(0, 60));
        pushButton_8->setStyleSheet(QStringLiteral(" border-image: url(:/K5.png);"));

        gridLayout->addWidget(pushButton_8, 3, 2, 1, 1);

        pushButton_9 = new QPushButton(formLayoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(0, 60));
        pushButton_9->setStyleSheet(QStringLiteral(" border-image: url(:/K5.png);"));

        gridLayout->addWidget(pushButton_9, 4, 2, 1, 1);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(570, 260, 221, 41));
        label_2->setStyleSheet(QLatin1String("font: 75 14pt \"Aharoni\";\n"
"color: rgb(255, 255, 255);\n"
"border-image: url(:/K9.png);"));
        pushButton_2 = new QPushButton(page_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(580, 350, 201, 81));
        pushButton_2->setStyleSheet(QLatin1String("font: 75 14pt \"Aharoni\";\n"
"border-image: url(:/K6.png);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 36pt \"Aharoni\";"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        textBrowser = new QTextBrowser(page_3);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 40, 551, 401));
        textBrowser->setStyleSheet(QLatin1String("font: 75 14pt \"Aharoni\";\n"
"color: rgb(252, 240, 255);\n"
"border-image: url(:/K9.png);\n"
"font: 75 20pt \"Aharoni\";"));
        pushButton_4 = new QPushButton(page_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(590, 320, 191, 121));
        pushButton_4->setStyleSheet(QLatin1String(" \n"
"font: 75 36pt \"Aharoni\";\n"
"border-image: url(:/K6.png);\n"
"color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(page_3);

        retranslateUi(FormWelcome);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(FormWelcome);
    } // setupUi

    void retranslateUi(QWidget *FormWelcome)
    {
        FormWelcome->setWindowTitle(QApplication::translate("FormWelcome", "Form", 0));
        pushButton->setText(QApplication::translate("FormWelcome", "NEXT", 0));
        label_6->setText(QApplication::translate("FormWelcome", "\346\234\254\346\234\272\347\275\221\345\205\263", 0));
        label_5->setText(QApplication::translate("FormWelcome", "\346\234\254\346\234\272\346\216\251\347\240\201", 0));
        label_4->setText(QApplication::translate("FormWelcome", "\346\234\254\346\234\272IP", 0));
        label_3->setText(QApplication::translate("FormWelcome", "\346\234\215\345\212\241\347\253\257\345\217\243", 0));
        label->setText(QApplication::translate("FormWelcome", "\346\234\215\345\212\241IP", 0));
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
        pushButton_8->setText(QString());
        pushButton_9->setText(QString());
        label_2->setText(QApplication::translate("FormWelcome", " \351\205\215\347\275\256\345\256\214\346\210\220 \347\202\271\346\265\213\350\257\225\346\214\211\351\222\256\343\200\202", 0));
        pushButton_2->setText(QApplication::translate("FormWelcome", "\346\265\213\350\257\225", 0));
        textBrowser->setHtml(QApplication::translate("FormWelcome", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Aharoni'; font-size:20pt; font-weight:72; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", 0));
        pushButton_4->setText(QApplication::translate("FormWelcome", "WAIT", 0));
    } // retranslateUi

};

namespace Ui {
    class FormWelcome: public Ui_FormWelcome {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMWELCOME_H

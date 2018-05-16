/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QSlider *verticalSlider;
    QLabel *label;
    QSlider *verticalSlider_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(800, 480);
        Dialog->setStyleSheet(QStringLiteral(" border-image: url(:/HJB2.png);"));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(630, 340, 151, 121));
        pushButton->setStyleSheet(QLatin1String("QPushButton{color: rgb(255, 255, 255);font: 90 30pt \"Aharoni\";  border-radius:10px;}\n"
"QPushButton{border-image: url(://KR.png);  border-radius:10px;}\n"
"QPushButton:hover{border-image: url(:/K6.png);  border-radius:10px;}  \n"
"QPushButton:pressed{border-image: url(:/K6.png);  border-radius:10px;}"));
        verticalSlider = new QSlider(Dialog);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(620, 60, 91, 271));
        verticalSlider->setStyleSheet(QLatin1String("QSlider::groove:vertical {  \n"
"border-image: url(:/B12.png);\n"
"border: 2px solid #aaaaaa;  \n"
"background: #aaaaaa00;  \n"
"width: 30px;  \n"
"border-radius: 15px;  \n"
"padding-left:-1px;  \n"
"padding-right:-1px;  \n"
"padding-top:-1px;  \n"
"padding-bottom:-1px;  \n"
"}  \n"
"QSlider{   \n"
" \n"
"	border-image: url(:/B12.png);\n"
"}  \n"
" \n"
"QSlider::sub-page:vertical {  \n"
"background: #666666;  \n"
"border-image: url(:/B12.png);\n"
"\n"
"border:2px solid #000000;  \n"
"border-radius:16px;  \n"
"}  \n"
"QSlider::add-page:vertical {  \n"
"background: #3da1e5; \n"
"border:2px solid #000000050;  \n"
"border-radius:16px;  \n"
"width:32px;  \n"
"border-image: url(:/B12.png);\n"
" }  \n"
"QSlider::handle:vertical   \n"
"{\n"
"border-image: url(:/B12.png);  \n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.13, fx:0.5, fy:0.5, stop:0.6 #999999, stop:0.9 rgba(60, 60, 60, 255));  \n"
"  \n"
"    height: 76px;\n"
"    border:2px solid #000000;\n"
"    margin-left: -25px;  \n"
"    ma"
                        "rgin-right: -25px;  \n"
"    border-radius:40px;  \n"
"}  \n"
"  \n"
""));
        verticalSlider->setMaximum(13);
        verticalSlider->setPageStep(1);
        verticalSlider->setValue(7);
        verticalSlider->setSliderPosition(7);
        verticalSlider->setOrientation(Qt::Vertical);
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(148, 80, 320, 320));
        verticalSlider_2 = new QSlider(Dialog);
        verticalSlider_2->setObjectName(QStringLiteral("verticalSlider_2"));
        verticalSlider_2->setGeometry(QRect(490, 60, 131, 271));
        verticalSlider_2->setStyleSheet(QLatin1String("QSlider::groove:vertical {  \n"
"border-image: url(:/B12.png);\n"
"border: 2px solid #aaaaaa;  \n"
"background: #aaaaaa00;  \n"
"width: 30px;  \n"
"border-radius: 15px;  \n"
"padding-left:-1px;  \n"
"padding-right:-1px;  \n"
"padding-top:-1px;  \n"
"padding-bottom:-1px;  \n"
"}  \n"
"QSlider{   \n"
" \n"
"	border-image: url(:/B12.png);\n"
"}  \n"
" \n"
"QSlider::sub-page:vertical {  \n"
"background: #666666;  \n"
"border-image: url(:/B12.png);\n"
"\n"
"border:2px solid #000000;  \n"
"border-radius:16px;  \n"
"}  \n"
"QSlider::add-page:vertical {  \n"
"background: #3da1e5; \n"
"border:2px solid #000000050;  \n"
"border-radius:16px;  \n"
"width:32px;  \n"
"border-image: url(:/B12.png);\n"
" }  \n"
"QSlider::handle:vertical   \n"
"{\n"
"border-image: url(:/B12.png);  \n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.13, fx:0.5, fy:0.5, stop:0.6 #999999, stop:0.9 rgba(60, 60, 60, 255));  \n"
"  \n"
"    height: 76px;\n"
"    border:2px solid #000000;\n"
"    margin-left: -25px;  \n"
"    ma"
                        "rgin-right: -25px;  \n"
"    border-radius:40px;  \n"
"}  \n"
"  \n"
""));
        verticalSlider_2->setMaximum(7);
        verticalSlider_2->setValue(3);
        verticalSlider_2->setOrientation(Qt::Vertical);
        pushButton_2 = new QPushButton(Dialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(720, 60, 61, 61));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{color: rgb(255, 255, 255);font: 90 30pt \"Aharoni\";  border-radius:10px;}\n"
"QPushButton{border-image: url(://KR.png);  border-radius:10px;}\n"
"QPushButton:hover{border-image: url(:/K6.png);  border-radius:10px;}  \n"
"QPushButton:pressed{border-image: url(:/K6.png);  border-radius:10px;}"));
        pushButton_3 = new QPushButton(Dialog);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(720, 260, 61, 61));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{color: rgb(255, 255, 255);font: 90 30pt \"Aharoni\";  border-radius:10px;}\n"
"QPushButton{border-image: url(://KR.png);  border-radius:10px;}\n"
"QPushButton:hover{border-image: url(:/K6.png);  border-radius:10px;}  \n"
"QPushButton:pressed{border-image: url(:/K6.png);  border-radius:10px;}"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(730, 180, 41, 31));
        label_2->setStyleSheet(QLatin1String("font: 75 15pt \"Aharoni\";\n"
"border-image: url(:/B12.png);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        pushButton->setText(QApplication::translate("Dialog", "\346\214\202\346\226\255", 0));
        label->setText(QString());
        pushButton_2->setText(QApplication::translate("Dialog", "+", 0));
        pushButton_3->setText(QApplication::translate("Dialog", "-", 0));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H

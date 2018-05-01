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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QPushButton *pushButton;
    QSlider *verticalSlider;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(320, 320);
        Dialog->setStyleSheet(QLatin1String(" \n"
"background-color: rgb(170, 209, 255);"));
        pushButton = new QPushButton(Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 160, 131, 130));
        pushButton->setStyleSheet(QLatin1String("QPushButton{border-image: url(:/gd2.png);} \n"
"QPushButton:hover{border-image: url(:/gd3.png);}  \n"
"QPushButton:pressed{border-image: url(:/gd3.png);}"));
        verticalSlider = new QSlider(Dialog);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(40, 30, 91, 221));
        verticalSlider->setStyleSheet(QLatin1String("QSlider::groove:vertical {  \n"
"border: 1px solid #4A708B;  \n"
"background: #C0C0C0;  \n"
"width: 30px;  \n"
"border-radius: 1px;  \n"
"padding-left:-1px;  \n"
"padding-right:-1px;  \n"
"padding-top:-1px;  \n"
"padding-bottom:-1px;  \n"
"}  \n"
"  \n"
"QSlider::sub-page:vertical {  \n"
"background: #575757;  \n"
"border: 2px solid #4A708B;  \n"
"border-radius:0px;  \n"
"}  \n"
"QSlider::add-page:vertical {  \n"
"background: qlineargradient(x1:0, y1:0, x2:0, y2:1,   \n"
"    stop:0 #c4c4c4, stop:1 #B1B1B1);  \n"
"background: qlineargradient(x1: 0, y1: 0.2, x2: 1, y2: 1,  \n"
"    stop: 0 #5DCCFF, stop: 1 #1874CD);  \n"
"border: 0px solid #777;  \n"
"width: 20px;  \n"
"border-radius: 2px;  \n"
"}  \n"
"QSlider::handle:vertical   \n"
"{  \n"
"    background: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0.6 #45ADED,   \n"
"				stop:0.778409 rgba(255, 255, 255, 255));  \n"
"  \n"
"    height: 80px;  \n"
"    margin-left: -25px;  \n"
"    margin-right: -25px;  \n"
"    border-radius"
                        ": 40px;  \n"
"}  \n"
"  \n"
"QSlider::sub-page:vertical:disabled {  \n"
"background: #00009C;  \n"
"border-color: #999;  \n"
"}  \n"
"QSlider::add-page:vertical:disabled {  \n"
"background: #eee;  \n"
"border-color: #999;  \n"
"}  \n"
"QSlider::handle:vertical:disabled {  \n"
"background: #eee;  \n"
"border: 1px solid #aaa;  \n"
"border-radius: 4px;  \n"
"}  "));
        verticalSlider->setMaximum(7);
        verticalSlider->setValue(7);
        verticalSlider->setOrientation(Qt::Vertical);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 280, 81, 21));
        label_2->setStyleSheet(QLatin1String("font: 75 12pt \"Aharoni\";\n"
"color: rgb(0, 0, 0);"));
        verticalLayoutWidget = new QWidget(Dialog);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(160, 80, 131, 41));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        pushButton->setText(QString());
        label_2->setText(QApplication::translate("Dialog", "\351\272\246\345\205\213\351\243\216\351\237\263\351\207\217", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *username;
    QLineEdit *passwdline;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QLabel *labbackinfo;
    QPushButton *pushButton_14;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 480);
        MainWindow->setStyleSheet(QStringLiteral("border-image: url(:/B16.png);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 330, 211, 51));
        pushButton->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);font: 90 22pt \"Aharoni\"; \n"
"border-image: url(:/s1 (5).png);"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 150, 291, 41));
        label->setStyleSheet(QStringLiteral("border-image: url(:/G5.png);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 220, 291, 41));
        label_2->setStyleSheet(QStringLiteral("border-image: url(:/s1 (6).png);"));
        username = new QLineEdit(centralwidget);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(110, 150, 201, 41));
        username->setStyleSheet(QLatin1String("border-image: url(:/clear.png);\n"
"font: 75 14pt \"Aharoni\";"));
        passwdline = new QLineEdit(centralwidget);
        passwdline->setObjectName(QStringLiteral("passwdline"));
        passwdline->setGeometry(QRect(110, 220, 201, 41));
        passwdline->setStyleSheet(QStringLiteral("border-image: url(:/clear.png);"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(390, 100, 341, 304));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(109, 71));
        pushButton_3->setMaximumSize(QSize(109, 71));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{color: rgb(0, 0, 0);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(:/s1 (10).png);} \n"
"QPushButton:hover{border-image: url(:/s1 (3).png);}  \n"
"QPushButton:pressed{border-image: url(:/s1 (3).png);}\n"
""));

        gridLayout->addWidget(pushButton_3, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(gridLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(109, 71));
        pushButton_4->setMaximumSize(QSize(109, 71));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton{color: rgb(0, 0, 0);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(:/s1 (10).png);} \n"
"QPushButton:hover{border-image: url(:/s1 (3).png);}  \n"
"QPushButton:pressed{border-image: url(:/s1 (3).png);}\n"
""));

        gridLayout->addWidget(pushButton_4, 0, 2, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(109, 71));
        pushButton_2->setMaximumSize(QSize(109, 71));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{color: rgb(0, 0, 0);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(:/s1 (10).png);} \n"
"QPushButton:hover{border-image: url(:/s1 (3).png);}  \n"
"QPushButton:pressed{border-image: url(:/s1 (3).png);}\n"
""));

        gridLayout->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton_10 = new QPushButton(gridLayoutWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setMinimumSize(QSize(109, 71));
        pushButton_10->setMaximumSize(QSize(109, 71));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton{color: rgb(0, 0, 0);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(:/s1 (10).png);} \n"
"QPushButton:hover{border-image: url(:/s1 (3).png);}  \n"
"QPushButton:pressed{border-image: url(:/s1 (3).png);}\n"
""));

        gridLayout->addWidget(pushButton_10, 2, 2, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setMinimumSize(QSize(109, 71));
        pushButton_9->setMaximumSize(QSize(109, 71));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton{color: rgb(0, 0, 0);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(:/s1 (10).png);} \n"
"QPushButton:hover{border-image: url(:/s1 (3).png);}  \n"
"QPushButton:pressed{border-image: url(:/s1 (3).png);}\n"
""));

        gridLayout->addWidget(pushButton_9, 2, 1, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(109, 71));
        pushButton_8->setMaximumSize(QSize(109, 71));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton{color: rgb(0, 0, 0);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(:/s1 (10).png);} \n"
"QPushButton:hover{border-image: url(:/s1 (3).png);}  \n"
"QPushButton:pressed{border-image: url(:/s1 (3).png);}\n"
""));

        gridLayout->addWidget(pushButton_8, 2, 0, 1, 1);

        pushButton_7 = new QPushButton(gridLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(109, 71));
        pushButton_7->setMaximumSize(QSize(109, 71));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton{color: rgb(0, 0, 0);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(:/s1 (10).png);} \n"
"QPushButton:hover{border-image: url(:/s1 (3).png);}  \n"
"QPushButton:pressed{border-image: url(:/s1 (3).png);}\n"
""));

        gridLayout->addWidget(pushButton_7, 1, 2, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(109, 71));
        pushButton_5->setMaximumSize(QSize(109, 71));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton{color: rgb(0, 0, 0);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(:/s1 (10).png);} \n"
"QPushButton:hover{border-image: url(:/s1 (3).png);}  \n"
"QPushButton:pressed{border-image: url(:/s1 (3).png);}\n"
""));

        gridLayout->addWidget(pushButton_5, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(109, 71));
        pushButton_6->setMaximumSize(QSize(109, 71));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton{color: rgb(0, 0, 0);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(:/s1 (10).png);} \n"
"QPushButton:hover{border-image: url(:/s1 (3).png);}  \n"
"QPushButton:pressed{border-image: url(:/s1 (3).png);}\n"
""));

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setMinimumSize(QSize(109, 71));
        pushButton_11->setMaximumSize(QSize(109, 71));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton{color: rgb(0, 0, 0);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(:/s1 (10).png);} \n"
"QPushButton:hover{border-image: url(:/s1 (3).png);}  \n"
"QPushButton:pressed{border-image: url(:/s1 (3).png);}\n"
""));

        gridLayout->addWidget(pushButton_11, 3, 0, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setMinimumSize(QSize(109, 71));
        pushButton_12->setMaximumSize(QSize(109, 71));
        pushButton_12->setStyleSheet(QLatin1String("QPushButton{color: rgb(0, 0, 0);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(:/s1 (10).png);} \n"
"QPushButton:hover{border-image: url(:/s1 (3).png);}  \n"
"QPushButton:pressed{border-image: url(:/s1 (3).png);}\n"
""));

        gridLayout->addWidget(pushButton_12, 3, 1, 1, 1);

        pushButton_13 = new QPushButton(gridLayoutWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setMinimumSize(QSize(109, 71));
        pushButton_13->setMaximumSize(QSize(109, 71));
        pushButton_13->setStyleSheet(QLatin1String("QPushButton{color: rgb(0, 0, 0);font: 90 30pt \"Aharoni\";}\n"
"QPushButton{border-image: url(:/s1 (10).png);} \n"
"QPushButton:hover{border-image: url(:/s1 (3).png);}  \n"
"QPushButton:pressed{border-image: url(:/s1 (3).png);}\n"
""));

        gridLayout->addWidget(pushButton_13, 3, 2, 1, 1);

        labbackinfo = new QLabel(centralwidget);
        labbackinfo->setObjectName(QStringLiteral("labbackinfo"));
        labbackinfo->setGeometry(QRect(50, 290, 251, 31));
        labbackinfo->setStyleSheet(QLatin1String("border-image: url(:/K9.png);\n"
"color: rgb(255, 255, 255);"));
        pushButton_14 = new QPushButton(centralwidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(730, 10, 60, 60));
        pushButton_14->setMinimumSize(QSize(60, 60));
        pushButton_14->setMaximumSize(QSize(60, 60));
        pushButton_14->setStyleSheet(QLatin1String("QPushButton{color: rgb(0, 0, 0);font: 90 18pt \"Aharoni\";}\n"
"QPushButton{border-image: url(:/K9.png);}  \n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", 0));
        label->setText(QString());
        label_2->setText(QString());
        username->setText(QApplication::translate("MainWindow", "asdasd", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "2", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "3", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "1", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "9", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "8", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "7", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "6", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "4", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "5", 0));
        pushButton_11->setText(QApplication::translate("MainWindow", "\351\200\200\346\240\274", 0));
        pushButton_12->setText(QApplication::translate("MainWindow", "0", 0));
        pushButton_13->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244", 0));
        labbackinfo->setText(QString());
        pushButton_14->setText(QApplication::translate("MainWindow", "\351\207\215\347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

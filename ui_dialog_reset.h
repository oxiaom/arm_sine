/********************************************************************************
** Form generated from reading UI file 'dialog_reset.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_RESET_H
#define UI_DIALOG_RESET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog_reset
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Dialog_reset)
    {
        if (Dialog_reset->objectName().isEmpty())
            Dialog_reset->setObjectName(QStringLiteral("Dialog_reset"));
        Dialog_reset->resize(324, 121);
        pushButton = new QPushButton(Dialog_reset);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 30, 91, 51));
        pushButton_2 = new QPushButton(Dialog_reset);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 30, 111, 51));

        retranslateUi(Dialog_reset);

        QMetaObject::connectSlotsByName(Dialog_reset);
    } // setupUi

    void retranslateUi(QDialog *Dialog_reset)
    {
        Dialog_reset->setWindowTitle(QApplication::translate("Dialog_reset", "Dialog", 0));
        pushButton->setText(QApplication::translate("Dialog_reset", "\345\217\226\346\266\210", 0));
        pushButton_2->setText(QApplication::translate("Dialog_reset", "\347\241\256\345\256\232", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_reset: public Ui_Dialog_reset {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_RESET_H

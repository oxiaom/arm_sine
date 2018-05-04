/********************************************************************************
** Form generated from reading UI file 'waiting.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITING_H
#define UI_WAITING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_waiting
{
public:
    QLabel *label;

    void setupUi(QDialog *waiting)
    {
        if (waiting->objectName().isEmpty())
            waiting->setObjectName(QStringLiteral("waiting"));
        waiting->resize(480, 42);
        waiting->setMaximumSize(QSize(480, 42));
        label = new QLabel(waiting);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 480, 42));
        label->setMinimumSize(QSize(480, 42));
        label->setMaximumSize(QSize(480, 42));
        label->setStyleSheet(QStringLiteral("background-color: rgba(0, 0, 0, 0);"));

        retranslateUi(waiting);

        QMetaObject::connectSlotsByName(waiting);
    } // setupUi

    void retranslateUi(QDialog *waiting)
    {
        waiting->setWindowTitle(QApplication::translate("waiting", "Dialog", 0));
        label->setText(QApplication::translate("waiting", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class waiting: public Ui_waiting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITING_H

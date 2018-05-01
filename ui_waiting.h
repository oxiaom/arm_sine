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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_waiting
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *waiting)
    {
        if (waiting->objectName().isEmpty())
            waiting->setObjectName(QStringLiteral("waiting"));
        waiting->resize(415, 205);
        verticalLayoutWidget = new QWidget(waiting);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 402, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(400, 170));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);


        retranslateUi(waiting);

        QMetaObject::connectSlotsByName(waiting);
    } // setupUi

    void retranslateUi(QDialog *waiting)
    {
        waiting->setWindowTitle(QApplication::translate("waiting", "Dialog", 0));
        label->setText(QApplication::translate("waiting", "TextLabel", 0));
        label_2->setText(QApplication::translate("waiting", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class waiting: public Ui_waiting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITING_H

/********************************************************************************
** Form generated from reading UI file 'level1.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVEL1_H
#define UI_LEVEL1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_level1
{
public:
    QLabel *Man;

    void setupUi(QWidget *level1)
    {
        if (level1->objectName().isEmpty())
            level1->setObjectName("level1");
        level1->resize(400, 300);
        Man = new QLabel(level1);
        Man->setObjectName("Man");
        Man->setGeometry(QRect(10, 220, 101, 71));

        retranslateUi(level1);

        QMetaObject::connectSlotsByName(level1);
    } // setupUi

    void retranslateUi(QWidget *level1)
    {
        level1->setWindowTitle(QCoreApplication::translate("level1", "Form", nullptr));
        Man->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class level1: public Ui_level1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVEL1_H

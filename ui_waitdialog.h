/********************************************************************************
** Form generated from reading UI file 'waitdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITDIALOG_H
#define UI_WAITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_waitDialog
{
public:
    QLabel *label;

    void setupUi(QDialog *waitDialog)
    {
        if (waitDialog->objectName().isEmpty())
            waitDialog->setObjectName(QStringLiteral("waitDialog"));
        waitDialog->resize(280, 110);
        label = new QLabel(waitDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 201, 81));
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(waitDialog);

        QMetaObject::connectSlotsByName(waitDialog);
    } // setupUi

    void retranslateUi(QDialog *waitDialog)
    {
        waitDialog->setWindowTitle(QApplication::translate("waitDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("waitDialog", "Splitting frames...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class waitDialog: public Ui_waitDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITDIALOG_H

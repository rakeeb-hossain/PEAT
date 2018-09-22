/********************************************************************************
** Form generated from reading UI file 'rkbprotool.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RKBPROTOOL_H
#define UI_RKBPROTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_rkbProTool
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QLabel *label_2;
    QSlider *slider;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *rkbProTool)
    {
        if (rkbProTool->objectName().isEmpty())
            rkbProTool->setObjectName(QStringLiteral("rkbProTool"));
        rkbProTool->resize(400, 322);
        buttonBox = new QDialogButtonBox(rkbProTool);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 270, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(rkbProTool);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 201, 16));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        lineEdit = new QLineEdit(rkbProTool);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(70, 60, 261, 20));
        pushButton = new QPushButton(rkbProTool);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 60, 41, 21));
        radioButton = new QRadioButton(rkbProTool);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(50, 150, 151, 17));
        radioButton_2 = new QRadioButton(rkbProTool);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(50, 180, 101, 17));
        radioButton_3 = new QRadioButton(rkbProTool);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(50, 210, 101, 17));
        radioButton_4 = new QRadioButton(rkbProTool);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(50, 240, 82, 17));
        label_2 = new QLabel(rkbProTool);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 120, 161, 16));
        slider = new QSlider(rkbProTool);
        slider->setObjectName(QStringLiteral("slider"));
        slider->setEnabled(false);
        slider->setGeometry(QRect(200, 200, 160, 22));
        slider->setMaximum(100);
        slider->setPageStep(1);
        slider->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(rkbProTool);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(false);
        label_3->setGeometry(QRect(250, 170, 61, 20));
        label_4 = new QLabel(rkbProTool);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setEnabled(false);
        label_4->setGeometry(QRect(370, 200, 31, 20));
        lineEdit_2 = new QLineEdit(rkbProTool);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(70, 80, 261, 20));
        lineEdit_2->setReadOnly(false);
        pushButton_2 = new QPushButton(rkbProTool);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 80, 41, 21));

        retranslateUi(rkbProTool);
        QObject::connect(buttonBox, SIGNAL(accepted()), rkbProTool, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), rkbProTool, SLOT(reject()));

        QMetaObject::connectSlotsByName(rkbProTool);
    } // setupUi

    void retranslateUi(QDialog *rkbProTool)
    {
        rkbProTool->setWindowTitle(QApplication::translate("rkbProTool", "Dialog", nullptr));
        label->setText(QApplication::translate("rkbProTool", "Run PEAT Prophylactic Tool", nullptr));
        lineEdit->setPlaceholderText(QApplication::translate("rkbProTool", "(open a PEAT project folder)", nullptr));
        pushButton->setText(QApplication::translate("rkbProTool", "Open", nullptr));
        radioButton->setText(QApplication::translate("rkbProTool", "Color-shift (Recommended)", nullptr));
        radioButton_2->setText(QApplication::translate("rkbProTool", "Overlay (Beta)", nullptr));
        radioButton_3->setText(QApplication::translate("rkbProTool", "Contrast (Beta)", nullptr));
        radioButton_4->setText(QApplication::translate("rkbProTool", "Blur (Beta)", nullptr));
        label_2->setText(QApplication::translate("rkbProTool", "Select a prophylactic method:", nullptr));
        label_3->setText(QApplication::translate("rkbProTool", "Set Strength", nullptr));
        label_4->setText(QApplication::translate("rkbProTool", "0.0", nullptr));
        lineEdit_2->setPlaceholderText(QApplication::translate("rkbProTool", "(open the PEAT project report [NON-USER])", nullptr));
        pushButton_2->setText(QApplication::translate("rkbProTool", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rkbProTool: public Ui_rkbProTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RKBPROTOOL_H

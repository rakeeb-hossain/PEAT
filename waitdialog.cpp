#include "waitdialog.h"
#include "ui_waitdialog.h"
#include "mainframe.h"
#include <QTimer>

waitDialog::waitDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::waitDialog)
{
    ui->setupUi(this);

    setWindowFlags(Qt::CustomizeWindowHint | Qt::WindowTitleHint | Qt::Dialog);
    setModal(true);

    this->setWindowTitle("Loading");
    /*
    QTimer *timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(changeText()));

    timer->start(1000);
    */
}

waitDialog::~waitDialog()
{
    delete ui;
}
/*
void waitDialog::changeText()
{
    qDebug() << "uno";
    if (first == true)
    {
        ui->label->setText("Splitting frames...");
        first = false;
        second = true;
    }
    else if (second == true)
    {
        ui->label->setText("Splitting frames.");
        second = false;
        third = true;
    }
    else if (third == true)
    {
        ui->label->setText("Splitting frames..");
        third = false;
        first = true;
    }
}
*/

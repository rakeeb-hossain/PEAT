#include "mainwindow.h"
#include <QApplication>




int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication a(argc, argv);


    a.setWindowIcon(QIcon(":/Res/PEAT.ico"));

    QApplication::setQuitOnLastWindowClosed(false);

    MainWindow w;

    w.show();

//    AllocConsole();
//    ShowWindow(GetConsoleWindow(), SW_HIDE);

    return a.exec();
}

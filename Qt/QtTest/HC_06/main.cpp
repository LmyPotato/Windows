#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
/*
 *750*360比较合适
 *
 *
*/
    #if (QT_VERSION >= QT_VERSION_CHECK(5,9,0))
        QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    #endif

    QApplication a(argc, argv);

    MainWindow w;
    w.show();
    return a.exec();
}

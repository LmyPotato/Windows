#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QThread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QPixmap pix(":Image/sunny.png");
    QSplashScreen splashScreen(pix);

    splashScreen.showMessage("应用程序加载中…………",Qt::AlignBottom,Qt::blue);
    splashScreen.show();
    a.processEvents();

    MainWindow w;
    w.thread()->sleep(3);
    w.show();
    splashScreen.finish(&w);

    return a.exec();
}

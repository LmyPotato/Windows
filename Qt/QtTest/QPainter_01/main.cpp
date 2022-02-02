#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QThread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    QPixmap pixSplash(":/Image/sunny.png");
    pixSplash=pixSplash.scaled(pixSplash.width()*1.0,pixSplash.height()*1.0);
    QSplashScreen splash(pixSplash);

    splash.show();
    splash.showMessage(QObject::tr("应用加载中^_^ …………"),Qt::AlignLeft|Qt::AlignBottom,Qt::blue);
    a.processEvents();


    MainWindow w;
    w.thread()->sleep(3);
    w.show();
    splash.finish(&w);

    return a.exec();
}

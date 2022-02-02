#include "mainwindow.h"
#include <QApplication>
#include <QSplashScreen>
#include <QThread>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    QPixmap pixmapSplash(":/Image/1.jpg"); //加载像素图片
//    pixmapSplash=pixmapSplash.scaled(QSize(pixmapSplash.width()*0.5,pixmapSplash.height()*0.5));
//    QSplashScreen Splash(pixmapSplash);       //构造启动画面
//    Splash.show();      //显示启动画面
////    Splash.showMessage(QObject::tr("应用程序加载中..."), Qt::AlignLeft|Qt::AlignBottom );
//    Splash.showMessage(QObject::tr("应用程序加载中……"),Qt::AlignTop,Qt::red);
//    a.processEvents();     //启动应用程序的事件处理

//    /*编写主窗口启动前需要执行的代码*/
//    MainWindow w;      //主窗体
//    w.thread()->sleep(3);   //这里表示延时3秒，否则闪屏结束太快看不到效果，正常情况下不需要延时。
//    w.show();            //显示主窗口
//    Splash.finish(&w);     //销毁启动界面

    QPixmap pix;
    pix.load(":/Image/sunny.png");
    QSplashScreen Splash(pix);
    Splash.show();
    Splash.showMessage(QObject::tr("应用加载中…………"),Qt::AlignBottom,Qt::blue);
    a.processEvents();

    MainWindow w;
    w.thread()->sleep(5);
    w.show();
    Splash.finish(&w);

//    MainWindow w;
//    w.show();
    return a.exec();
}

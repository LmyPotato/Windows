#include "uart_mainwindow.h"

#include <QApplication>

#include <QDesktopWidget>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    UART_MainWindow w;

    w.show();

    /*实现弹出的窗口在屏幕中间显示*/

    QDesktopWidget *pDesk = QApplication::desktop();

    w.move((pDesk->width() - w.width()) / 2, (pDesk->height() - w.height()) / 2);

    return a.exec();

}

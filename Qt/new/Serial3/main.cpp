#include "uart_mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    uart_mainwindow w;
    w.show();

    return a.exec();
}

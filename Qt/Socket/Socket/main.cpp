#include "widget.h"
#include <QApplication>
#include <QHostInfo>
#include <QNetworkInterface>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString addr_info;
    addr_info="列出本机全部IP地址:\n";

    QList<QHostAddress>list=QNetworkInterface::allAddresses();

    for(int i=0;i<list.count();i++)
    {
        QHostAddress addr=list.at(i);
        if(addr.protocol()==QAbstractSocket::IPv4Protocol)
        {
            addr_info+=addr.toString();
            addr_info+="\n";
        }
    }

    QLabel label;
    label.setText(addr_info);
    label.show();

//    Widget w;
//    w.show();

    return a.exec();
}

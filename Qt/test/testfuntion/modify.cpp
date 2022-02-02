#include "modify.h"




Modify::Modify(QWidget *parent) : QMainWindow(parent)
{

}

void Modify::showPixmap()
{
//    QPixmap pixmap1("E:/1.jpg");
    QPixmap pixmap1;
    pixmap1.load("E:/1.jpg");
    pixmap1=pixmap1.scaled(QSize(pixmap1.width()*0.5,pixmap1.height()*0.5));
    QPixmap pixmap2(100,100);

    pixmap2.fill(QColor(255,0,255));

    QLabel *label1=new QLabel;
    QLabel *label2=new QLabel;
    label1->setPixmap(pixmap1);
    label2->setPixmap(pixmap2);

    //垂直布局
    QVBoxLayout *layout=new QVBoxLayout;
    //水平布局
//    QHBoxLayout *layout=new QHBoxLayout;
    layout->addWidget(label1);
    layout->addWidget(label2);

    QWidget *widget=new QWidget;
    widget->setLayout(layout);
    widget->show();
}

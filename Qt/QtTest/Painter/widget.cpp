#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

//    QPixmap pix;
//    pix.load(":/Image/sunny.png");
////    ui->label->setGeometry(50,51,200,200);
//    ui->label->setPixmap(pix);

//    pix.save("E:/2.bmp");


}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setPen(Qt::blue);
    painter.setFont(QFont("Arial",50));
//    painter.drawText(rect(),"Qt");
    painter.drawText(rect(), Qt::AlignCenter, "Qt");


}

Widget::~Widget()
{
    delete ui;
}

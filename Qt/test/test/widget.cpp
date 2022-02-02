#include "widget.h"
#include "ui_widget.h"
#include "mypushbutton.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    MyPushButton *start=new MyPushButton(":/Image/MenuSceneStartButton.png");
    start->setParent(this);
    start->move(50,50);

    connect(start,&MyPushButton::clicked,[=](){
        qDebug()<<"点击了爱心";
    });


}

Widget::~Widget()
{
    delete ui;

}

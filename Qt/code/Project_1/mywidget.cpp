#include "mywidget.h"
#include "ui_mywidget.h"
#include<QPushButton>

//快捷键
//注释 ctrl + /
//运行 ctrl + r
//编译 ctrl + b
//字体缩放 ctrl + 鼠标滚轮
//查找 ctrl + f
//整行移动 ctrl shift +↑或者↓
//帮助文档 F1
//自动对齐 ctrl + i
//同名之间的.h 和 .cpp切换 F4


MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);

    QpushButton *btn=new QPushButton;
    btn->show();
}

MyWidget::~MyWidget()
{
    delete ui;
}

#include "mywidget.h"
#include "ui_mywidget.h"
#include<QPushButton>
#include"mypushbutton.h"
#include<QDebug>

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

    QPushButton *btn=new QPushButton;
    //btn->show();//show以顶层方式弹出窗口控件
    //让btn对象 依赖在myWidge窗口中
    btn->setParent(this);

    //显示文本
    btn->setText("第一个按钮");
    //创建第二个按钮 按照控件的大小创建窗口
    QPushButton *btn2=new QPushButton("第二个按钮",this);

    //移动btn2
    btn2->move(100,100);

    //按钮重新制定大小
    btn2->resize(100,20);

    //重置窗口大小
    resize(600,400);

    //设置固定窗口大小
    setFixedSize(600,400);

    //设置窗口标题
    setWindowTitle("第一个窗口");

    //创建自己的按钮类
    MyPushButton *myBtn=new MyPushButton;

    myBtn->setText("我自己的按钮");

    myBtn->move(200,0);
    myBtn->setParent(this);

    //需求 点击我的按钮 关闭窗口
    //参数1 信号的发送者 参数2 发送的信号(函数信号地址) 参数3 信号接受者 参数4 处理槽函数
    //connect(myBtn,&QPushButton::clicked,this,&QWidget::close);
    connect(myBtn,&MyPushButton::clicked,this,&MyWidget::close);
}


MyWidget::~MyWidget()
{
    delete ui;
    qDebug()<<"myWiget的析构函数调用";
}

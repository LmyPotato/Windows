#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
#include <QMouseEvent>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    static int N=0;

    //启动定时器
    id1=startTimer(1000);//参数1 间隔 单位：毫秒

    id2=startTimer(2000);


    //定时器的第二种方法
    QTimer *timer=new QTimer(this);

    //启动
    timer->start(500);

    connect(timer,&QTimer::timeout,[=](){
        //static int num=1;

        //Label2 间隔1秒
        ui->label_4->setText(QString::number(N++));
    });

    //点击暂停 实现停止
    connect(ui->pushButton,&QPushButton::clicked,[=](){
        timer->stop();
    });

    //点击开始 实现计时
    connect(ui->pushButton_2,&QPushButton::clicked,[=](){
        timer->start();
    });

    //点击清零 实现清零
    connect(ui->pushButton_3,&QPushButton::clicked,[=](){
        N=0;
        ui->label_4->setText(QString::number(N));
    });



    //1.给label 安装事件过滤器
    ui->label->installEventFilter(this);

    //2.重写 eventfilter事件

}

bool Widget::eventFilter(QObject *obj, QEvent *e)
{
    if(obj==ui->label)
    {
        if(e->type()==QEvent::MouseButtonPress)
        {
            QMouseEvent *ev=static_cast<QMouseEvent *>(e);
            QString str=QString("事件过滤器中：：鼠标按下 x=%1 y=%2 globalX=%3 globalY=%4").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
            qDebug()<< str;

            return true;//true代表用户自己处理 不向下分发
        }
    }
    return QWidget::eventFilter(obj,e);
}

//重写定时器事件
void Widget::timerEvent(QTimerEvent *ev)
{
    if(ev->timerId()==id1)
    {
        static int num=1;

        //Label2 间隔1秒
        ui->label_2->setText(QString::number(num++));
    }

    if(ev->timerId()==id2)
    {
        //label3 间隔2秒
        static int num2=1;

        //Label2 间隔1秒
        ui->label_3->setText(QString::number(num2++));
    }

}

Widget::~Widget()
{
    delete ui;
}

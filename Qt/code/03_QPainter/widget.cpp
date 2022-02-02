#include "widget.h"
#include "ui_widget.h"
#include <QPainter>//画家类
#include <QTimer>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    QTimer *timer=new QTimer(this);

    timer->start(50);


    //点击移动图画
//    connect(ui->pushButton,&QPushButton,[=](){
//        //如果手动调用绘图事件 用update
//        posX+=20;
//        update();
//    });
//    connect(timer,&QTimer::timeout,[=](){
//        posX+=5;
//        update();
//    });
}

//绘画事件
void Widget::paintEvent(QPaintEvent *)
{
//    //实例化画家对象 this 指定的是绘图设备
//    QPainter painter(this);

//    //设置画笔
//    QPen pen(QColor(255,100,100));
//    //设置画笔的宽度
//    pen.setWidth(3);
//    //设置画笔的风格
//    pen.setStyle(Qt::DotLine);


//    //让画家使用这个笔
//    painter.setPen(pen);



//    //设置画刷
//    //QBrush brush(QColor(0,255,0));
//    QBrush brush(Qt::cyan);
//    //设置画刷风格
//    brush.setStyle(Qt::Dense7Pattern);

//    //让画家使用画刷
//    painter.setBrush(brush);



//    painter.drawLine(QPoint(0,0),QPoint(100,100));
//    //圆
//    painter.drawEllipse(QPoint(100,100),50,50);

//    //画矩形
//    painter.drawRect(QRect(20,20,50,50));

//    //画文字
//    painter.drawText(QRect(10,200,150,50),"好好学习,天天向上.");



  ///////////////////////////高级设置/////////////////////
//    QPainter painter(this);
////    painter.drawEllipse(QPoint(100,50),50,50);
////    //设置 抗锯齿能力 效率低
////    painter.setRenderHint(QPainter::Antialiasing);
////    painter.drawEllipse(QPoint(200,50),50,50);

//    //画矩形
//    painter.drawRect(QRect(20,20,50,50));

//    // 让画家移动了100
//    painter.translate(100,0);

//    //保存画家
//    painter.save();

//    painter.drawRect(20,20,50,50);
//    painter.translate(100,0);

//    //还原画家保存状态
//    painter.restore();

//    painter.drawRect(QRect(20,20,50,50));

    //利用画家 画资源图片
    QPainter painter(this);
    //posX+=20;
    //如果超出屏幕 从0开始
    if(posX>this->width())
    {
        posX=0;
    }
    painter.drawPixmap(posX,0,QPixmap(":/Image/Luffy.png"));
}

Widget::~Widget()
{
    delete ui;
}

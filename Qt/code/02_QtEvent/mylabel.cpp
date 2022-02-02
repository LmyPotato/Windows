#include "mylabel.h"
#include <QDebug>
#include<QMouseEvent>

myLabel::myLabel(QWidget *parent) : QLabel(parent)
{
    //设置鼠标的追踪状态
    setMouseTracking(true);
}

//鼠标进入
// void myLabel::enterEvent(QEvent *event)
// {
//    qDebug()<<"鼠标进入";
// }

// //鼠标的离开
// void myLabel::leaveEvent(QEvent *event)
// {
//    qDebug()<<"鼠标离开";
// }


 //鼠标的按下
void myLabel::mousePressEvent(QMouseEvent *ev)
{
    //鼠标左键按下 提示信息
    //globalX 基显示的屏幕坐标原点的位置
    if(ev->button()==Qt::LeftButton)
    {
        QString str=QString("鼠标按下 x=%1 y=%2 globalX=%3 globalY=%4").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug()<< str;
    }

}

 //鼠标的释放
void myLabel::mouseReleaseEvent(QMouseEvent *ev)
{
    if(ev->button()==Qt::LeftButton)
    {
        QString str=QString("鼠标释放 x=%1 y=%2 globalX=%3 globalY=%4").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug()<< str;
    }
}

 //鼠标的移动
void myLabel::mouseMoveEvent(QMouseEvent *ev)
{
    if(ev->buttons() & Qt::LeftButton)
    {
        QString str=QString("鼠标移动 x=%1 y=%2 globalX=%3 globalY=%4").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug()<< str;
    }
}

//通过event事件分发器 拦截 鼠标按下事件
bool myLabel::event(QEvent *e)
{
    //如果鼠标按下 在event事件分发中做拦截操作
    if(e->type()==QEvent::MouseButtonPress)
    {
        QMouseEvent *ev=static_cast<QMouseEvent *>(e);
        QString str=QString("Event函数中：：鼠标按下 x=%1 y=%2 globalX=%3 globalY=%4").arg(ev->x()).arg(ev->y()).arg(ev->globalX()).arg(ev->globalY());
        qDebug()<< str;

        return true;//true代表用户自己处理 不向下分发
    }

    //其他事件交给父类处理 默认处理
    return QLabel::event(e);

}



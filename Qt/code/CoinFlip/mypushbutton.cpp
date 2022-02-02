#include "mypushbutton.h"
#include <QDebug>
#include <QPropertyAnimation>

//MyPushButton::MyPushButton(QWidget *parent) : QPushButton(parent)
//{

//}
//.h文件中的构造函数如果有默认参数，.cpp文件中就不要写
MyPushButton::MyPushButton(QString normalImg,QString pressImg)
{
    this->normalImagPath=normalImg;
    this->PressImagPath=pressImg;

    QPixmap pix;
    bool ret=pix.load(normalImg);
    if(!ret)
    {
        qDebug()<<"图片加载失败";
        return;
    }

    //设置固定大小
    this->setFixedSize(pix.width(),pix.height());

    //设置不规则图片样式
    this->setStyleSheet("QPushButton{border:0px;}");

    //设置图标
    this->setIcon(pix);

    //设置图标大小
    this->setIconSize(QSize(pix.width(),pix.height()));
}

void MyPushButton::zoom1()
{
    //创建动态对象
    QPropertyAnimation *animation=new QPropertyAnimation(this,"geometry");
    //设置时间间隔
    animation->setDuration(200);

    //起始位置
    animation->setStartValue((QRect(this->x(),this->y(),this->width(),this->height())));
    //结束位置
    animation->setEndValue((QRect(this->x(),this->y()+10,this->width(),this->height())));
    //其实用这句也可以实现 可以不用zoom2
    //animation->setStartValue((QRect(this->x(),this->y(),this->width(),this->height())));
    //设置弹跳曲线
    animation->setEasingCurve(QEasingCurve::OutBounce);

    //执行动画
    animation->start();
}

void MyPushButton::zoom2()
{
    //创建动态对象
    QPropertyAnimation *animation=new QPropertyAnimation(this,"geometry");
    //设置时间间隔
    animation->setDuration(200);

    //起始位置
    animation->setStartValue((QRect(this->x(),this->y()+10,this->width(),this->height())));
    //结束位置
    animation->setEndValue((QRect(this->x(),this->y(),this->width(),this->height())));
    //其实用这句也可以实现 可以不用zoom2
    //animation->setStartValue((QRect(this->x(),this->y(),this->width(),this->height())));
    //设置弹跳曲线
    animation->setEasingCurve(QEasingCurve::OutBounce);

    //执行动画
    animation->start();
}


void MyPushButton::mousePressEvent(QMouseEvent *e)
{
    if(this->PressImagPath!="")//传入的按下图片 不为空 切换图片
    {
        QPixmap pix;
        bool ret=pix.load(this->PressImagPath);
        if(!ret)
        {
            qDebug()<<"图片加载失败";
            return;
        }

        //设置固定大小
        this->setFixedSize(pix.width(),pix.height());
        //设置不规则图片样式
        this->setStyleSheet("QPushButton{border:0px;}");
        //设置图标
        this->setIcon(pix);
        //设置图标大小
        this->setIconSize(QSize(pix.width(),pix.height()));
    }

    //让父类执行其他内容
    return QPushButton::mousePressEvent(e);

}

void MyPushButton::mouseReleaseEvent(QMouseEvent *e)
{
    if(this->PressImagPath!="")//传入的按下图片 不为空 切换成初始图片
    {
        QPixmap pix;
        bool ret=pix.load(this->normalImagPath);
        if(!ret)
        {
            qDebug()<<"图片加载失败";
            return;
        }

        //设置固定大小
        this->setFixedSize(pix.width(),pix.height());
        //设置不规则图片样式
        this->setStyleSheet("QPushButton{border:0px;}");
        //设置图标
        this->setIcon(pix);
        //设置图标大小
        this->setIconSize(QSize(pix.width(),pix.height()));
    }

    //让父类执行其他内容
    return QPushButton::mouseReleaseEvent(e);
}

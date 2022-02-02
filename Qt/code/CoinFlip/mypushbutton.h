#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    //explicit MyPushButton(QWidget *parent = nullptr);

    //构造函数 参数一 正常显示图片的路径 参数2 按下后显示图片路劲
    MyPushButton(QString normalImg,QString pressImg="");

    //成员属性 保存用户传入显示路径 以及按下后显示的图片路径
    QString normalImagPath;
    QString PressImagPath;


    //弹跳特效
    void zoom1();//下
    void zoom2();//上

    //重写按钮的按下 和 释放
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

signals:

public slots:
};

#endif // MYPUSHBUTTON_H

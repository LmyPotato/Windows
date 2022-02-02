#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>

class myLabel : public QLabel
{
    Q_OBJECT
public:
    explicit myLabel(QWidget *parent = nullptr);

//    //鼠标进入
//     void enterEvent(QEvent *event);

//     //鼠标的离开
//     void leaveEvent(QEvent *event);

     //鼠标的按下
     virtual void mousePressEvent(QMouseEvent *ev);
     //鼠标的释放
     virtual void mouseReleaseEvent(QMouseEvent *ev);
     //鼠标的移动
     virtual void mouseMoveEvent(QMouseEvent *ev);

    //通过event事件分发器 拦截 鼠标按下事件
    bool event(QEvent *e);

signals:

public slots:
};

#endif // MYLABEL_H

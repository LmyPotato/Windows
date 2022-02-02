#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    //重写定时器事件
    void timerEvent(QTimerEvent *);
    int id1;//定时器1的唯一标识
    int id2;//定时器2的唯一标识

    //重写事件过滤器
    bool eventFilter(QObject *watched, QEvent *event);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H

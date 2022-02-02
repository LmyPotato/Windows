#ifndef MYCOIN_H
#define MYCOIN_H

#include <QPushButton>
#include <QDebug>
#include <QTimer>
class MyCoin : public QPushButton
{
    Q_OBJECT
public:
    //explicit MyCoin(QWidget *parent = nullptr);
    //参数代表 传入的金币路径 还是银币路径
    MyCoin(QString btnImg);

    //金币的属性
    int posX;
    int posY;
    bool flag;//正反

    //改变标志的方法
    void changeFlag();
    QTimer *timer1;//正变反
    QTimer *timer2;//反变正
    int min=1;
    int max=8;

    //执行动画的标志
    bool isAnimation=false;

    //重写按下和释放
    void mousePressEvent(QMouseEvent *e);

    //是否胜利
    bool isWin=false;


signals:

public slots:
};

#endif // MYCOIN_H

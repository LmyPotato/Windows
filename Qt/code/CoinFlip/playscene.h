#ifndef PLAYSCENE_H
#define PLAYSCENE_H

#include <QMainWindow>
#include <mycoin.h>

class PlayScene : public QMainWindow
{
    Q_OBJECT
public:
    //explicit PlayScene(QWidget *parent = nullptr);
       PlayScene(int leveNum);

       int leaveIndex;//内部成员函数 记住选择的关卡

       //重写绘图事件
       void paintEvent(QPaintEvent *);

       int gameArray[4][4];//二维数组 维护每关的具体数组

       MyCoin *coinBtn[4][4];

       //是否胜利
       bool isWin;
signals:
       void chooseSceneBack();

public slots:
};

#endif // PLAYSCENE_H

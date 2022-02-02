#include "mainscene.h"
#include "ui_mainscene.h"
#include <QPainter>
#include <mypushbutton.h>
#include <QDebug>
#include <QTimer>
#include <QSound>//多媒体模块 音效头文件

MainScene::MainScene(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainScene)
{
    ui->setupUi(this);

    //配置主场景

    //设置固定大小
    setFixedSize(320,588);

    //设置图表
    setWindowIcon(QIcon(":/res/Coin0001.png"));

    //设置标题
    setWindowTitle("翻金币主场景");

    //退出按钮 triggered触发
//    connect(ui->actionquit,&QAction::triggered,[=](){
//        this->close();
//    });

    //准备开始按钮音效
    QSound *startSound = new QSound(":/res/TapButtonSound.wav",this);
//    startSound->setLoops(2);//设置循环次数 -1无限循环
//    startSound->play();

    //开始按钮
    MyPushButton *startBtn=new MyPushButton(":/res/MenuSceneStartButton.png");
    startBtn->setParent(this);
    startBtn->move(this->width()*0.5-startBtn->width()*0.5,this->height()*0.7);

    //实例化选择关卡的场景
    chooseScene=new ChooseLevelScene;

    //监听选择关卡的返回按钮信号
    connect(chooseScene,&ChooseLevelScene::chooseSceneBack,this,[=](){
        this->setGeometry(chooseScene->geometry());
        chooseScene->hide();//选择关卡主场景 隐藏掉
        this->show();//重新显示主场景
    });

    connect(startBtn,&MyPushButton::clicked,[=](){
        //qDebug()<<"点击了开始";
        //弹出特效
        //播放开始的音效
        startSound->play();
        startBtn->zoom1();
        startBtn->zoom2();
        //延时进入选择关卡
        QTimer::singleShot(500,this,[=](){
            //进入选择场景
            //设置chooseScene场景的位置
            chooseScene->setGeometry(this->geometry());
            //自身隐藏
            this->hide();
            //显示选择关卡
            chooseScene->show();
        });
    });

}

//重写painterEvent事件 画背景图
void MainScene::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/res/PlayLevelSceneBg.png");
    //painter.drawPixmap(0,0,pix); 不指定大小
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    //画背景上的图标
    pix.load(":/res/Title.png");
    //缩放
    pix=pix.scaled(pix.width()*0.5,pix.height()*0.5);
    painter.drawPixmap(10,30,pix);

}

MainScene::~MainScene()
{
    delete ui;
}

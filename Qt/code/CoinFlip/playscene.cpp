#include "playscene.h"
#include <QDebug>
#include <QMenuBar>
#include <QPainter>
#include <mypushbutton.h>
#include <QTimer>
#include <QLabel>
#include <mycoin.h>
#include <dataconfig.h>
#include <QPropertyAnimation>
#include <QSound>

//PlayScene::PlayScene(QWidget *parent) : QMainWindow(parent)
//{

//}

PlayScene::PlayScene(int leveNum)
{
//    QString str=QString("进入了第%1关").arg(leveNum);
//    qDebug()<<str;
    this->leaveIndex=leveNum;


    //初始化游戏场景
    //设置固定大小
    this->setFixedSize(320,588);
    //设置图标
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    //设置标题
    this->setWindowTitle("翻金币场景");

    //创建菜单栏
    QMenuBar *bar=menuBar();
    setMenuBar(bar);

    //创建菜单
    QMenu *startMenu=bar->addMenu("开始");

    //创建退出菜单项
    QAction *quitAction=startMenu->addAction("退出");

    connect(quitAction,&QAction::triggered,[=](){
        this->close();
    });
    //返回按钮音效
    QSound *backSound = new QSound(":/res/BackButtonSound.wav",this);
    //翻金币音效
    QSound *flipSound = new QSound(":/res/ConFlipSound.wav",this);
    //胜利按钮音效
    QSound *winSound = new QSound(":/res/LevelWinSound.wav",this);

    //返回按钮
    MyPushButton *backBtn=new MyPushButton(":/res/BackButton.png",":/res/BackButtonSelected.png");
    backBtn->setParent(this);
    backBtn->move(this->width()-backBtn->width(),this->height()-backBtn->height());

    //点击返回
    connect(backBtn,&MyPushButton::clicked,[=](){
//        qDebug()<<"点击了返回";
//        //告诉主场景 我返回了 监听ChooseLevelScene
        backSound->play();
        QTimer::singleShot(200,this,[=](){
            emit this->chooseSceneBack();
        });
    });

    //显示当前关卡
    QLabel *label=new QLabel;
    label->setParent(this);
    QFont font;
    font.setFamily("华文新魏");
    font.setPointSize(20);
    QString str1=QString("Level:%1").arg(this->leaveIndex);
    //将字体设置到标签中
    label->setFont(font);
    label->setText(str1);
    label->setGeometry(30,this->height()-50,120,50);

    dataConfig config;
    //初始化每关的二维数组
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            this->gameArray[i][j]=config.mData[this->leaveIndex][i][j];
        }
    }

    QLabel* winLabel = new QLabel;
    QPixmap tmpPix;
    tmpPix.load(":/res/LevelCompletedDialogBg.png");
    winLabel->setGeometry(0,0,tmpPix.width(),tmpPix.height());
    winLabel->setPixmap(tmpPix);
    winLabel->setParent(this);
    winLabel->move( (this->width() - tmpPix.width())*0.5 , -tmpPix.height());

    //显示金币背景图
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            //绘制背景图
            QPixmap pix=(QPixmap(":/res/BoardNode.png"));
            QLabel *label=new QLabel;
            label->setGeometry(0,0,pix.width(),pix.height());
            label->setPixmap(pix);
            label->setParent(this);
            label->move(57+i*50,200+j*50);

            //创建金币
            QString str;
            if(this->gameArray[i][j]==1)
            {
                //显示金币
                str=":/res/Coin0001.png";
            }
            else
            {
                str=":/res/Coin0008.png";
            }

            MyCoin *coin=new MyCoin(str);
            coin->setParent(this);
            coin->move(59+i*50,204+j*50);

            //给金币赋值
            coin->posX=i;
            coin->posY=j;
            coin->flag=this->gameArray[i][j];//1 正面 0 反面

            //将金币放到 金币的二维数组里 以便以后期的维护
            coinBtn[i][j]=coin;
            //点击金币翻转
            connect(coin,&MyCoin::clicked,[=](){
                //播放翻金币的音效
                flipSound->play();
                //点击前关闭
                for(int i=0;i<4;i++)
                {
                    for(int j=0;j<4;j++)
                    {
                        this->coinBtn[i][j]->isWin=true;
                    }
                }

                coin->changeFlag();
                this->gameArray[i][j]=this->gameArray[i][j]==0?1:0;

                //翻转周围
                //周围的右侧翻硬币条件 延时翻转
                QTimer::singleShot(300,this,[=](){
                    if(coin->posX+1<=3)
                    {
                        coinBtn[coin->posX+1][coin->posY]->changeFlag();
                        this->gameArray[coin->posX+1][coin->posY]=this->gameArray[coin->posX+1][coin->posY]==0?1:0;
                    }
                    //周围的左侧翻硬币条件
                    if(coin->posX-1>=0)
                    {
                        coinBtn[coin->posX-1][coin->posY]->changeFlag();
                        this->gameArray[coin->posX-1][coin->posY]=this->gameArray[coin->posX-1][coin->posY]==0?1:0;
                    }
                    //周围的下侧翻硬币条件
                    if(coin->posY+1<=3)
                    {
                        coinBtn[coin->posX][coin->posY+1]->changeFlag();
                        this->gameArray[coin->posX][coin->posY+1]=this->gameArray[coin->posX][coin->posY+1]==0?1:0;
                    }
                    //周围的上侧翻硬币条件
                    if(coin->posY-1>=0)
                    {
                        coinBtn[coin->posX][coin->posY-1]->changeFlag();
                        this->gameArray[coin->posX][coin->posY-1]=this->gameArray[coin->posX][coin->posY-1]==0?1:0;
                    }
                    //翻完所有全部开启
                    for(int i=0;i<4;i++)
                    {
                        for(int j=0;j<4;j++)
                        {
                            this->coinBtn[i][j]->isWin=false;
                        }
                    }

                    //判断是否胜利
                    this->isWin=true;
                    for(int i=0;i<4;i++)
                    {
                        for(int j=0;j<4;j++)
                        {
                            if(coinBtn[i][j]->flag==false)
                            {
                                this->isWin=false;
                                break;
                            }
                        }
                    }

                    if(this->isWin==true)
                    {
                        //添加胜利音效
                        winSound->play();
                        //qDebug()<<"游戏胜利";
                        //将所有按钮的胜利标志为true
                        for(int i=0;i<4;i++)
                        {
                            for(int j=0;j<4;j++)
                            {
                                coinBtn[i][j]->isWin=true;
                            }
                        }
                        //将胜利图片放下来
                        QPropertyAnimation *animation=new QPropertyAnimation(winLabel,"geometry");
                        //设置时间间隔
                        animation->setDuration(800);
                        //设置开始
                       animation->setStartValue(QRect(winLabel->x(),winLabel->y(),winLabel->width(),winLabel->height()));
                        //设置结束
                        animation->setEndValue(QRect(winLabel->x(),winLabel->y()+114,winLabel->width(),winLabel->height()));
                        //设置缓和曲线
                        animation->setEasingCurve(QEasingCurve::OutBounce);
                        //执行动画
                        animation->start();
                    }
                });
            });
        }
    }
}

void PlayScene::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;

    //创建背景
    pix.load(":/res/PlayLevelSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

    //加载标题
    pix.load(":/res/Title.png");
    pix=pix.scaled(pix.width()*0.5,pix.height());
    painter.drawPixmap(10,30,pix.width(),pix.height(),pix);

}

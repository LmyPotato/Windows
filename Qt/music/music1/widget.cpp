#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowTitle("V1.0");
    setWindowIcon(QIcon(":/Image/Luffy.png"));

    systemInit();
}


Widget::~Widget()
{
    delete ui;
}

void Widget::systemInit()
{
    this->player=new QMediaPlayer;
    player->setVolume(50);
    ui->horizontalSlider_value->setValue(50);
    ui->comboBox_speed->setCurrentText("1.0");
    ui->progressBar->setValue(0);

//    video=new QVideoWidget(this);
//    video->setWindowTitle("视频播放器 V1.0");

//    QHBoxLayout *layout=new  QHBoxLayout;
//    video->setLayout(layout);

//    ui->horizontalLayout->insertWidget(0,video);

//    QDesktopWidget *pDesk=QApplication::desktop();

//    video->setMinimumSize(pDesk->width()/4*3,pDesk->height()/4*3);

//    player->setVideoOutput(video);

//连接
    if(isError==1)
    {
        nextMusic();
        isError=0;
    }
    //添加音乐文件
    connect(ui->addFileBtn,&QPushButton::clicked,this,&Widget::addFile);
    //开始
    connect(ui->starBtn,&QPushButton::clicked,this,&Widget::startMusic);
    //设置音量
    connect(ui->horizontalSlider_value,&QSlider::valueChanged,this,&Widget::setVolumes);
    //暂停
    connect(ui->stopBtn,&QPushButton::clicked,this,&Widget::pauseMusic);
    //静音
    connect(ui->muteBtn,&QPushButton::clicked,this,&Widget::mute);
    //速度
    connect(ui->comboBox_speed,&QComboBox::currentTextChanged,this,&Widget::speed);
//    connect(ui->comboBox_speed,&QComboBox::currentTextChanged,[=](){
//        this->speed();
//    });
    //
    connect(player, SIGNAL(positionChanged(qint64)),this, SLOT(player_location(qint64)));
    connect(player,SIGNAL(durationChanged(qint64)),this,SLOT(playTime(qint64)));
    //下一曲
    connect(ui->nextBtn,&QPushButton::clicked,this,&Widget::nextMusic);
    //上一曲
    connect(ui->lastBtn,&QPushButton::clicked,this,&Widget::lastMusic);
    //清楚文件路径
    connect(ui->clearBtn,&QPushButton::clicked,this,&Widget::clear);
    //关于
    connect(ui->aboutBtn,&QPushButton::clicked,this,&Widget::showAbout);
    //退出
    connect(ui->closeBtn,&QPushButton::clicked,[=](){
            this->close();
    });

    //错误警告
    connect(player, static_cast<void(QMediaPlayer::*)(QMediaPlayer::Error)>(&QMediaPlayer::error),
          [=](QMediaPlayer::Error error)
    {
       isError=1;
       if(QMediaPlayer::NoError==error)
       {
           ui->lineEdit_errorinfo->setText("正常解码!");
       }
       else if(QMediaPlayer::ResourceError==error)
       {
           ui->lineEdit_errorinfo->setText("媒体资源无法解析。");
       }
       else if(QMediaPlayer::FormatError==error)
       {
           ui->lineEdit_errorinfo->setText("不支持该媒体资源的格式，没有解码器!");
       }
       else if(QMediaPlayer::NetworkError==error)
       {
           ui->lineEdit_errorinfo->setText("发生网络错误。");
       }
       else if(QMediaPlayer::AccessDeniedError==error)
       {
           ui->lineEdit_errorinfo->setText("没有适当的权限来播放媒体资源。");
       }
       else if(QMediaPlayer::ServiceMissingError==error)
       {
           ui->lineEdit_errorinfo->setText("没有找到有效的播放服务，播放无法继续。");
       }
    });
}
//------------------addFile------------------
void Widget::addFile()
{
    //getOpenFileNames--QList getOpenFileName--QString
    QStringList filenamelist=QFileDialog::getOpenFileNames(this,"选择添加文件","D:/",tr("*.*"));
    if(filenamelist.count()>0)
        ui->listWidget->addItems(filenamelist);
}
//------------------selectFile------------------
void Widget::selectFile(QListWidgetItem *item)
{
    player->setMedia(QUrl::fromLocalFile(item->text()));
    player->play();
}
//------------------startMusic------------------
void Widget::startMusic()
{
    player->setMedia(QUrl("qrc:/Image/1.mp3"));
    player->play();
    if(ui->listWidget->currentRow()!=-1)
    {
        if(player->state()==QMediaPlayer::PausedState)
        {
            ui->lineEdit_errorinfo->setText("");
            player->play();
        }
        else
        {
            ui->lineEdit_errorinfo->setText("");

            player->setMedia(QUrl::fromLocalFile(ui->listWidget->currentItem()->text()));
            player->play();
        }
    }
}
//------------------setVolumes------------------
void Widget::setVolumes()
{
    value=ui->horizontalSlider_value->value();
//    qDebug()<<value;
    player->setVolume(value);
    ui->labelVolume->setText(QString::number(value));
}
//------------------pauseMusic------------------
void Widget::pauseMusic()
{
    player->pause();

}
//------------------mute------------------
void Widget::mute()
{
    if(player->isMuted())
    {
        player->setMuted(0);
    }
    else
    {
        player->setMuted(1);
    }
}
//------------------speed------------------
void Widget::speed()
{
    switch (ui->comboBox_speed->currentIndex()) {
    case 0:
        player->setPlaybackRate(0.5);
        break;
    case 1:
        player->setPlaybackRate(1.0);
        break;
    case 2:
        player->setPlaybackRate(1.5);
        break;
    case 3:
        player->setPlaybackRate(2.0);
        break;
    default:
        player->setPlaybackRate(1.0);
        break;
    }
}
//------------------nextMusic------------------
void Widget::nextMusic()
{
    cnt=ui->listWidget->currentRow();
    if(cnt!=-1)
    {
        cnt++;
        if(cnt>=ui->listWidget->count())
        {
            ui->listWidget->setCurrentRow(0);
            ui->lineEdit_errorinfo->setText("");
        }
        else
        {
            ui->listWidget->setCurrentRow(cnt);
            ui->lineEdit_errorinfo->setText("");
        }

        player->setMedia(QUrl::fromLocalFile(ui->listWidget->currentItem()->text()));
        player->play();
    }
}
//------------------lastMusic------------------
void Widget::lastMusic()
{
    cnt=ui->listWidget->currentRow();
    if(cnt!=-1)
    {
        cnt--;
        if(cnt<0)
        {
            ui->listWidget->setCurrentRow(ui->listWidget->count()-1);
            ui->lineEdit_errorinfo->setText("");
        }
        else
        {
            ui->listWidget->setCurrentRow(cnt);
            ui->lineEdit_errorinfo->setText("");
        }

        player->setMedia(QUrl::fromLocalFile(ui->listWidget->currentItem()->text()));
        player->play();
    }
}
//------------------clear------------------
void Widget::clear()
{
    ui->listWidget->clear();
}
//播放进度
void Widget::player_location(qint64 value)
{
    ui->progressBar->setValue(value);
    ui->label_Time->setText(tr("%1/%2").arg(value/1000).arg(PlayTime/1000));
    if(value>=PlayTime-1)
    {
        nextMusic();
    }
}
//------------------playTime------------------
void Widget::playTime(qint64 value)
{
    PlayTime=value; //播放总时间
    qDebug()<<PlayTime;
    ui->progressBar->setMaximum(value);
}


void Widget::showAbout()
{
//    qDebug()<<"进入关于";
    QMessageBox::about(this,"关于","软件用于简单的播放音乐\n"
                                 "支持基本的暂停 下一曲 上一曲\n"
                                 "支持显示进度条 播放速度 音量调节\n"
                                 "--------------------杏林洁白\n"
                                  "致谢:小冯同学^_^\n");
}

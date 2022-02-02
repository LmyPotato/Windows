#include "widget.h"
#include "ui_widget.h"

/*
 * 设置QT界面的样式
*/
void Widget::SetStyle(const QString &qssFile) {
    QFile file(qssFile);
    if (file.open(QFile::ReadOnly)) {
        QString qss = QLatin1String(file.readAll());
        qApp->setStyleSheet(qss);
        QString PaletteColor = qss.mid(20,7);
        qApp->setPalette(QPalette(QColor(PaletteColor)));
        file.close();
    }
    else
    {
        qApp->setStyleSheet("");
    }
}


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    this->setWindowTitle("视频播放器");
    this->SetStyle(":/qss/blue.css");     //设置样式表
    this->setWindowIcon(QIcon(":/log.ico")); //设置图标

    /*多媒体类*/
     player = new QMediaPlayer(this);

     /*创建播放视频的窗口*/
     videoWidget = new QVideoWidget(this);

     videoWidget->setWindowTitle("视频播放器");

    QHBoxLayout *layout = new QHBoxLayout;
    videoWidget->setLayout(layout);

    ui->horizontalLayout->insertWidget(0,videoWidget);

    /*设置窗口的位置与大小*/
    QDesktopWidget *pDesk = QApplication::desktop();
    //设置视频窗口的大小
    videoWidget->setMinimumSize(pDesk->width()/4*3,pDesk->height()/4*3);

    /*将播放的视频添加到窗口中*/
     player->setVideoOutput(videoWidget);

     ui->horizontalSlider_value->setMaximum(100); //音量最大值
     ui->horizontalSlider_value->setMinimum(0);   //音量最小值
     ui->horizontalSlider_value->setValue(50);    //默认音量设置
     player->setVolume(50);//默认音量设置

     ui->progressBar->setValue(0); //进度条

     //播放速率
     ui->comboBox_speed->addItem("1.0");
     ui->comboBox_speed->addItem("2.0");
     ui->comboBox_speed->addItem("3.0");
     ui->comboBox_speed->addItem("4.0");

     connect(player, static_cast<void(QMediaPlayer::*)(QMediaPlayer::Error)>(&QMediaPlayer::error),
           [=](QMediaPlayer::Error error)
     {
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

     //添加播放进度的信号
     connect(player, SIGNAL(positionChanged(qint64)),this, SLOT(player_location(qint64)));

     //添加获取播放总时间的信号
     connect(player, SIGNAL(durationChanged(qint64)),this, SLOT(player_Time(qint64)));

}

Widget::~Widget()
{
    delete ui;
}


//添加视频文件
void Widget::on_pushButton_AddrVideoFile_clicked()
{
    QStringList filenamelist=QFileDialog::getOpenFileNames(this,"选择添加的文件","E:/",tr("*.*"));
    if(filenamelist.count()>0) ui->listWidget->addItems(filenamelist); //添加到列表
}


//双击选中了一个文件
void Widget::on_listWidget_itemDoubleClicked(QListWidgetItem *item)
{
     player->setMedia(QUrl::fromLocalFile(item->text()));
     player->play();
}


//开始播放
void Widget::on_pushButton_start_clicked()
{
    //判断是否选中条目
    if(ui->listWidget->currentRow()!=-1)
    {
        if(player->state()==QMediaPlayer::PausedState) //暂停播放状态
        {
             ui->lineEdit_errorinfo->setText("");
             player->play();
        }
        else
        {
            ui->lineEdit_errorinfo->setText("");
            //获取当前选中的视频进行播放
            player->setMedia(QUrl::fromLocalFile(ui->listWidget->currentItem()->text()));
            player->play();
         }
    }
}


//音量的值
void Widget::on_horizontalSlider_value_sliderMoved(int position)
{
    player->setVolume(position);//默认音量设置
}


//静音设置
void Widget::on_pushButton_mute_clicked()
{
     if(player->isMuted())
     {
         player->setMuted(false); //取消静音
     }
     else
     {
         player->setMuted(true); //静音
     }
}


//暂停
void Widget::on_pushButton_pause_clicked()
{
    player->pause(); //暂停
}


//播放速率
void Widget::on_comboBox_speed_activated(const QString &arg1)
{
    player->setPlaybackRate(arg1.toFloat());
}


//上一行
void Widget::on_pushButton_up_clicked()
{
    int cnt=ui->listWidget->currentRow();
    if(cnt!=-1) //选中了行
    {
        if(cnt==0)
        {
            ui->listWidget->setCurrentRow(0);
        }
        else
        {
            cnt--;
            ui->listWidget->setCurrentRow(cnt);
        }
        ui->lineEdit_errorinfo->setText("");
        //获取当前选中的视频进行播放
        player->setMedia(QUrl::fromLocalFile(ui->listWidget->currentItem()->text()));
        player->play();
    }
}

//下一行
void Widget::on_pushButton_down_clicked()
{
    int cnt=ui->listWidget->currentRow();
    if(cnt!=-1) //选中了行
    {
        cnt++;
        if(cnt>=ui->listWidget->count())ui->listWidget->setCurrentRow(ui->listWidget->count()-1);
        else ui->listWidget->setCurrentRow(cnt);

        ui->lineEdit_errorinfo->setText("");
        //获取当前选中的视频进行播放
        player->setMedia(QUrl::fromLocalFile(ui->listWidget->currentItem()->text()));
        player->play();
    }
}

//播放进度
void Widget::player_location(qint64 value)
{
    ui->progressBar->setValue(value);
    ui->label_Time->setText(tr("%1/%2").arg(value/1000).arg(PlayTime/1000));
}

//播放总时间
void Widget::player_Time(qint64 value)
{
    PlayTime=value; //播放总时间
    ui->progressBar->setMaximum(value);
}

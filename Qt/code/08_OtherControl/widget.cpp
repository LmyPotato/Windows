#include "widget.h"
#include "ui_widget.h"
#include <QMovie>
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //栈控件
    //设置默认
    ui->stackedWidget->setCurrentIndex(1);

    //scorllArea
    connect(ui->btn_scollArea,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(2);
    });


    //toolBox
    connect(ui->btn_ToolBox,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });

    //TableWidget
    connect(ui->btn_TabWidget,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });


    //下拉框
    ui->comboBox->addItem("奔驰");
    ui->comboBox->addItem("宝马");
    ui->comboBox->addItem("拖拉机");

    //点击按钮选中拖拉机
    connect(ui->btn_select,&QPushButton::clicked,[=](){
        //ui->comboBox->setCurrentIndex(2);
        ui->comboBox->setCurrentText("拖拉机");
    });


    //利用QLable显示图片
    ui->lbl_Image->setPixmap(QPixmap(":/Image/3.jpg"));

//    //利用QLablel显示 Gif动图
//    QMovie *movie=new QMovie(":/Image/maliao.gif");
//    ui->Lable2->setMovie(movie);
//    //播放动图
//    movie->start();

}

Widget::~Widget()
{
    delete ui;
}

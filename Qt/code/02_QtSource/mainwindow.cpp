#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->actionnew->setIcon(QIcon("E:/Image/p1.png"));

    //使用添加Qt资源 ":+前缀名+文件名"
    ui->actionnew->setIcon(QIcon(":/Image/1.jpg"));
    ui->actionopen->setIcon(QIcon(":/Image/2.jpg"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

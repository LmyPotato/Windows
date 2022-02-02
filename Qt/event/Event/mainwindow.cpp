#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



}


void MainWindow::closeEvent(QCloseEvent *event)
{
    int ret=QMessageBox::information(this,"关闭事件","是否关闭",QMessageBox::Yes|QMessageBox::No);

    if(ret==QMessageBox::Yes)
    {
        event->accept();
    }
    else
    {
        event->ignore(); //清除事件
    }
}

void MainWindow::leaveEvent(QEvent *event)
{
    qDebug()<<"鼠标离开";

}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    qDebug()<<"x:"<<event->x()<<"y:"<<event->y();
    qDebug()<<"posX"<<event->pos().x()<<"posY"<<event->pos().y();

}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        qDebug()<<"左键按下";
    }
    else if(event->button()==Qt::RightButton)
    {
        qDebug()<<"右键按下";
    }
    else if(event->button()==Qt::MidButton)
    {
        qDebug()<<"中键按下";
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
/*
 *-----------------------
 *-----文件
 *--------保存
 *--------删除
 *--------关闭
 *-----------文件夹
 *------------------1
 *------------------2
 *------------------3
 *----------------------5
 *----------------------6
 *----------------------7
*/
    QMenuBar *menubar;
    menubar=new QMenuBar;
    setMenuBar(menubar);
    //一级目录
    QMenu *menu_file=menubar->addMenu("文件");
    //二级目录
    QMenu *save=menu_file->addMenu("保存");
    menu_file->addAction("删除");
    menu_file->addAction("关闭");
    //三级目录
    save->addAction("文件夹");
    save->addAction("1");
    save->addAction("2");
    QMenu *e=save->addMenu("3");
    //四级目录
    e->addAction("5");
    e->addAction("6");
    e->addAction("7");
}

MainWindow::~MainWindow()
{
    delete ui;
}

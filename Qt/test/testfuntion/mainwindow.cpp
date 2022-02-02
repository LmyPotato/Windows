#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "modify.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m=new Modify;

    //设置密码显示格式
    ui->lineEditPassword->setEchoMode(QLineEdit::Password);
    //代码补全

    number=new QCompleter(this->id);
    ui->lineEditIdNumber->setCompleter(number);

    //连接登陆
    connect(ui->landBtn,&QPushButton::clicked,this,&MainWindow::land);
    //
    connect(ui->registerBtn,&QPushButton::clicked,this,&MainWindow::setRegister);
    //显示密码
    connect(ui->checkBox,&QCheckBox::clicked,[=](){
        if(ui->checkBox->isChecked()==1)
        {
            ui->lineEditPassword->setEchoMode(QLineEdit::Normal);
        }
        else
        {
            ui->lineEditPassword->setEchoMode(QLineEdit::Password);
        }
    });

}

MainWindow::~MainWindow()
{
    delete ui;
    delete m;
    delete number;
}

void MainWindow::land()
{
//    qDebug()<<ui->lineEditIdNumber->text();
//    qDebug()<<ui->lineEditPassword->text();

    QString info;
    info+="账号:";
    info+=ui->lineEditIdNumber->text();
    info+="\n";

    info+="密码:";
    info+=ui->lineEditPassword->text();
    info+="\n";

//    QMessageBox::information(this,"账号信息",info,QMessageBox::Ok);

}

void MainWindow::setRegister()
{
    this->hide();
    m->showPixmap();
//    m->show();
//    QString tempNumber;

//    tempNumber=ui->lineEditIdNumber->text();
//    this->id+=tempNumber;

//    qDebug()<<id;

}

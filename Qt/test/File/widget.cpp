#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    setWindowIcon(QIcon(":/Image/LuffyQ.png"));
    setWindowTitle("文件操作");

    systemInt();//系统初始化

}
//--------------showContent------------------系统初始化
void Widget::systemInt()
{
    QTimer *time=new QTimer(this);
    time->start(100);
    isChange=0;

    //读取按钮连接
    connect(ui->readBtn,&QPushButton::clicked,[=](){
        this->fileRead();
    });
    //写按钮连接
    connect(ui->writeBtn,&QPushButton::clicked,[=](){
        this->fileWrite();
        this->isChange=1;
    });
    //刷新
    connect(time,&QTimer::timeout,[=](){
        if(isChange==1)
        {
            this->showContent();
        }
    });
    //清空
    connect(ui->clearBtn,&QPushButton::clicked,[=](){
        this->clearContent();
    });

}
//--------------showContent------------------刷新显示
void Widget::showContent()
{
    //创建一个文件
    QFile file(path);
    //以只读的方式打开
    file.open(QIODevice::ReadOnly);
    //用于保存打开的文件内容
    QByteArray array;

    //遍历
    while(!file.atEnd())
    {
        array+=file.readLine();
    }
    //将内容显示
    ui->textEdit->setText(array);
    file.close();//关闭文件
}
//--------------clearContent------------------
void Widget::clearContent()
{
    QFile file(path);

    if(QMessageBox::Ok== (QMessageBox::question(this,"question","提示",QMessageBox::Ok|QMessageBox::No,QMessageBox::No)))
    {
        file.open(QIODevice::WriteOnly);
        ui->textEdit->setText("");
        //写入打开的文件
        file.write("");
    }

    file.close();
}

//--------------fileRead------------------读
void Widget::fileRead()
{
    //打开文件路径
    path=QFileDialog::getOpenFileName(this,"open file","C:\\Users\\86151\\Desktop");
    //将路径显示在readEdit中
    ui->readEdit->setText(path);

    //创建一个文件
    QFile file(path);
    //以只读的方式打开
    file.open(QIODevice::ReadOnly);
    //用于保存打开的文件内容
    QByteArray array;

    //遍历
    while(!file.atEnd())
    {
        array+=file.readLine();
    }
    //将内容显示
    ui->textEdit->setText(array);
    file.close();//关闭文件
}
//--------------fileWrite------------------读写
void Widget::fileWrite()
{
    QFile file(path);
    //文件追加
    file.open(QIODevice::Append);
    //获取writeEdit中的内容
    QString array=ui->writeEdit->text();
//    qDebug()<<array;

    //Qstring 转 QByteArray
    QByteArray byte=array.toUtf8();//可以显示中文
//    QByteArray byte=array.toLatin1();//在文本文件中显示不了中文

    //写入打开的文件
    file.write(byte);
    file.write("\n");
    file.close();
}

Widget::~Widget()
{
    delete ui;
}

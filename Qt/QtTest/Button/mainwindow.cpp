#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//----------------------------------QPushButton----------------------------------//
    QPushButton *iconBtn=new QPushButton(QIcon(":/Image/up.png"),"图标",this);
    QPushButton *btn=new QPushButton("测试按钮",this);
    //x,y,w,h
    btn->setGeometry(this->width()*0.5,this->height()*0.5,this->width()*0.2,this->height()*0.1);
    iconBtn->setGeometry(this->width()*0.5-btn->width(),this->height()*0.5,this->width()*0.2,this->height()*0.1);
    // 设置图标大小
    iconBtn->setIconSize(QSize(iconBtn->width(),iconBtn->height()*0.8));

    //设置按钮的可用属性-false 不可用 -true 可用
    btn->setEnabled(true);

    //set shortcut 快捷键
//    btn->setShortcut(tr("Ctrl+p"));
    btn->setShortcut(Qt::Key_Return);
    connect(btn,&QPushButton::clicked,this,[=](){
        qDebug()<<"按钮快捷键是enter";
//        btn->toggle();
    });

//----------------------------------QRadioButton----------------------------------//
    QRadioButton *rbtn=new QRadioButton("female",this);
    //x,y,w,h
    rbtn->setGeometry(QRect(50,50,80,16));

    gender_Group=new QButtonGroup(this);
    gender_Group->addButton(ui->womanBtn,0);
    gender_Group->addButton(ui->manBtn,1);

    connect(gender_Group,SIGNAL(buttonClicked(int)),this,SLOT(showSex()));


//----------------------------------checkBox----------------------------------//

    ui->groupBox_2->setCheckable(true);
    connect(ui->groupBox_2,&QGroupBox::toggled,this,&MainWindow::showInfo);
    ui->checkBoxAll->setTristate(true);
    connect(ui->showBtn,SIGNAL(clicked(bool)),this,SLOT(showInfo()));

//----------------------------------CommandLinkButton----------------------------------//
    connect(ui->commandLinkButton,SIGNAL(clicked(bool)),this,SLOT(connectBaiDu()));

//----------------------------------QDialogButtonBox----------------------------------//
    ui->buttonBox->addButton(QDialogButtonBox::Yes);

    connect(ui->buttonBox,SIGNAL(clicked(QAbstractButton*)),this,SLOT(testbuttonBox(QAbstractButton*)));

}
//QRadioButton
void MainWindow::showSex()
{
    int sexId=gender_Group->checkedId();
    switch (sexId) {
    case 0:
        qDebug()<<"选中了女生";
        break;
    case 1:
        qDebug()<<"选中了男生";
    default:
        break;
    }
}
//checkBox
void MainWindow::showInfo()
{
    int count=0;
    if(ui->checkBoxGame->isChecked())
    {
        qDebug()<<"Game";
        count++;
    }
    if(ui->checkBoxShleep->isChecked())
    {
        qDebug()<<"Shleep";
        count++;
    }
    if(ui->checkBoxVideo->isChecked())
    {
        qDebug()<<"Video";
        count++;
    }

    switch (count) {
    case 0:
        ui->checkBoxAll->setCheckState(Qt::Unchecked);
        break;
    case 1:
    case 2:
        ui->checkBoxAll->setCheckState(Qt::PartiallyChecked);
        break;
    case 3:
        ui->checkBoxAll->setCheckState(Qt::Checked);
    default:
        break;
    }

}
//CommandLinkButton
void MainWindow::connectBaiDu()
{
    QDesktopServices::openUrl(QUrl("http://www.baidu.com/"));
}
//QDialogButtonBox
void MainWindow::testbuttonBox(QAbstractButton *button)
{
    QString str="按钮盒测试";
    QString button_str="点击的按钮=";
    if(ui->buttonBox->button(QDialogButtonBox::Ok)==(QPushButton*)button)
    {
        //弹窗显示
        button_str+="OK";
        QMessageBox::information(this,str,button_str);
    }
    else if(ui->buttonBox->button(QDialogButtonBox::Cancel)==(QPushButton*)button)
    {
        button_str+="Cancel";
        QMessageBox::information(this,str,button_str);
    }
}
//QDialogButtonBox
void MainWindow::on_buttonBox_clicked(QAbstractButton *button)
{
    if(button == static_cast<QAbstractButton *>(ui->buttonBox->button(QDialogButtonBox::Ok)))
    {
        qDebug() << R"(Button "OK" has been clicked.)";
    }
    else if(button == ui->buttonBox->button(QDialogButtonBox::Cancel))
    {
        qDebug() << R"(Button "Cancle" has been clicked.)";
    }
}

//析构函数
MainWindow::~MainWindow()
{
    delete ui;
    delete gender_Group;
}





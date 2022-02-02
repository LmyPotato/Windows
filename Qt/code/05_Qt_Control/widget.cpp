#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


    //设置单选男
    ui->rBtnMan->setChecked(true);


    //选中女的后 打印信息
    connect(ui->rBtnWoman,&QRadioButton::clicked,[=](){
        qDebug()<<"选中了女生";
    });

    //多选按钮 2是选中 0未选中
    connect(ui->cBox,&QCheckBox::stateChanged,[=](int state){
        qDebug()<<state;
    });

//    //利用listWidget写诗
//    QStringList list;
//    list<<"锄禾日当午"<<"汗滴禾下土"<<"谁知盘中餐"<<"粒粒皆辛苦";
//    QString str= "锄禾日当午";

//    for(int i=0;i<list.size();i++)
//    {
//        QListWidgetItem *item=new QListWidgetItem(list[i]);
//        //将一行诗放入
//        ui->listWidget->addItem(item);
//        item->setTextAlignment(Qt::AlignHCenter);
//    }

//    QstingList QList<QString>
    QStringList list;
    list<<"锄禾日当午"<<"汗滴禾下土"<<"谁知盘中餐"<<"粒粒皆辛苦";
    ui->listWidget->addItems(list);
}

Widget::~Widget()
{
    delete ui;
}

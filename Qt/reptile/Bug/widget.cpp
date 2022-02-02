#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    qDebug() << manager->supportedSchemes();

}

Widget::~Widget()
{
    delete ui;
}

#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    resize(630,500);
    pix=QPixmap(490,500);
    pix.fill(Qt::white);

    ui->toolClearBtn->setCheckable(1);

    connect(ui->toolButtonColor,SIGNAL(clicked(bool)),this,SLOT(setColor()));

    connect(ui->toolClearBtn,SIGNAL(clicked(bool)),this,SLOT(clear()));

}

Widget::~Widget()
{
    delete ui;

}
//根据鼠标前后两个指针就能绘制直线
void Widget::paintEvent(QPaintEvent *)
{
    QPainter pp(&pix);
    QPen pen;

    pen.setColor(color);
    pen.setStyle(Qt::SolidLine);
    pen.setWidth(ui->comboBoxWidth->currentText().toFloat());
    pp.setPen(pen);

    switch (ui->comboBox->currentIndex()) {
    case 0:
        pp.drawLine(lastPoint,endPoint);
        break;
    case 1:
        pp.drawEllipse(lastPoint,endPoint.x(),endPoint.x());
        lastPoint=endPoint;
        break;
    case 2:
        pp.drawRect(lastPoint.x(),lastPoint.y(),endPoint.x(),endPoint.x());
        break;
    case 3:
        pp.drawLine(lastPoint,endPoint);
        break;
    default:
        pp.drawLine(lastPoint,endPoint);
        break;
    }
    lastPoint=endPoint;

    QPainter painter(this);
    painter.drawPixmap(0,0,pix);
}

void Widget::setColor()
{
    color=QColorDialog::getColor(color,this);

}

void Widget::clear()
{

    pix.fill(Qt::white);
    update();

}

//鼠标按下获得开始点
void Widget::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {//鼠标左键按下
        lastPoint=event->pos();
    }
}
//当鼠标移动时获得结束点，并更新绘制。
//调用update()函数会执行paintEvent()函数进行重新绘制。
void Widget::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        endPoint=event->pos();
        update();//进行绘制
    }
}

//当鼠标释放时，也进行重新绘制
void Widget::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        endPoint=event->pos();
        update();
    }
}


#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    shapeType=0;

    edit=new QTextEdit(this);
    edit->hide();

    setGeometry(600,300,500,500);
    setMouseTracking(1);

    pixmap=QPixmap(500,500);
    pixmap.fill(Qt::white);

    this->toolBar=addToolBar(tr("工具栏"));

    QAction *linesBtn=new QAction(QIcon(":/Image/pen.png"),"直线",this);
    toolBar->addAction(linesBtn);
    connect(linesBtn,SIGNAL(triggered(bool)),this,SLOT(drawLines()));

    QAction *rectBtn = new QAction(QIcon(":/Image/rect.png"),("矩形"), this);//矩形动作
    toolBar->addAction(rectBtn);
    connect(rectBtn,SIGNAL(triggered(bool)),this,SLOT(drawRect()));

}
//绘画
void MainWindow::paintEvent(QPaintEvent *e)
{
    pixmap=QPixmap(500,500);
    pixmap.fill(Qt::white);

    QPainter painter(&pixmap);

    unsigned int i2=0;
    for(int c=0;c<shape.size();c++)
    {
        if(shape.at(c)==1)
        {
              painter.drawLine(begin,move);
              begin=move;
        }
        else if(shape.at(c)==3)
        {
            painter.drawRect(rects.at(i2++));
        }
    }

    painter.end();
    painter.begin(this);
    painter.drawPixmap(0,0,pixmap);
}
//按下
void MainWindow::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        if(shapeType == 1)//线条(铅笔)
        {
            begin=e->pos();
            shape.append(1);
        }
        else if(shapeType==2)
        {
            QRect rect;//鼠标按下，矩形开始
            rects.append(rect);//将新矩形添加到矩形集合
            QRect& lastRect = rects.last();//拿到新矩形
            lastRect.setTopLeft(e->pos());//记录鼠标的坐标(新矩形的左上角坐标)
            shape.append(3);
        }
    }
}
//移动
void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()&Qt::LeftButton)
    {
        if(shapeType == 1)//铅笔画线
        {
            move=e->pos();
            update();//触发窗体重绘
        }
        else if(shapeType==2)
        {
            QRect& lastRect = rects.last();//拿到新矩形
            lastRect.setBottomRight(e->pos());//更新矩形的右下角坐标
            update();
        }

    }
}
//释放
void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        if(shapeType == 1)
        {
            move=e->pos();
        }
        else if(shapeType==2)
        {
            QRect& lastRect = rects.last();//拿到新矩形
            lastRect.setBottomRight(e->pos());//不是拖拽时，更新矩形的右下角坐标)
        }
    }
}
//画不规则线
void MainWindow::drawLines()
{
    shapeType=1;
    edit->hide();
}
//矩形
void MainWindow::drawRect()
{
    shapeType=2;
    edit->hide();
}






//析构
MainWindow::~MainWindow()
{
    delete ui;
}



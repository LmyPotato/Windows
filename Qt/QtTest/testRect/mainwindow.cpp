#include "mainwindow.h"
#include <QDebug>
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
     //ui->setupUi(this);
     _drawType = 0;//初始为什么都不画
     _tEdit = new QTextEdit(this);//初始化文本输入框
     _tEdit->hide();//隐藏
     this->setGeometry(350,200,600,400);//设置窗体大小、位置
     setMouseTracking(true);//开启鼠标实时追踪，监听鼠标移动事件，默认只有按下时才监听

    //创建工具栏
    QToolBar *tbar = addToolBar(tr("工具栏"));

    QAction *lineAction = new QAction(tr("&直线"), this);//直线动作
    lineAction->setIcon(QIcon(":/Image/line.png"));//图标
    tbar->addAction(lineAction);//添加到工具栏

    QAction *linesAction = new QAction(tr("&铅笔"), this);//铅笔动作
    linesAction->setIcon(QIcon("://Image/pen.png"));//图标
    tbar->addAction(linesAction);//添加到工具栏

    QAction *rectAction = new QAction(tr("&矩形"), this);//矩形动作
    rectAction->setIcon(QIcon(":/Image/rect.png"));//图标
    tbar->addAction(rectAction);

    //连接信号与槽函数
    connect(linesAction, SIGNAL(triggered()), this, SLOT(Lines()));
    connect(rectAction, SIGNAL(triggered()), this, SLOT(Rects()));
    connect(lineAction, SIGNAL(triggered()), this, SLOT(Line()));
}

void MainWindow::paintEvent(QPaintEvent *)
{
    _pixmap = QPixmap(size());//新建pixmap
    _pixmap.fill(Qt::white);//背景色填充为白色

    QPixmap pix = _pixmap;//以_pixmap作为画布
    QPainter p(&pix);//将_pixmap作为画布
    unsigned int i1=0,i2=0,i4=0;//各种图形的索引

    for(int c = 0;c<_shape.size();++c)//控制用户当前所绘图形总数
    {
        if(_shape.at(c) == 1)//线条
        {
              const QVector<QPoint>& line = _lines.at(i1++);//取出一条线条
              for(int j=0; j<line.size()-1; ++j)//将线条的所有线段描绘出
              {
                  p.drawLine(line.at(j), line.at(j+1));
              }
        }
        else if(_shape.at(c) == 2)//矩形
        {
             p.drawRect(_rects.at(i2++));
        }
        else if(_shape.at(c) == 4)//直线
        {
            p.drawLine(_line.at(i4).topLeft(),_line.at(i4).bottomRight());
            i4++;
        }
    }
    p.end();
    p.begin(this);//将当前窗体作为画布
    p.drawPixmap(0,0, pix);//将pixmap画到窗体
}

void MainWindow::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)//当鼠标左键按下
    {
        if(_drawType == 1)//线条(铅笔)
        {
            QVector<QPoint> line;//鼠标按下，新的线条开始
            _lines.append(line);//将新线条添加到线条集合
            QVector<QPoint>& lastLine = _lines.last();//拿到新线条
            lastLine.append(e->pos());//记录鼠标的坐标(新线条的开始坐标)
            _shape.append(1);
        }
        else if(_drawType == 2)//矩形
        {
            QRect rect;//鼠标按下，矩形开始
            _rects.append(rect);//将新矩形添加到矩形集合
            QRect& lastRect = _rects.last();//拿到新矩形
            lastRect.setTopLeft(e->pos());//记录鼠标的坐标(新矩形的左上角坐标)
            _shape.append(2);

        }
        else if(_drawType == 4)//直线
        {
            QRect rect;//鼠标按下，直线一端开始
            _line.append(rect);//将新直线添加到直线集合
            QRect& lastLine = _line.last();//拿到新直线
            lastLine.setTopLeft(e->pos());//记录鼠标的坐标(新直线开始一端坐标)
            _shape.append(4);
        }
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *e)
{
    setCursor(Qt::ArrowCursor);//恢复原始光标形状

    if(e->buttons()&Qt::LeftButton)
    {
        if(_drawType == 1)//铅笔画线
        {
            if(_lines.size()<=0) return;//线条集合为空，不画线
            QVector<QPoint>& lastLine = _lines.last();//最后添加的线条，就是最新画的
            lastLine.append(e->pos());//记录鼠标的坐标(线条的轨迹)
            update();//触发窗体重绘
        }
        else if(_drawType == 2)
        {

            QRect& lastRect = _rects.last();//拿到新矩形
            lastRect.setBottomRight(e->pos());//更新矩形的右下角坐标
            update();//触发窗体重绘
        }
        else if(_drawType == 4)
        {
            QRect& lastLine = _line.last();//拿到新直线
            lastLine.setBottomRight(e->pos());//更新直线另一端)
            update();//触发窗体重绘
        }
    }
}

void MainWindow::mouseReleaseEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
    {
        if(_drawType == 1)
        {
            QVector<QPoint>& lastLine = _lines.last();//最后添加的线条，就是最新画的
            lastLine.append(e->pos());//记录线条的结束坐标
        }
        else if(_drawType == 2)
        {
            QRect& lastRect = _rects.last();//拿到新矩形
            lastRect.setBottomRight(e->pos());//不是拖拽时，更新矩形的右下角坐标)
        }
        else if(_drawType == 4)
        {
            QRect& lastLine = _line.last();//拿到新矩形
            lastLine.setBottomRight(e->pos());//更新矩形的右下角坐标)
        }
    }
}

void MainWindow::Lines()
{
    _drawType = 1;//铅笔
    _tEdit->hide();//文本框隐藏
}

void MainWindow::Line()
{
    _drawType = 4;//直线
    _tEdit->hide();
}

void MainWindow::Rects()
{
    _drawType = 2;//矩形
    _tEdit->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    resize(880,800);
    setFixedSize(880,810);
    setWindowIcon(QIcon(":/Image/Luffy.png"));

    toolBtnInit();

    pix=QPixmap(800,800);
    pix.fill(Qt::white);

    this->setMouseTracking(1);
    isDown=0;
    isClear=0;
    color=Qt::blue;

    ui->comboBoxWidth->setCurrentText("1");

}
//-------------------------------工具栏初始化-------------------------------
void MainWindow::toolBtnInit()
{
//父亲工具
    toolBar=addToolBar(tr("工具栏"));

//保存
    QAction *saveBtn=new QAction(QIcon(":/Image/save.png"),tr("保存"),this);
    toolBar->addAction(saveBtn);
//颜色
    QAction *colorBtn=new QAction(QIcon(":/Image/color.png"),tr("颜色"),this);
    toolBar->addAction(colorBtn);
//铅笔
    QAction *penBtn=new QAction(QIcon(":/Image/pen.png"),tr("铅笔"),this);
    toolBar->addAction(penBtn);
//直线
    QAction *lineBtn=new QAction(QIcon(":/Image/line.png"),tr("直线"),this);
    toolBar->addAction(lineBtn);
//正方形
    QAction *rectBtn=new QAction(QIcon(":/Image/rect.png"),tr("正方形"),this);
    toolBar->addAction(rectBtn);
//圆
    QAction *circleBtn=new QAction(QIcon(":/Image/circle.png"),tr("圆"),this);
    toolBar->addAction(circleBtn);
//帮助
    QAction *helpBtn=new QAction(QIcon(":/Image/help.png"),tr("帮助"),this);
    toolBar->addAction(helpBtn);
//清除
    QAction *clearBtn=new QAction(QIcon(":/Image/clear.png"),tr("清除画布"),this);
    toolBar->addAction(clearBtn);
//像皮 rubber.png
    QAction *rubberBtn=new QAction(QIcon(":/Image/rubber.png"),tr("像皮"),this);
    toolBar->addAction(rubberBtn);

//specialRect
    QAction *specialRectBtn=new QAction(QIcon(":/Image/rectTree.png"),tr("特殊矩形"),this);
    toolBar->addAction(specialRectBtn);
//
//    QAction *womanBtn=new QAction(QIcon(":/Image/woman.png"),tr(" 你猜一猜这是啥"),this);
//    toolBar->addAction(womanBtn);

//连接
    connect(lineBtn,SIGNAL(triggered(bool)),this,SLOT(drawLine()));
    connect(penBtn,SIGNAL(triggered(bool)),this,SLOT(drawLines()));
    connect(rectBtn,SIGNAL(triggered(bool)),this,SLOT(drawRect()));
    connect(circleBtn,SIGNAL(triggered(bool)),this,SLOT(drawCircle()));
    connect(colorBtn,SIGNAL(triggered(bool)),this,SLOT(setColor()));
    connect(clearBtn,SIGNAL(triggered(bool)),this,SLOT(clear()));
    connect(rubberBtn,SIGNAL(triggered(bool)),this,SLOT(rubber()));
    connect(saveBtn,SIGNAL(triggered(bool)),this,SLOT(save()));
    connect(helpBtn,SIGNAL(triggered(bool)),this,SLOT(about()));
    connect(specialRectBtn,SIGNAL(triggered(bool)),this,SLOT(setSpecialRect()));
//    connect(womanBtn,SIGNAL(triggered(bool)),this,SLOT(playMusic()));
}
//重写绘图事件
void MainWindow::paintEvent(QPaintEvent *event)
{
    QPen pen;

    pen.setColor(color);
    pen.setWidth(ui->comboBoxWidth->currentText().toFloat());
    pen.setStyle(Qt::SolidLine);

    QPainter painter(&pix);
    painter.setPen(pen);

    //线
    if(shape==1)
    {
        painter.drawLine(begin,move);
        begin=move;
    }
    //直线
    else if(shape==2)
    {
        if(move.y()>begin.y()-25&&move.y()<begin.y()+25)
        {
            painter.drawLine(begin.x(),begin.y(),move.x(),begin.y());
        }
        else
        {
            painter.drawLine(begin.x(),begin.y(),begin.x(),move.y());
        }
    }
    //矩形
    else if(shape==3)
    {
        if(isDown==0)
        {
            painter.drawRect(begin.x(),begin.y(),move.x()-begin.x(),move.y()-begin.y());
        }
    }
    //椭圆
    else if(shape==4)
    {
        if(isDown==0)
        {
            painter.drawEllipse(begin.x(),begin.y(),move.x()-begin.x(),move.y()-begin.y());
        }
    }
    //清空
    else if(shape==5)
    {
        painter.fillRect(0,0,this->width(),this->height(),Qt::white);
    }
    //橡皮
    else if(shape==6)
    {
        painter.fillRect(move.x(),move.y(),30,30,Qt::white);
    }
    else if(shape==0)
    {
        painter.drawRect(begin.x(),begin.y(),move.x(),move.y());
        begin=move;
    }
    //设置光标的形状
    changeCursor();

//方法一
//    painter.end();
//    painter.begin(this);
//    painter.drawPixmap(0,0,pix);
//方法二
    QPainter P(this);
    P.drawPixmap(0,0,pix);
}
//-------------------------------鼠标移动-------------------------------
void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons()&Qt::LeftButton)
    {
        move=event->pos();
        update();
    }

}
//-------------------------------鼠标按下------------------------------
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        begin=event->pos();
        isDown=1;
//        update();
    }
}
//-------------------------------鼠标释放-------------------------------
void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    {
        end=event->pos();
        isDown=0;
        update();
    }
}
//-------------------------------设置光标的形状-------------------------------
void MainWindow::changeCursor()
{
    if(isDown==1)
    {
        //线
        if(shape==1)
        {
            iconPix.load(":/Image/pen.png");
            iconPix=iconPix.scaled(iconPix.width()*0.1,iconPix.height()*0.1);
            setCursor(iconPix);
        }
        //直线
        else if(shape==2)
        {
            iconPix.load(":/Image/line.png");
            iconPix=iconPix.scaled(iconPix.width()*0.1,iconPix.height()*0.1);
            setCursor(iconPix);
        }
        //矩形
        else if(shape==3)
        {
            iconPix.load(":/Image/rect.png");
            iconPix=iconPix.scaled(iconPix.width()*0.1,iconPix.height()*0.1);
            setCursor(iconPix);
        }
        //椭圆
        else if(shape==4)
        {
            iconPix.load(":/Image/circle.png");
            iconPix=iconPix.scaled(iconPix.width()*0.1,iconPix.height()*0.1);
            setCursor(iconPix);
        }
        //清空
        else if(shape==5)
        {
            iconPix.load(":/Image/clear.png");
            iconPix=iconPix.scaled(iconPix.width()*0.1,iconPix.height()*0.1);
            setCursor(iconPix);
        }
        //橡皮
        else if(shape==6)
        {
            iconPix.load(":/Image/rubber.png");
            iconPix=iconPix.scaled(iconPix.width()*0.1,iconPix.height()*0.1);
            setCursor(iconPix);
        }
    }
    else
    {
        setCursor(Qt::ArrowCursor);
    }
}
//-------------------------------保存文件-------------------------------
void MainWindow::save()
{
    QString fileName=QFileDialog::getSaveFileName(this,tr("保存"),"new.jpg","Image(*.jpg *.png *.bmp)");

    bool ret=pix.save(fileName);

    if(ret==1)
    {
        QMessageBox::information(this,"保存文件","保存成功");
    }
    else
    {
        QMessageBox::warning(this,"保存文件","保存失败");
        return;
    }
}
//-------------------------------析构函数-------------------------------
MainWindow::~MainWindow()
{
    delete ui;
}
//线
void MainWindow::drawLines()
{
    shape=1;

}
//直线
void MainWindow::drawLine()
{
    shape=2;

}
//矩形
void MainWindow::drawRect()
{
    shape=3;

}
//椭圆
void MainWindow::drawCircle()
{
    shape=4;
}

void MainWindow::setColor()
{
    color=QColorDialog::getColor(color,this);
}

void MainWindow::clear()
{
    shape=5;
}

void MainWindow::rubber()
{
    shape=6;
}

//关于
void MainWindow::about()
{
    QMessageBox::about(this,"关于","软件用于自娱自乐(很多bug)\n"
                                 "1.鼠标悬停在图标会显示作用\n"
                                 "2.大致功能有:保存、画笔、直线\矩形、椭圆\n"
                                 "3.刷子:点一下再点一下屏幕、画布清空\n"
                                 "4.橡皮:点一下图标、移动到画布、长按鼠标左键可以擦除\n"
                                 "--------杏林洁白\n"
                                 "致谢:小冯同学^_^\n");
}

void MainWindow::setSpecialRect()
{
    shape=0;
}





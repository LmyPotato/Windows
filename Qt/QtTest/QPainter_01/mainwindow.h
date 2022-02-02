
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
//----------工具----------
#include <QMenuBar>
#include <QToolBar>
#include <QAction>

//----------调试----------
#include <QDebug>
#include <QMessageBox>
#include <QList>
#include <QFileDialog>
//----------事件----------
#include <QMouseEvent>
#include <QKeyEvent>

//----------绘图----------
#include <QPainter>
#include <QPixmap>
#include <QPen>
#include <QColor>
#include <QColorDialog>
#include <QVector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    //工具栏初始化
    void toolBtnInit();
    //重写事件
    void paintEvent(QPaintEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);

    //设置光标的形状
    void changeCursor();

    ~MainWindow();
public slots:
    void drawLine();
    void drawLines();
    void drawRect();
    void drawCircle();
    void setColor();
    void clear();
    void rubber();
    void save();
    void about();
    void setSpecialRect();

private:
    //
    QToolBar *toolBar;
    QPixmap pix;
    QPixmap iconPix;
    QColor color;

    //形状
//    QVector<int>shape;
    int shape;

    //位置-起-始-移动
    QPoint begin;
    QPoint end;
    QPoint move;

    bool isDown;
    bool isMove;
    bool isClear;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QPainter>
#include <QVector>
#include <QPoint>
#include <QToolBar>
#include <QAction>
#include <QColor>
#include <QMenu>
#include <QTextEdit>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Ui::MainWindow *ui;
protected:
    void paintEvent(QPaintEvent *);//重写窗体重绘事件
    void mousePressEvent(QMouseEvent *);//重写鼠标按下事件
    void mouseReleaseEvent(QMouseEvent *);//重写鼠标释放事件
    void mouseMoveEvent(QMouseEvent *);//重写鼠标移动事件

private:
    int _drawType;//描绘类型
    QPixmap _pixmap;//画布图片
    QTextEdit *_tEdit;//文本输入框
public:
    QVector<QVector<QPoint> > _lines;//线条集合(一条线条可包含多个线段)
    QVector<QRect> _rects;//矩形集合
    QVector<QRect>  _line;//直线集合
    QVector<int>  _shape;//图形类型集合，用于撤回功能
signals:

public slots:
    void Lines();//铅笔画线
    void Rects();//画矩形
    void Line();//画直线
};

#endif // MAINWINDOW_H

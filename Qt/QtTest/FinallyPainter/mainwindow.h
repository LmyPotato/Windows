#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QPainter>
#include <QDebug>
#include <QToolBar>
#include <QTextEdit>
#include <QPixmap>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

private:
    QToolBar *toolBar;
    QTextEdit *edit;
    QPixmap pixmap;

    QVector<QRect>rects;
    QVector<QRect>line;

    QPoint begin;
    QPoint move;

    int shapeType;
    QVector<int> shape;

public slots:
    void drawLines();
    void drawRect();



private:

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

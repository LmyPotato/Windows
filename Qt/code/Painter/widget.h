#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>
#include <QDebug>
#include <QPixmap>
#include <QMouseEvent>
#include <QPen>
#include <QColor>
#include <QColorDialog>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void paintEvent(QPaintEvent *);
    void mouseReleaseEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);

public slots:

    void setColor();
    void clear();

private:
    Ui::Widget *ui;
    QPixmap pix;
    QPoint lastPoint;
    QPoint endPoint;
    QColor color;

};

#endif // WIDGET_H

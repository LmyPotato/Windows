#ifndef PAINTAREA_H
#define PAINTAREA_H

#include <QWidget>
#include <QPen>
#include <QBrush>

class Paintarea : public QWidget
{
    Q_OBJECT
public:
    enum Shape{Line,Rectangle,RoundRect,Ellipse,Polygon,Polyline,Points,Arc,Path,Text,Pixmap};
    explicit Paintarea(QWidget *parent = nullptr);
    void setShape(Shape);
    void setPen(QPen);
    void setBrush(QBrush);
    void setFillRule(Qt::FillRule);
    void paintEvent(QPainter *);

signals:

public slots:
private:
    Shape shape;
    QPen pen;
    QBrush brush;
    Qt::FillRule fillRule;
};

#endif // PAINTAREA_H

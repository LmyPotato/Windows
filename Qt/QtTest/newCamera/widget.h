#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QCamera>
#include <QCameraImageCapture>
#include <QCameraInfo>
#include <QCameraViewfinder>
#include <QPixmap>
#include <QFileDialog>
#include <QMouseEvent>
#include <QLineEdit>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

    QList<QCameraInfo> cameraInfo;
    QCamera *camera;
    QCameraViewfinder *viewfinder;
    QCameraImageCapture *imageCapture;
    void mousePressEvent(QMouseEvent *e);

private:
    Ui::Widget *ui;
    QString fileName;

public slots:
//    void fileSave(int id,const QString file);
    void photograph();
    void showPiture(int id,QImage image);
    void save();

};

#endif // WIDGET_H

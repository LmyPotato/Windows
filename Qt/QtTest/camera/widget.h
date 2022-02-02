#ifndef WIDGET_H

#define WIDGET_H

#include <QWidget>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QCameraInfo>
#include <QCameraImageCapture>

namespace Ui {

class Widget;
}

class Widget : public QWidget
{

    Q_OBJECT

public:

    explicit Widget(QWidget *parent = 0);

    ~Widget();

    QCamera * camera;

    QCameraViewfinder * view_finder; //取景器

    QList<QCameraInfo> cameras;  //存放系统支持的摄像头列表

    QCameraImageCapture* camera_image_capture;

private slots:

    void save_picture(int id,const QString file);

    void show_picture(int,const QImage);//显示拍照图片的槽函数

    void on_pushButton_clicked();

private:

    Ui::Widget *ui;

};

#endif // WIDGET_H

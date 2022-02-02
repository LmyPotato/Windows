//#include "widget.h"
//#include "ui_widget.h"

//Widget::Widget(QWidget *parent) :
//    QWidget(parent),
//    ui(new Ui::Widget)
//{
//    ui->setupUi(this);

////    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
////     foreach (const QCameraInfo &cameraInfo, cameras)
////         qDebug() << cameraInfo.deviceName();
////    QCamera myCamera;
////    QCameraInfo cameraInfo(myCamera);
////    if (cameraInfo.position() == QCamera::FrontFace)
////      qDebug() << "相机位于硬件系统的正面。";
////    else if (cameraInfo.position() == QCamera::BackFace)
////      qDebug() << "相机位于硬件系统的背面。";

////    qDebug() << "相机传感器的方向是" << cameraInfo.orientation() << "度";

////    QList<QCameraInfo> cameras = QCameraInfo::availableCameras();
////    if(cameras.count())
////    {
////        for(int i=0;i<cameras.count();i++)
////        {
////            qDebug()<<"设备唯一ID:"<<cameras.at(i).deviceName();
////            qDebug()<<"设备方向:"<<cameras.at(i).orientation();
////        }
////    }
////    else
////    {
////        qDebug()<<"系统没有可用相机!";
////    }



//    /*1. 获取系统默认的摄像头，创建摄像头对象*/
//    QCamera *camera = new QCamera(QCameraInfo::defaultCamera());
//    /*2. 创建取景器*/
//    QCameraViewfinder *view_finder = new QCameraViewfinder();
//    /*3. 将显示的位置加入到自己布局的窗口中*/
//    ui->verticalLayout->addWidget(view_finder);

//    /*4. 配置摄像头的模式--只是取景显示*/
//    camera->setCaptureMode(QCamera::CaptureViewfinder);

//    /*5. 设置取景器显示*/
//    camera->setViewfinder(view_finder);
//   /*6. 启动摄像头*/
//      camera->start();
//}

//Widget::~Widget()
//{
//    delete ui;
//}




#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->lineEdit_ShowFileAddr->setText("C://Users//86151//Desktop//test");
    cameras = QCameraInfo::availableCameras();
    if(cameras.count())
    {
        for(int i=0;i<cameras.count();i++)
        {
            qDebug()<<"设备唯一ID:"<<cameras.at(i).deviceName();
            qDebug()<<"设备方向:"<<cameras.at(i).orientation();
        }
    }
    else
    {
        qDebug()<<"系统没有可用相机!";
    }
    /*创建摄像头对象，根据选择的摄像头打开*/
    camera = new QCamera(cameras.at(0));
    /*构造捕获的对象*/
    camera_image_capture = new QCameraImageCapture(camera);
    /*关联信号槽--显示图片*/
    connect(camera_image_capture,SIGNAL(imageCaptured(int,QImage)),this,SLOT(show_picture(int,QImage)));
    /*关联信号槽--返回保存照片的文件名称*/
    connect(camera_image_capture,SIGNAL(imageSaved(int,const QString)),this,SLOT(save_picture(int,const QString)));
    //信号槽函数关联方式2
    //connect(camera_image_capture,&QCameraImageCapture::imageCaptured,this,&MainWindow_camera::show_picture);
    /*设置捕获的目的地---到文件*/
    camera_image_capture->setCaptureDestination(QCameraImageCapture::CaptureToFile);
    /*创建取景器*/
    view_finder = new QCameraViewfinder();
    /*将显示的位置加入到窗口中*/
    //ui->verticalLayout->addWidget(view_finder);
    ui->horizontalLayout_2->insertWidget(0,view_finder); //插入到第一个位置
    /*配置摄像头捕获模式为帧捕获模式*/
    camera->setCaptureMode(QCamera::CaptureStillImage);
    /*设置取景器显示*/
    camera->setViewfinder(view_finder);
    /*启动摄像头*/
    camera->start();

}
Widget::~Widget()
{
    delete ui;
}
/*返回图片保存的文件名称*/
void Widget::save_picture(int id,const QString file)
{
    qDebug()<<"保存的图片的编号:"<<id;
    qDebug()<<"图片保存的路径:"<<file;
    ui->lineEdit_ShowFileAddr->setText(file); //显示照片的路径
}
/*在标签控件上显示拍照的图片*/
void Widget::show_picture(int id, const QImage image)
{
   qDebug()<<"捕获的图片编号:"<<id;
   /*
    * 显示捕获的照片
    * 可将image显示到指定控件上
  */

 ui->label_ShowImage->setPixmap(QPixmap::fromImage(image).scaled(image.width()/2,image.height()/2));
//   ui->label_ShowImage->setPixmap(QPixmap::fromImage(image));
}

//void Widget::on_pushButton_GetImage_clicked()
//{
//        /*
//         * 触发imageCaptured和imageSaved信号
//         * 如果capture()不填写文件名系统会自动选择默认的路径
//         * */
//        camera_image_capture->capture();

//}

void Widget::on_pushButton_clicked()
{

//    camera_image_capture->capture(ui->lineEdit_ShowFileAddr->text());
    camera_image_capture->capture("C://Users//86151//Desktop//test");
}

#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    fileName="C://Users//86151//Desktop//test";
    ui->lineEditFile->setText(fileName);
    ui->clickBtn->setShortcut(Qt::Key_Space);
    ui->lineEditFile->setFocusPolicy(Qt::NoFocus);

    cameraInfo= QCameraInfo::availableCameras();
    for(int i=0;i<cameraInfo.count();i++)
    {
//        qDebug()<<cameraInfo.at(i);

        ui->comboBox->addItem(cameraInfo.at(i).deviceName());
    }
    QByteArray array=ui->comboBox->currentText().toLatin1();

    camera = new QCamera(array);

    viewfinder = new QCameraViewfinder();
    ui->verticalLayout->addWidget(viewfinder);
    camera->setViewfinder(viewfinder);

    imageCapture = new QCameraImageCapture(camera);
    imageCapture->setCaptureDestination(QCameraImageCapture::CaptureToFile);

    camera->setCaptureMode(QCamera::CaptureStillImage);
    camera->start();

    connect(imageCapture,SIGNAL(imageCaptured(int,QImage)),this,SLOT(showPiture(int,QImage)));
//    connect(imageCapture,SIGNAL(imageSaved(int,QString)),this,SLOT(fileSave(int,const QString)));
    connect(ui->saveBtn,SIGNAL(clicked(bool)),this,SLOT(save()));
    connect(ui->clickBtn,SIGNAL(clicked(bool)),this,SLOT(photograph()));
}

Widget::~Widget()
{
    delete ui;
    delete camera;
    delete viewfinder;
    delete imageCapture;
}

void Widget::mousePressEvent(QMouseEvent *e)
{

    if(e->button()==Qt::LeftButton)
    {
        ui->lineEditFile->setFocus();
//        qDebug()<<"进入";
    }
}

//void Widget::fileSave(int id, const QString file)
//{
////    ui->lineEditFile->setText(file);
//}
void Widget::photograph()
{
    imageCapture->capture(fileName);

}

void Widget::showPiture(int id, QImage image)
{
    qDebug()<<id;
    ui->pitureLabel->setPixmap(QPixmap::fromImage(image).scaled(image.width()*0.3,image.height()*0.3));
    ui->lineEditFile->setText(fileName);
}

void Widget::save()
{
//    QString dir=QFileDialog::getExistingDirectory(this,"选择目录","C:/",
//    QFileDialog::ShowDirsOnly| QFileDialog::DontResolveSymlinks);
    fileName=QFileDialog::getExistingDirectory(this,"选择目录");
    ui->lineEditFile->setText(fileName);
}

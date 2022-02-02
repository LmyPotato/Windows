#include "serial.h"
#include "ui_serial.h"
#include <QSerialPortInfo>
#include <QTimer>

Serial::Serial(QWidget *parent) : QMainWindow(parent),
    ui(new Ui::Serial)
{
    ui->setupUi(this);
    setFixedSize(350,400);
    setWindowIcon(QIcon(":/res/face.png"));

    //user
    system_init();
//    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
//    {
//        QSerialPort serial;
//        serial.setPort(info);
////        qDebug()<<serial.portName();
////        qDebug()<<serial.baudRate();
//        ui->comboBox->addItem(serial.portName()+(QString(":%1").arg(serial.baudRate())));
//    }
}

Serial::~Serial()
{
    delete ui;
}
/*-------------------------------
 * funtion
 * ------------------------------*/
void Serial::system_init()
{
    //port config
    global_port.setParity(QSerialPort::NoParity);
    global_port.setDataBits(QSerialPort::Data8);
    global_port.setStopBits(QSerialPort::OneStop);

    //connect
    connect(ui->btn_open,&QPushButton::clicked,this,&Serial::btn_open_port);
    connect(ui->btn_send,&QPushButton::clicked,this,&Serial::btn_send_data);
//  connect(&global_port,&SIGNAL(readyRead()),this,&receive_data)
    connect(&global_port,&QSerialPort::readyRead,this,&receive_data);
    connect(ui->btn_close,&QPushButton::clicked,this,&Serial::btn_close_port);
    connect(ui->btn_clear,&QPushButton::clicked,this,&Serial::btn_clear_data);
    connect(ui->testBtn,&QPushButton::clicked,this,&Serial::btn_test);

    //show Port And Baudrate
    ui->comboBox->setFixedWidth(85);
    QTimer *time=new QTimer(this);//new 一个对象
    time->start(500);//500 ms  start timer 定时500毫秒
    connect(time,&QTimer::timeout,[=](){//500ms到后的操作（信号槽）
        this->Show();
    });
}

/*-------------------------------
 * slots
 * ------------------------------*/
void Serial::btn_open_port(bool)
{
    /*---------portName---------------*/
//    qDebug()<<"点击了ok";
//    int i=10;
//    qDebug("%d",i);
//    qDebug()<<ui->cmb_port_name->currentIndex();//printf 0

    switch (ui->cmb_port_name->currentIndex()) {
    case 0:
        global_port.setPortName("COM1");
        break;
    case 1:
        global_port.setPortName("COM2");
        break;
    case 2:
        global_port.setPortName("COM3");
        break;
    case 3:
        global_port.setPortName("COM4");
        break;
    case 4:
        global_port.setPortName("COM5");
        break;
    case 5:
        global_port.setPortName("COM6");
        break;
    case 6:
        global_port.setPortName("COM7");
        break; 
    case 7:
        global_port.setPortName("COM8");
        break;
    case 8:
        global_port.setPortName("COM9");
        break;
    default:
        global_port.setPortName("COM10");
        break;
    }
    /*-----------baudRate-------------*/
    switch (ui->cmb_baud_rate->currentIndex()) {
    case 0:
        global_port.setBaudRate(QSerialPort::Baud115200);
        break;
    case 1:
        global_port.setBaudRate(QSerialPort::Baud57600);
        break;
    case 2:
        global_port.setBaudRate(QSerialPort::Baud38400);
        break;
    case 3:
        global_port.setBaudRate(QSerialPort::Baud19200);
        break;
    case 4:
        global_port.setBaudRate(QSerialPort::Baud9600);
        break;
    case 5:
        global_port.setBaudRate(QSerialPort::Baud4800);
        break;
    case 6:
        global_port.setBaudRate(QSerialPort::Baud2400);
        break;
    default:
        global_port.setBaudRate(QSerialPort::Baud1200);
        break;
    }
    //open
    this->openRet=global_port.open(QIODevice::ReadWrite);
    if(openRet==0)
    {
        ui->labelInfo->setStyleSheet("color:red");
        ui->labelInfo->setText("打开串口失败");
    }
    else
    {
        ui->labelInfo->setText("");
    }

    ui->lab_status->setText("连接成功");
    QPixmap pix;
    pix.load(":/res/ok.png");
    pix=pix.scaled(pix.width()*0.9,pix.height()*0.9);
    ui->lab_status->setPixmap(pix);

//    test
//    global_port.write("1");
}
/*-----------close-----------------*/
void Serial::btn_close_port(bool)
{
    ui->labelInfo->setText("");
    ui->lab_status->setText("连接失败");
    global_port.close();
}

/*-----------sendData-----------------*/
void Serial::btn_send_data(bool)
{
    QString data=ui->line_send_data->text();
    QByteArray array=data.toLatin1();//QString->QByteArray
    global_port.write(array);
}

/*------------receiveData----------------*/
void Serial::receive_data()
{
    QByteArray array= global_port.readAll();
//    qDebug()<<array;
//    ui->plainTextEdit->insertPlainText();
    if(ui->checkBox->checkState()==Qt::Checked)
    {
//        qDebug()<<array.toHex(' ').toUpper();
        ui->plainTextEdit->insertPlainText(QString(array.toHex(' ').toUpper().append(' ')));
    }
    else
    {
//        qDebug()<<array;
        ui->plainTextEdit->insertPlainText(QString(array));
        ui->plainTextEdit->insertPlainText(" ");
    }
}
/*------------showPortBaudrate----------------*/
void Serial::Show()
{
    //clear last show
    ui->comboBox->clear();
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort serial;
        serial.setPort(info);
        ui->comboBox->addItem(serial.portName()+(QString(":%1").arg(serial.baudRate())));
    }
}
/*------------clearData----------------*/
void Serial::btn_clear_data(bool)
{
    ui->plainTextEdit->clear();
}

void Serial::btn_test()
{
//    /*保存了串口信息*/
//       QSerialPortInfo *my_UsartInfo = new QSerialPortInfo;
//       /*构造一个列表类*/
//       QList<qint32> my_list;
//       /*获取串口支持的波特率*/
//       my_list=my_UsartInfo->standardBaudRates();
//       /*打印出支持的波特率*/
//       for(int i=0;i<my_list.count();i++)
//       {
//           //取出列表中指定的值
//           qDebug()<<my_list.at(i);
//       }

         /*构造一个列表*/
//         QList<QSerialPortInfo> usart_device_list;
//         /*获取系统支持的串口端口*/
//         usart_device_list=my_UsartInfo->availablePorts();
//         /*判断列表是否为空*/
//         if(usart_device_list.isEmpty())
//         {
//             qDebug()<<"列表为空！";
//             return;
//         }
//         /*打印出支持的串口名称*/
//         for(int i=0;i<usart_device_list.count();i++)
//         {
//             qDebug()<<"串口名称："<<usart_device_list.at(i).portName();
//         }


}

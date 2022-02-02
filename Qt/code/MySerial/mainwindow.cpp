#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    systemInt();

}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::systemInt()
{
//------------------setStyle------------------

    setWindowTitle("V1.0");
//    setFixedSize(500,410);
    setWindowIcon(QIcon(":/Image/Luffy.png"));
    ui->lineEditSend->setText("---杏林洁白");
    ui->sendUart1->setText("AT+UART?");
    ui->sendUart2->setText("AT+NAME?");
    ui->closeBtn->setEnabled(0);
    //连接网址
    connect(ui->commandLinkButton,&QCommandLinkButton::clicked,[=](){
        QDesktopServices::openUrl(QUrl("http://www.baidu.com/"));
    });
    connect(ui->commandLinkButtonCSDN,&QCommandLinkButton::clicked,[=](){
//        QDesktopServices::openUrl(QUrl("https://www.csdn.net/"));
        QDesktopServices::openUrl(QUrl("https://blog.csdn.net/qq_45774073?spm=1000.2115.3001.5343"));
    });
    //设置快捷键
    ui->sendBtn->setShortcut(Qt::Key_Return);
//    ui->sendBtn->setShortcut(tr("Ctrl+Enter"));

//------------------setInit------------------

    port.setBaudRate(QSerialPort::Baud9600);
    port.setStopBits(QSerialPort::OneStop);
    port.setDataBits(QSerialPort::Data8);
    port.setParity(QSerialPort::NoParity);

    ui->comboBoxBaudRate->setCurrentText("9600");

//------------------connect------------------
//    connect(ui->aboutBtn,&QPushButton::clicked,[=](){
//           this->showAbout();
//    });
    connect(ui->aboutBtn,&QPushButton::clicked,this,&MainWindow::showAbout);
    //openPort
    connect(ui->openBtn,&QPushButton::clicked,this,&MainWindow::openPort);
    //closePort
    connect(ui->closeBtn,&QPushButton::clicked,this,&MainWindow::closePort);
    //recevie
       connect(&port,&QSerialPort::readyRead,this,&receiveData);
//send
//       if(openRet)
//       {
           connect(ui->sendBtn,&QPushButton::clicked,this,&MainWindow::sendData);
//       }
//clear recive
       connect(ui->clearReciveBtn,&QPushButton::clicked,this,&MainWindow::clearRecive);
//clear send
       connect(ui->clearSendBtn,&QPushButton::clicked,this,&MainWindow::clearSend);
//show time
       connect(ui->showTimeBtn,&QPushButton::clicked,this,&MainWindow::showTime);

//设置定时器 刷新 显示可用的串口和波特率
       QTimer *time=new QTimer(this);
       time->start(150);
       connect(time,&QTimer::timeout,this,&MainWindow::showPortBaudrate);
}
//------------------显示关于------------------
void MainWindow::showAbout()
{
    QMessageBox::about(this,"关于","软件用于串口调试,\n"
                                 "支持基本数据收发，\n\n"
                                 "--------杏林洁白\n"
                                  "致谢:小冯同学^_^\n");
}
//------------------openPort------------------
void MainWindow::openPort()
{
//    qDebug()<<ui->comboBoxPort->currentIndex();
//port select
    switch (ui->comboBoxPort->currentIndex()) {
    case 1:
        port.setPortName("COM1");
        break;
    case 2:
        port.setPortName("COM2");
        break;
    case 3:
        port.setPortName("COM3");
        break;
    case 4:
        port.setPortName("COM4");
        break;
    case 5:
        port.setPortName("COM5");
        break;
    case 6:
        port.setPortName("COM6");
        break;
    case 7:
        port.setPortName("COM7");
        break;
    case 8:
        port.setPortName("COM8");
        break;
    case 9:
        port.setPortName("COM9");
        break;
    case 10:
        port.setPortName("COM10");
        break;
    case 11:
        port.setPortName("COM11");
        break;
    case 12:
        port.setPortName("COM12");
        break;
    case 13:
        port.setPortName("COM13");
        break;
    case 14:
        port.setPortName("COM14");
        break;
    default:
        port.setPortName("None");
        break;
    }
//baudRate select
    /*out put 0 1 2 ....*/
//    qDebug()<<ui->comboBoxBaudRate->currentIndex();
    /*out put "9600" "4800"....*/
//    qDebug()<<ui->comboBoxBaudRate->currentText();
    switch (ui->comboBoxBaudRate->currentIndex()) {
    //        baudrate.setBaudRate(115200);
    case 0:
        port.setBaudRate(QSerialPort::Baud115200);
        break;
    case 1:
        port.setBaudRate(QSerialPort::Baud57600);
        break;
    case 2:
        port.setBaudRate(QSerialPort::Baud38400);
        break;
    case 3:
        port.setBaudRate(QSerialPort::Baud19200);
        break;
    case 4:
        port.setBaudRate(QSerialPort::Baud9600);
        break;
    case 5:
        port.setBaudRate(QSerialPort::Baud4800);
        break;
    case 6:
        port.setBaudRate(QSerialPort::Baud2400);
        break;
    case 7:
        port.setBaudRate(QSerialPort::Baud1200);
        break;
    default:
        port.setBaudRate(QSerialPort::Baud9600);
        break;
    }
//stopBits
//    qDebug()<<ui->comboBoxStopBits->currentText();
    switch (ui->comboBoxStopBits->currentIndex()) {
    case 0:
        port.setStopBits(QSerialPort::OneStop);
        break;
    case 1:
        port.setStopBits(QSerialPort::OneAndHalfStop);
        break;
    case 2:
        port.setStopBits(QSerialPort::TwoStop);
        break;
    default:
        port.setStopBits(QSerialPort::OneStop);
        break;
    }
//dataBits
    switch (ui->comboBoxDataBits->currentIndex()) {
    case 0:
        port.setDataBits(QSerialPort::Data8);
        break;
    case 1:
        port.setDataBits(QSerialPort::Data7);
        break;
    case 2:
        port.setDataBits(QSerialPort::Data6);
        break;
    case 3:
        port.setDataBits(QSerialPort::Data5);
        break;
    default:
        port.setDataBits(QSerialPort::Data8);
        break;
    }
//parity
    switch (ui->comboBoxOdd_Even->currentIndex()) {
    case 0:
        port.setParity(QSerialPort::NoParity);
        break;
    case 1:
        port.setParity(QSerialPort::OddParity);
        break;
    case 2:
        port.setParity(QSerialPort::EvenParity);
        break;
    default:
        port.setParity(QSerialPort::NoParity);
        break;
    }
//open port
    if(closeRet==0)
    {
        openRet=port.open(QIODevice::ReadWrite);

        if(openRet==0)
        {
            QMessageBox::warning(this,"open faile","串口打开失败");
        }
        else
        {
            this->closeRet=1;
            //QMessageBox::information(this,"open sucessful","串口打开成功");
            ui->plainTextEdit->setStyleSheet("color:red");
            ui->plainTextEdit->insertPlainText("打开串口成功\r\n");
        }
    }
    ui->closeBtn->setEnabled(true);
}
//------------------closePort------------------
void MainWindow::closePort()
{
    port.close();
    //ui->labelInfo->setStyleSheet("color:red");
    ui->plainTextEdit->setStyleSheet("color:red");
    closeRet=0;
    ui->plainTextEdit->insertPlainText("关闭成功\r\n");
    ui->closeBtn->setEnabled(false);
}
//------------------receiveData------------------
void MainWindow::receiveData()
{
    QByteArray array=port.readAll();
//    qDebug()<<array;
    if(ui->checkBoxShowHex->checkState()==Qt::Checked)
    {
        ui->plainTextEdit->insertPlainText(QString(array.toHex().toUpper())+" ");
    }
    else
    {
        ui->plainTextEdit->insertPlainText(QString(array)+" ");
    }
}
//------------------sendData------------------
void MainWindow::sendData()
{
    if(ui->checkBox_1->checkState()==Qt::Checked)
    {
        QString data1=ui->sendUart1->text();
        QByteArray arr1=data1.toLatin1();
        port.write(arr1+"\r\n");

        ui->plainTextEdit->insertPlainText(arr1+"\r\n");
    }
    else if(ui->checkBox_2->checkState()==Qt::Checked)
    {
        QString data2=ui->sendUart2->text();
        QByteArray arr2=data2.toLatin1();
        port.write(arr2+"\r\n");

        ui->plainTextEdit->insertPlainText(arr2+"\r\n");
    }
    else
    {
        QString data=ui->lineEditSend->text();
        QByteArray arr=data.toLatin1();
        //发送新行(\r\n)
        if(ui->checkBoxSendNew->checkState()==Qt::Checked)
        {
            port.write(arr+"\r\n");
            ui->plainTextEdit->insertPlainText(data.toUtf8()+"\n");
        }
        //默认发送
        else
        {
            port.write(arr);

            ui->plainTextEdit->insertPlainText(data.toUtf8()+"\n");
        }
    }
}
//------------------clearSend------------------
void MainWindow::clearSend()
{
    ui->lineEditSend->clear();

}
//------------------clearRecive------------------
void MainWindow::clearRecive()
{
    ui->plainTextEdit->clear();

}
//------------------showTime------------------
void MainWindow::showTime()
{
    QDateTime dayTime=QDateTime::currentDateTime();
    QString str=dayTime.toString("yyyy-MM-dd hh:mm:ss ddd\n");

    ui->lineEditShowTime->setText(str);
}

//------------------showPortBaudrate------------------
void MainWindow::showPortBaudrate()
{
    //clear last show
    showTime();
    ui->comboBox->clear();

    QList<QSerialPortInfo>usart_info;
    usart_info=QSerialPortInfo::availablePorts();
    for(int i=0;i<usart_info.count();i++)
    {
        ui->comboBoxPort->setCurrentText(usart_info.at(i).portName());
        ui->comboBox->addItem(usart_info.at(i).portName()+(QString(":%1").arg(port.baudRate())));
    }
}


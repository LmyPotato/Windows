#include "mainwindow.h"

#include "ui_mainwindow.h"

/*

 * 设置QT界面的样式

*/

void MainWindow::SetStyle(const QString &qssFile) {

    QFile file(qssFile);

    if (file.open(QFile::ReadOnly)) {

        QString qss = QLatin1String(file.readAll());

        qApp->setStyleSheet(qss);

        QString PaletteColor = qss.mid(20,7);

        qApp->setPalette(QPalette(QColor(PaletteColor)));

        file.close();

    }

    else

    {

        qApp->setStyleSheet("");

    }

}

static const QLatin1String serviceUuid("00001101-0000-1000-8000-00805F9B34FB");

//这个字符串里面的内容就是串口模式的Uuid

MainWindow::MainWindow(QWidget *parent) :

    QMainWindow(parent),

    ui(new Ui::MainWindow)

{

    ui->setupUi(this);

    this->SetStyle(":/qss/blue.css");     //设置样式表

    this->setWindowTitle("串口调试助手"); //设置标题

    //this->setWindowIcon(QIcon(":/wbyq.ico")); //设置图标

    /*1. 实例化蓝牙相关的对象*/

    discoveryAgent = new QBluetoothDeviceDiscoveryAgent();

    localDevice = new QBluetoothLocalDevice();

    socket = new QBluetoothSocket(QBluetoothServiceInfo::RfcommProtocol);

    //RfcommProtocol表示该服务使用RFCOMM套接字协议。RfcommProtocol属于模拟RS232模式，就叫串口模式

    /*2. 关联蓝牙设备相关的信号*/

    /*2.1 关联发现设备的槽函数，当扫描发现周围的蓝牙设备时，会发出deviceDiscovered信号*/

    connect(discoveryAgent,

            SIGNAL(deviceDiscovered(QBluetoothDeviceInfo)),

            this,

            SLOT(addBlueToothDevicesToList(QBluetoothDeviceInfo))

            );

    //蓝牙有数据可读

    connect(socket,

            SIGNAL(readyRead()),

            this,

            SLOT(readBluetoothDataEvent())

            );

    //蓝牙连接建立成功

    connect(socket,

            SIGNAL(connected()),

            this,

            SLOT(bluetoothConnectedEvent())

            );

    //蓝牙断开连接

    connect(socket,

            SIGNAL(disconnected()),

            this,

            SLOT(bluetoothDisconnectedEvent())

            );

    //蓝牙连接错误

    connect(socket, static_cast<void(QBluetoothSocket::*)(QBluetoothSocket::SocketError)>(&QBluetoothSocket::error),

          [=](QBluetoothSocket::SocketError error)

    {

            ui->plainTextEdit_BluetoothInfiShow->insertPlainText(socket->errorString()); //显示错误信息

            if(QBluetoothSocket::UnknownSocketError ==error)

            {

               ui->plainTextEdit_BluetoothInfiShow->insertPlainText("位置错误\n"); //显示错误信息

            }

            if(QBluetoothSocket::NoSocketError ==error)

            {

                ui->plainTextEdit_BluetoothInfiShow->insertPlainText(" 没有错误 用于测试\n"); //显示错误信息

            }

            if(QBluetoothSocket::HostNotFoundError ==error)

            {

                  ui->plainTextEdit_BluetoothInfiShow->insertPlainText("找不到远程主机\n"); //显示错误信息

            }

            if(QBluetoothSocket::ServiceNotFoundError ==error)

            {

                     ui->plainTextEdit_BluetoothInfiShow->insertPlainText(" 无法在远程主机上找到服务UUID\n"); //显示错误信息

            }

            if(QBluetoothSocket::NetworkError ==error)

            {

                 ui->plainTextEdit_BluetoothInfiShow->insertPlainText("尝试从套接字读取或写入返回错误\n"); //显示错误信息

            }

            if(QBluetoothSocket::UnsupportedProtocolError ==error)

            {

                 ui->plainTextEdit_BluetoothInfiShow->insertPlainText(" 该平台不支持该协议\n"); //显示错误信息

            }

            if(QBluetoothSocket::OperationError ==error)

            {

                 ui->plainTextEdit_BluetoothInfiShow->insertPlainText("当套接字处于不允许的状态时尝试进行操作\n"); //显示错误信息

            }

    });

    /*3. 检查蓝牙的状态，用于设置按钮的初始状态*/

    /*3.1 检查蓝牙是否开启*/

    if(localDevice->hostMode() == QBluetoothLocalDevice::HostPoweredOff)

    {

            //如果蓝牙处于关闭状态

            ui->pushButton_OpenBluetooth->setEnabled(true);   //打开按钮
            ui->pushButton_CloseBluetooth->setEnabled(false); //关闭按钮
    }

    else    //如果蓝牙处于开启状态

    {

            ui->pushButton_OpenBluetooth->setEnabled(false);//打开按钮

            ui->pushButton_CloseBluetooth->setEnabled(true);//关闭按钮
             ui->pushButton_BluetoothScan->setEnabled(true); //设置扫描按钮可用
    }
    connect(ui->on_pushButton_help_clicked,&QPushButton::clicked,[=](){
        on_pushButton_help_clicked();
    });
    //on_pushButton_help_clicked();
    /*3.2 设置标签显示本地蓝牙的名称*/

    QString name_info("本机蓝牙:");

    name_info+=localDevice->name();
    ui->label_BluetoothName->setText(name_info);
     ui->pushButton_StopScan->setEnabled(false);      //设置停止扫描蓝牙的按钮不可用
     ui->plainTextEdit_BluetoothInfiShow->setEnabled(false); //设置不可编辑
}

MainWindow::~MainWindow()

{

    delete ui;
    delete discoveryAgent;
    delete localDevice;
    delete socket;
}

void MainWindow::on_pushButton_OpenBluetooth_clicked()

{

    /*请求打开蓝牙设备*/

    localDevice->powerOn();

    ui->pushButton_OpenBluetooth->setEnabled(false);//打开按钮

    ui->pushButton_CloseBluetooth->setEnabled(true);//关闭按钮

    ui->pushButton_BluetoothScan->setEnabled(true); //设置扫描按钮可用

}

void MainWindow::on_pushButton_CloseBluetooth_clicked()

{

    /*关闭蓝牙设备*/

    localDevice->setHostMode(QBluetoothLocalDevice::HostPoweredOff);

    ui->pushButton_OpenBluetooth->setEnabled(true);//打开按钮

    ui->pushButton_CloseBluetooth->setEnabled(false);//关闭按钮

    ui->pushButton_BluetoothScan->setEnabled(false); //设置扫描按钮不可用

}

void MainWindow::on_pushButton_BluetoothScan_clicked()
{
     /*开始扫描周围的蓝牙设备*/
    discoveryAgent->start();
    ui->comboBox_BluetoothDevice->clear(); //清除条目
    ui->pushButton_BluetoothScan->setEnabled(false); //设置扫描按钮不可用
    ui->pushButton_StopScan->setEnabled(true);     //设置停止扫描按钮可用
}

void MainWindow::on_pushButton_DeviceVisible_clicked()
{
    /*设置蓝牙可见，可以被周围的设备搜索到，在Android上，此模式最多只能运行5分钟。*/
    localDevice->setHostMode( QBluetoothLocalDevice::HostDiscoverable);
}

void MainWindow::on_pushButton_StopScan_clicked()
{

    /*停止扫描周围的蓝牙设备*/
    discoveryAgent->stop();
    ui->pushButton_StopScan->setEnabled(false);     //设置停止扫描按钮不可用
    ui->pushButton_BluetoothScan->setEnabled(true); //设置扫描按钮可用
}

/*当扫描到周围的设备时会调用当前的槽函数*/

void MainWindow::addBlueToothDevicesToList(const QBluetoothDeviceInfo &info)

{

   // QString labe= QString("%1 %2").arg(info.name()).arg(info.address().toString());

    QString label= QString("%1 %2").arg(info.address().toString()).arg(info.name());

    ui->comboBox_BluetoothDevice->addItem(label); //添加字符串到comboBox上

}

//有数据可读

void MainWindow::readBluetoothDataEvent()

{

    QByteArray all= socket->readAll();

   ui->plainTextEdit_BluetoothInfiShow->insertPlainText(QString::fromLocal8Bit(all));

}

//建立连接

void MainWindow::bluetoothConnectedEvent()

{

    QMessageBox::information(this,tr("连接提示"),"蓝牙连接成功!");

    /*停止扫描周围的蓝牙设备*/

    discoveryAgent->stop();

    ui->pushButton_StopScan->setEnabled(false);     //设置停止扫描按钮不可用

    ui->pushButton_BluetoothScan->setEnabled(false); //设置扫描按钮不可用
}

//断开连接

void MainWindow::bluetoothDisconnectedEvent()

{

    QMessageBox::information(this,tr("连接提示"),"蓝牙断开连接!");

    ui->pushButton_BluetoothScan->setEnabled(true); //设置扫描按钮可用

}

//发送数据
void MainWindow::on_pushButton_SendData_clicked()
{
    QString text=ui->lineEdit_SendData->text();
    QByteArray send_data=text.toLocal8Bit();
    socket->write(send_data); //发送数据
}

//清空收到的数据
void MainWindow::on_pushButton_Clear_clicked()
{
    ui->plainTextEdit_BluetoothInfiShow->setPlainText("");
}
//连接蓝牙
void MainWindow::on_pushButton_ConnectDev_clicked()
{

    QString text = ui->comboBox_BluetoothDevice->currentText();
    int index = text.indexOf(' ');
    if(index == -1) return;
    QBluetoothAddress address(text.left(index));

    QString connect_device="开始连接蓝牙设备:\n";
    connect_device+=ui->comboBox_BluetoothDevice->currentText();
    QMessageBox::information(this,tr("连接提示"),connect_device);
    //开始连接蓝牙设备
    socket->connectToService(address, QBluetoothUuid(serviceUuid) ,QIODevice::ReadWrite);
}

//帮助提示
void MainWindow::on_pushButton_help_clicked()
{

    QMessageBox::information(this,tr("帮助提示"),"本软件用于HC-05/06系列串口蓝牙调试!\n"

                                             "暂时不支持BLE4.0版本蓝牙调试!\n"

                                             "软件作者:DS小龙哥\n"

                                             "BUG反馈:1126626497@qq.com");

}

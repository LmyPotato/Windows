#ifndef MAINWINDOW_H

#define MAINWINDOW_H

#include <QMainWindow>

#include <QBluetoothDeviceDiscoveryAgent>
#include <QBluetoothLocalDevice>
#include <QBluetoothSocket>
#include "QListWidgetItem"
#include <QMessageBox>
#include <QBluetoothUuid>
#include <QLowEnergyController>
#include <QBluetoothUuid>
#include <QLowEnergyService>
#include <QScrollBar>
#include <QInputDialog>
#include <QFile>
#include <QPushButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QBluetoothDeviceDiscoveryAgent *discoveryAgent;  //这个是指扫描周围蓝牙设备！
    QBluetoothLocalDevice *localDevice; //是指配置获取设备的蓝牙状态信息等！
    QLowEnergyController *m_control;
    QLowEnergyService *m_service;
    QBluetoothDeviceInfo remoteDevice;  //用于保存需要连接的设备的信息
    QLowEnergyCharacteristic m_readCharacteristic; //读特性
    QLowEnergyCharacteristic m_writeCharacteristic[5]; //写特性
    QLowEnergyService::WriteMode m_writeMode;
    QLowEnergyDescriptor m_notificationDesc;
    void searchCharacteristic();

    int SendMaxMode; //发送模式

    int SendModeSelect;//选择发送模式

private slots:

    void on_pushButton_OpenBluetooth_clicked();

    void on_pushButton_CloseBluetooth_clicked();

    void on_pushButton_BluetoothScan_clicked();

    void addBlueToothDevicesToList(const QBluetoothDeviceInfo&);  //发现蓝牙设备的槽函数

    void on_pushButton_DeviceVisible_clicked();

    void on_pushButton_StopScan_clicked();

    void on_pushButton_SendData_clicked();

    void on_pushButton_Clear_clicked();

    void SetStyle(const QString &qssFile); //样式表设置函数

    void on_pushButton_ConnectDev_clicked();

    void on_pushButton_help_clicked();

    void BlueServiceDiscovered(const QBluetoothUuid &gatt);

    void BlueServiceScanDone();   //正在运行的服务发现完成时发出此信号。

    void BlueDeviceConnected();   //当控制器成功连接到远程Low Energy设备时，会发出此信号。

    void BlueDeviceDisconnected();//当控制器从远程低功耗设备断开时发出此信号。

    void on_comboBox_UUID_currentIndexChanged(const QString &arg1); //选中的UUID服务

    void BleServiceServiceStateChanged(QLowEnergyService::ServiceState s);//服务状态改变时发出此信号

    void BleServiceCharacteristicChanged(const QLowEnergyCharacteristic &c, const QByteArray &value); //特性值由事件改变时发出此信号在外设上

    void BleServiceCharacteristicRead(const QLowEnergyCharacteristic &c, const QByteArray &value);   //当特征读取请求成功返回其值时

    void BleServiceCharacteristicWrite(const QLowEnergyCharacteristic &c, const QByteArray &value);//当特性值成功更改为newValue时

    void on_pushButton_SendMode_clicked();

    void on_pushButton_clicked();

    void on_sendBtn_clicked();

    void on_help_clicked();

    void on_clearBtn_clicked();

    void on_sendModeBtn_clicked();

private:

    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H

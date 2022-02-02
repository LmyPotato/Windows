#ifndef MAINWINDOW_H

#define MAINWINDOW_H

#include <QMainWindow>

#include <QBluetoothDeviceDiscoveryAgent>

#include <QBluetoothLocalDevice>

#include <QBluetoothSocket>

#include "QListWidgetItem"

#include <QMessageBox>

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

    QBluetoothLocalDevice *localDevice;//是指配置获取设备的蓝牙状态信息等！

    QBluetoothSocket *socket; //指进行链接蓝牙设备，读写信息！

private slots:

    void on_pushButton_OpenBluetooth_clicked();

    void on_pushButton_CloseBluetooth_clicked();

    void on_pushButton_BluetoothScan_clicked();

    void addBlueToothDevicesToList(const QBluetoothDeviceInfo&);  //发现蓝牙设备的槽函数

    void on_pushButton_DeviceVisible_clicked();

    void on_pushButton_StopScan_clicked();

    void readBluetoothDataEvent();

    void bluetoothConnectedEvent();

    void bluetoothDisconnectedEvent();

    void on_pushButton_SendData_clicked();

    void on_pushButton_Clear_clicked();

    void SetStyle(const QString &qssFile); //样式表设置函数

    void on_pushButton_ConnectDev_clicked();

    void on_pushButton_help_clicked();

private:

    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H

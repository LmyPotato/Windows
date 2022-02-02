#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//------------------SeralPort------------------
#include <QSerialPort>
#include <QSerialPortInfo>

//------------------else------------------
#include <QDebug>
#include <QMessageBox>
#include <QTimer>
#include <QDateTime>
#include <QLCDNumber>
#include <QUrl>
#include <QDesktopServices>
#include <QList>
//------------------SeralPort------------------
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    //port state
    bool openRet;
    //close state
    bool closeRet;
//slot
private slots:
    void systemInt();
    void showAbout();
//open
    void openPort();
//close
    void closePort();
//received
    void receiveData();
//send
    void sendData();
//clear send
    void clearSend();
//clear recive
    void clearRecive();
//show time
    void showTime();
//showPortBaudrate
    void showPortBaudrate();

private:
    //串口
    QSerialPort port;
    //串口信息
    QSerialPortInfo info;

    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

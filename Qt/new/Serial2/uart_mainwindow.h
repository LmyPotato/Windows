#ifndef UART_MAINWINDOW_H

#define UART_MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QSerialPortInfo>
#include <QSerialPort>
#include <QDebug>
#include <QMessageBox>
#include <QDateTime>
#include <QScrollBar>
#include <QDesktopServices>
#include <Qtimer>
#include <QFileDialog>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QThread>

namespace Ui {

class UART_MainWindow;

}

class UART_MainWindow : public QMainWindow

{

    Q_OBJECT

public:

    explicit UART_MainWindow(QWidget *parent = 0);

    ~UART_MainWindow();

    void SetStyle(const QString &qssFile); //样式表设置函数

    void UartSendData(QByteArray SendText);

     QSerialPortInfo *UART_Info;

     QSerialPort *UART_Config; //串口

     QTimer *UartSendTimer;

     QTimer *FileSendTimer;

     /*状态栏*/

     QWidget *StatusWindow;

     QTextEdit  *LcdShowTxCnt;

     QTextEdit  *LcdShowRxCnt;

     QLabel     *LabelShowTx;

     QLabel     *LabelShowRx;

     QHBoxLayout *Statuslayout;

      int RxCnt; //接收数量

      int TxCnt; //发送数量

      QList<QLineEdit*> LineEditSendList; //构造多条发送的列表

      QFile SendFile; //发送的文件

      char FileSendBuff[4096]; //最大发送数量

      int FileSendCnt; //记录文件发送字节数

      bool FileSendStat; //文件发送状态

private slots:

    void FileSendTimeUpdate();

    void WriteDataLen(qint64); //实际发送的数据通知

    void on_comboBox_ComSelect_activated(const QString);

    void on_comboBox_BaudSelect_currentTextChanged(const QString &arg1);

    void on_comboBox_StopBit_currentTextChanged(const QString &arg1);

    void on_comboBox_DataBits_currentTextChanged(const QString &arg1);

    void on_comboBox_Parity_activated(const QString &arg1);

    void on_checkBox_RTS_CTS_clicked();

    void on_checkBox_XON_XOFF_clicked();

    void on_pushButton_OpenUart_clicked();

    void ReadUasrtData();

    void on_pushButton_ClearData_clicked();

    void on_pushButton_SendData_clicked();

    void on_pushButton_ClearSend_clicked();

    void on_commandLinkButton_link_clicked();

    void on_checkBox_Time_Send_clicked();

    void SendTimeUpdate();

    void on_pushButton_SaveData_clicked();

    void on_pushButton_send_1_clicked();

    void on_pushButton_send_2_clicked();

    void on_pushButton_send_3_clicked();

    void on_pushButton_send_4_clicked();

    void on_pushButton_send_5_clicked();

    void on_pushButton_send_6_clicked();

    void on_pushButton_send_7_clicked();

    void on_pushButton_send_8_clicked();

    void on_pushButton_send_9_clicked();

    void on_pushButton_send_10_clicked();

    void on_pushButton_send_11_clicked();

    void on_pushButton_send_12_clicked();

    void on_pushButton_SlectSendList_clicked();

    void on_pushButton_ClearSendList_clicked();

    void on_pushButton_SendListExplain_clicked();

    void on_pushButton_SelectSendFile_clicked();

    void on_pushButton_StartSendFile_clicked();

    void on_pushButton_SendFileHelp_clicked();

    void on_pushButton_StopSendFile_clicked();

    void on_pushButton_LED1_clicked();

    void on_pushButton_LED2_clicked();

    void on_pushButton_LED3_clicked();

    void on_pushButton_LED4_clicked();

    void on_pushButton_BEEP_clicked();

    void on_pushButton_RTC_Time_clicked();

    void on_action_help_info_triggered();

private:

    Ui::UART_MainWindow *ui;

};

#endif // UART_MAINWINDOW_H


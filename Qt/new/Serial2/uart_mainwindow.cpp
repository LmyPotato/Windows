#include "uart_mainwindow.h"
#include "ui_uart_mainwindow.h"

/*

 * 设置QT界面的样式

*/

void UART_MainWindow::SetStyle(const QString &qssFile) {

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

UART_MainWindow::UART_MainWindow(QWidget *parent) :

    QMainWindow(parent),

    ui(new Ui::UART_MainWindow)

    ui->setupUi(this);

    /*1. 页面基本设置*/

    //this->SetStyle(":/qss/blue.css");     //设置样式表

    this->setWindowTitle("嵌入式开发-串口调试助手 v1.0"); //设置标题

    //this->setWindowIcon(QIcon(":/window.ico")); //设置图标

    /*2. 多页面切换控件名称设置*/

    ui->tabWidget->setTabText(0,"单条发送");

    ui->tabWidget->setTabText(1,"多条发送");

    ui->tabWidget->setTabText(2,"文件发送");

    ui->tabWidget->setTabText(3,"协议发送");

    ui->tabWidget->setTabText(4,"物联网模拟控制");

    /*3. 默认显示的COM口*/

    ui->comboBox_ComSelect->addItem("请点击刷新"); //添加新的条目选项

    /*4. 设置串口默认的配置*/

    UART_Config =new QSerialPort;                 //新建串口对象

    UART_Config->setBaudRate(115200);             //默认波特率

    UART_Config->setDataBits(QSerialPort::Data8); //数据位

    UART_Config->setParity(QSerialPort::NoParity);//奇偶校验

    UART_Config->setStopBits(QSerialPort::OneStop);//停止位

    UART_Config->setFlowControl(QSerialPort::NoFlowControl); //流控开关

    connect(UART_Config, SIGNAL(readyRead()),this, SLOT(ReadUasrtData())); //关联读信号

    connect(UART_Config, SIGNAL(bytesWritten(qint64)),this, SLOT(WriteDataLen(qint64))); //关联写通道信号(实际向串口里写了多少数据)

    /*5. 设置数据位选择列表的默认显示参数*/
    ui->comboBox_DataBits->addItem("5");

    ui->comboBox_DataBits->addItem("6");

    ui->comboBox_DataBits->addItem("7");

    ui->comboBox_DataBits->addItem("8");

    ui->comboBox_DataBits->setCurrentText("8"); //设置当前默认显示的文本

    /*6. 设置停止位选择列表的默认显示参数*/

    ui->comboBox_StopBit->addItem("1");

    ui->comboBox_StopBit->addItem("1.5");

    ui->comboBox_StopBit->addItem("2");

    ui->comboBox_StopBit->setCurrentText("1"); //设置当前默认显示的文本

    /*7.设置奇偶校验位选择列表的默认显示参数*/

    ui->comboBox_Parity->addItem("无校验");

    ui->comboBox_Parity->addItem("奇校验");

    ui->comboBox_Parity->addItem("偶校验");

    ui->comboBox_Parity->setCurrentText("无校验"); //设置当前默认显示的文本

    ui->plainTextEdit_SendData->setPlainText("www.wanbangee.com");

    /*8. 定时发送设置*/

    UartSendTimer = new QTimer(this); //创建定时器

    connect(UartSendTimer, SIGNAL(timeout()), this, SLOT(SendTimeUpdate())); //关联槽函数

    ui->spinBox_Time->setValue(1000); //默认周期为1000ms

    ui->spinBox_Time->setMaximum(9999); //周期最大值

    ui->spinBox_Time->setMinimum(0); //周期最小值

    /*9. 状态栏*/

    StatusWindow = new QWidget;

    LcdShowTxCnt = new QTextEdit;

    LcdShowRxCnt = new QTextEdit;

    LabelShowTx  = new QLabel("TX:");

    LabelShowRx  = new QLabel("RX:");

    Statuslayout = new QHBoxLayout;

    // Statuslayout->addStretch();

    Statuslayout->addWidget(LabelShowTx);

    Statuslayout->addWidget(LcdShowTxCnt);

    Statuslayout->addWidget(LabelShowRx);

    Statuslayout->addWidget(LcdShowRxCnt);

    StatusWindow->setLayout(Statuslayout);

    //  Statuslayout->addStretch();

    /*添加状态栏*/

    QStatusBar *StatList=statusBar();

    StatList->addWidget(StatusWindow);

    // StatList->setStyleSheet(QString("QStatusBar::item{border: 0px}"));

    RxCnt=0; //接收数量

    TxCnt=0; //发送数量

    LcdShowTxCnt->setEnabled(false);

    LcdShowRxCnt->setEnabled(false);

    /*10. 构造多条发送的列表*/

    LineEditSendList.clear(); //清空列表

    LineEditSendList.append(ui->lineEdit_tx_1);

    LineEditSendList.append(ui->lineEdit_tx_2);

    LineEditSendList.append(ui->lineEdit_tx_3);

    LineEditSendList.append(ui->lineEdit_tx_4);

    LineEditSendList.append(ui->lineEdit_tx_5);

    LineEditSendList.append(ui->lineEdit_tx_6);

    LineEditSendList.append(ui->lineEdit_tx_7);

    LineEditSendList.append(ui->lineEdit_tx_8);

    LineEditSendList.append(ui->lineEdit_tx_9);

    LineEditSendList.append(ui->lineEdit_tx_10);

    LineEditSendList.append(ui->lineEdit_tx_11);

    LineEditSendList.append(ui->lineEdit_tx_12);

    /*11. 初始化文件发送相关参数*/

    ui->progressBar_SendFileProgress->setMinimum(0);  //进度条最小值0

    ui->progressBar_SendFileProgress->setValue(0);    //设置进度条当前显示的值0

    ui->spinBox_OnePackageSendByte->setMinimum(1);    //每包发送的字节数最小值

    ui->spinBox_OnePackageSendByte->setMaximum(4096); //每包发送的字节数最大值

    ui->spinBox_OnePackageSendByte->setValue(100);    //当前默认字节数

    ui->spinBox_OnePackageSendTime->setMaximum(0);    //每包发送的最小间隔时间ms

    ui->spinBox_OnePackageSendTime->setMaximum(9999); //每包发送的最大间隔时间ms

    ui->spinBox_OnePackageSendTime->setValue(100);    //当前默认间隔时间

    FileSendTimer = new QTimer(this); //创建定时器

    connect(FileSendTimer, SIGNAL(timeout()), this, SLOT(FileSendTimeUpdate())); //关联槽函数

    FileSendStat=0; //文件发送标志

}

UART_MainWindow::~UART_MainWindow()

{

    delete ui;

    delete UART_Config;

    delete UartSendTimer;

    delete StatusWindow;

    delete LcdShowTxCnt;

    delete LcdShowRxCnt;

    delete LabelShowTx;

    delete LabelShowRx;

    delete Statuslayout;

    delete FileSendTimer;

}

//刷新当前可用的串口COM口

void UART_MainWindow::on_comboBox_ComSelect_activated(const QString)

{

    int i;

    QList<QSerialPortInfo> UartInfoList=QSerialPortInfo::availablePorts(); //获取可用串口端口信息

    if(UartInfoList.count()>0)

    {

        for(i=0;i<UartInfoList.count();i++)

        {

            if(UartInfoList.at(i).portName()!=ui->comboBox_ComSelect->itemText(i)) //挨个挨个比较名称

            {

                ui->comboBox_ComSelect->clear(); //清除之前的条目显示

                break; //之前没有刷新过

            }

        }

        //之前没有刷新过才需要刷新

        if(i!=UartInfoList.count())

        {

            for(int i=0;i<UartInfoList.count();i++)

            {

                if(UartInfoList.at(i).isBusy()) //如果当前串口 COM 口忙就返回真，否则返回假

                {

                    QString info=UartInfoList.at(i).portName();

                    info+="(占用)";

                    ui->comboBox_ComSelect->addItem(info); //添加新的条目选项

                }

                else

                {

                    ui->comboBox_ComSelect->addItem(UartInfoList.at(i).portName()); //添加新的条目选项

                }

            }

        }

        else  //之前刷新过，就判断串口有没有被占用

        {

            for(i=0;i<UartInfoList.count();i++)

            {

                if(UartInfoList.at(i).isBusy()) //如果当前串口 COM 口忙就返回真，否则返回假

                {

                    QString info=UartInfoList.at(i).portName();

                    info+="(占用)";

                    ui->comboBox_ComSelect->setItemText(i,info); //修改条目选项

                }

            }

        }

        ui->comboBox_BaudSelect->clear();  //清除波特率显示信息

        /*构造串口信息*/

        UART_Info = new QSerialPortInfo(ui->comboBox_ComSelect->currentText());

        /*构造一个列表类*/

        QList<qint32> baud_list;

        /*获取串口支持的波特率*/

        baud_list=UART_Info->standardBaudRates();

        /*打印出支持的波特率*/

        for(int i=0;i<baud_list.count();i++)

        {

            //取出列表中指定的值

            ui->comboBox_BaudSelect->addItem(QString::number(baud_list.at(i))); //添加新的条目选项

        }

        for(int i=0;i<baud_list.count();i++)

        {

            if(baud_list.at(i)==115200)

            {

                ui->comboBox_BaudSelect->setCurrentText("115200"); //默认波特率

            }

            else  if(baud_list.at(i)==9600)

            {

                ui->comboBox_BaudSelect->setCurrentText("9600"); //默认波特率

            }

        }

    }

    else

    {

        ui->comboBox_ComSelect->addItem("无可用串口"); //添加新的条目选项

    }

}

//设置选中的波特率

void UART_MainWindow::on_comboBox_BaudSelect_currentTextChanged(const QString &arg1)

{

    UART_Config->setBaudRate(arg1.toInt());             //设置波特率

}

//设置选中的停止位

void UART_MainWindow::on_comboBox_StopBit_currentTextChanged(const QString &arg1)

{

    if(arg1=="2")

    {

        UART_Config->setStopBits(QSerialPort::TwoStop);//2个停止位

    }

    else if(arg1=="1.5")

    {

        UART_Config->setStopBits(QSerialPort::OneAndHalfStop);//1.5个停止位

    }

    else

    {

        UART_Config->setStopBits(QSerialPort::OneStop);//1个停止位

    }

}

//设置选中的数据位

void UART_MainWindow::on_comboBox_DataBits_currentTextChanged(const QString &arg1)

{

    if(arg1=="5")

    {

        UART_Config->setDataBits(QSerialPort::Data5); //数据5位

    }

    else if(arg1=="6")

    {

        UART_Config->setDataBits(QSerialPort::Data6); //数据6位

    }

    else if(arg1=="7")

    {

        UART_Config->setDataBits(QSerialPort::Data7); //数据7位

    }

    else

    {

        UART_Config->setDataBits(QSerialPort::Data8); //数据8位

    }

}

//设置选中的奇偶校验位

void UART_MainWindow::on_comboBox_Parity_activated(const QString &arg1)

{

    if(arg1=="奇校验")

    {

        UART_Config->setParity(QSerialPort::OddParity); //奇校验

    }

    else if(arg1=="偶校验")

    {

        UART_Config->setParity(QSerialPort::EvenParity);//偶校验

    }

    else  //无校验

    {

        UART_Config->setParity(QSerialPort::NoParity);//无校验

    }

}

//选择硬件流量控制开关

void UART_MainWindow::on_checkBox_RTS_CTS_clicked()

{

    if(ui->checkBox_RTS_CTS->isChecked())

    {

        UART_Config->setFlowControl(QSerialPort::HardwareControl); //硬件流控开关

    }

    else

    {

        UART_Config->setFlowControl(QSerialPort::NoFlowControl); //无流控开关

    }

}

//选择软件流量控制开关

void UART_MainWindow::on_checkBox_XON_XOFF_clicked()

{

    if(ui->checkBox_XON_XOFF->isChecked())

    {

        UART_Config->setFlowControl(QSerialPort::SoftwareControl); //软件流控开关

    }

    else

    {

        UART_Config->setFlowControl(QSerialPort::NoFlowControl); //无流控开关

    }

}

//打开串口

void UART_MainWindow::on_pushButton_OpenUart_clicked()

{

    if(ui->pushButton_OpenUart->text()=="打开串口")  //打开串口

    {

        ui->pushButton_OpenUart->setText("关闭串口");

        /*配置串口的信息*/

        UART_Config->setPortName(ui->comboBox_ComSelect->currentText());  //COM的名称

        if(!(UART_Config->open(QIODevice::ReadWrite)))      //打开的属性权限

        {

            QMessageBox::warning(this, tr("串口状态提示"),

                                 tr("串口打开失败!\n请选择正确的COM口"),

                                 QMessageBox::Ok);

            ui->pushButton_OpenUart->setText("打开串口");

            return;

        }

    }

    else //关闭串口

    {

        ui->pushButton_OpenUart->setText("打开串口");

        /*关闭串口-*/

        UART_Config->clear(QSerialPort::AllDirections);

        UART_Config->close();

    }

}

//读信号

void UART_MainWindow::ReadUasrtData()

{

    /*返回可读的字节数*/

    if(UART_Config->bytesAvailable()<=0)

    {

        return;

    }

    /*移动滚动条到底部*/

    QScrollBar *scrollbar = ui->plainTextEdit_ShowRxData->verticalScrollBar();

    if(scrollbar)

    {

        scrollbar->setSliderPosition(scrollbar->maximum());

    }

    /*定义字节数组*/

    QByteArray rx_data;

    /*读取串口缓冲区所有的数据*/

    rx_data=UART_Config->readAll();

    RxCnt+=rx_data.length(); //记录接收长度

    LcdShowRxCnt->setText(QString::number(RxCnt)); //显示接收数量

    QString Rx_str_data;

    //显示接收时间

    if(ui->checkBox_ShowTime->isChecked())

    {

        QDateTime time = QDateTime::currentDateTime();   //获取系统现在的时间

        Rx_str_data= time.toString("【yyyy-MM-dd hh:mm:ss ddd"); //设置显示格式

        Rx_str_data+="】:";

    }

    if(ui->checkBox_HexShow->isChecked())

    {

        rx_data=rx_data.toHex();

        /*显示HEX*/

        Rx_str_data+=tr("").fromLocal8Bit(rx_data.data());

    }

    else

    {

        /*解决中文乱码*/

        Rx_str_data+=tr("").fromLocal8Bit(rx_data.data());

    }

    /*当长度大于5000字节时，自动清空显示*/

    if(Rx_str_data.length()>5000)

    {

        ui->plainTextEdit_ShowRxData->setPlainText("");

    }

    /*显示收到的数据--*/

    ui->plainTextEdit_ShowRxData->insertPlainText(Rx_str_data);

}

//清空显示

void UART_MainWindow::on_pushButton_ClearData_clicked()

{

    ui->plainTextEdit_ShowRxData->setPlainText("");

    RxCnt=0;

    LcdShowRxCnt->setText(QString::number(RxCnt)); //显示接收数量

}

//发送数据

void UART_MainWindow::UartSendData(QByteArray SendText)

{

    if(UART_Config->isOpen()==false)return;



    if(SendText.isEmpty()) return;  //判断有没有输入数据

    TxCnt+=SendText.length(); //记录发送的长度

    LcdShowTxCnt->setText(QString::number(TxCnt)); //显示发送数量

    //16进制发送

    if(ui->checkBox_HexSend->isChecked())

    {

        SendText=SendText.toHex();

    }

    //发送新行

    if(ui->checkBox_SendNewLine->isChecked())

    {

        SendText+="\r\n";

    }

    UART_Config->write(SendText);  //发送数据

}

//发送数据

void UART_MainWindow::on_pushButton_SendData_clicked()

{

    QString text=ui->plainTextEdit_SendData->toPlainText();

    UartSendData(text.toLocal8Bit());

}

//清除发送

void UART_MainWindow::on_pushButton_ClearSend_clicked()

{

    ui->plainTextEdit_SendData->setPlainText("");

    TxCnt=0;

    LcdShowTxCnt->setText(QString::number(TxCnt)); //显示接收数量

}

//链接到指定位置

void UART_MainWindow::on_commandLinkButton_link_clicked()

{

    QDesktopServices::openUrl(QUrl("http://bbs.wanbangee.com/bbs/forum.php"));

}

//定时发送

void UART_MainWindow::on_checkBox_Time_Send_clicked()

{

    if(ui->checkBox_Time_Send->isChecked())  //开启定时发送

    {

        int time_cnt=ui->spinBox_Time->value();

        if(time_cnt<=0)

        {

            ui->checkBox_Time_Send->setChecked(false); //没有选中

            QMessageBox::warning(this, tr("定时发送状态提示"),

                                 tr("请设置正确的时间!"),

                                 QMessageBox::Ok);

        }

        else

        {

            UartSendTimer->start(time_cnt);  //开启定时器

        }

    }

    else //关闭定时发送

    {

        UartSendTimer->stop();

    }

}

//定时器 超时函数，用于定时发送

void UART_MainWindow::SendTimeUpdate()

{

    on_pushButton_SendData_clicked(); //发送数据

}

//保存接收的数据到文件

void UART_MainWindow::on_pushButton_SaveData_clicked()

{

    QString filename=QFileDialog::getSaveFileName(this,"保存串口数据","D:/UatrRxData.txt",tr("*.txt"));

    if(filename.isEmpty())

    {

        QMessageBox::warning(this, tr("文件保存状态提示"),

                             tr("----------文件名为空!--------------"),

                             QMessageBox::Ok);

        return; //判断是否为空

    }

    QFile file(filename);

    if(file.open(QIODevice::WriteOnly|QIODevice::Append)==false)  //只写与追加模式

    {

        QMessageBox::warning(this, tr("文件保存状态提示"),

                             tr("-----------------文件创建失败!----------------"),

                             QMessageBox::Ok);

        return;

    }

    QByteArray array=ui->plainTextEdit_ShowRxData->toPlainText().toLocal8Bit();

    file.write(array);

    file.close();

}

/*

多条发送处理

*/

void UART_MainWindow::on_pushButton_send_1_clicked()

{

    QString text=ui->lineEdit_tx_1->text();

    UartSendData(text.toLocal8Bit());

}

void UART_MainWindow::on_pushButton_send_2_clicked()

{

    QString text=ui->lineEdit_tx_2->text();

    UartSendData(text.toLocal8Bit());

}

void UART_MainWindow::on_pushButton_send_3_clicked()

{

    QString text=ui->lineEdit_tx_3->text();

    UartSendData(text.toLocal8Bit());

}

void UART_MainWindow::on_pushButton_send_4_clicked()

{

    QString text=ui->lineEdit_tx_4->text();

    UartSendData(text.toLocal8Bit());

}

void UART_MainWindow::on_pushButton_send_5_clicked()

{

    QString text=ui->lineEdit_tx_5->text();

    UartSendData(text.toLocal8Bit());

}

void UART_MainWindow::on_pushButton_send_6_clicked()

{

    QString text=ui->lineEdit_tx_6->text();

    UartSendData(text.toLocal8Bit());

}

void UART_MainWindow::on_pushButton_send_7_clicked()

{

    QString text=ui->lineEdit_tx_7->text();

    UartSendData(text.toLocal8Bit());

}

void UART_MainWindow::on_pushButton_send_8_clicked()

{

    QString text=ui->lineEdit_tx_8->text();

    UartSendData(text.toLocal8Bit());

}

void UART_MainWindow::on_pushButton_send_9_clicked()

{

    QString text=ui->lineEdit_tx_9->text();

    UartSendData(text.toLocal8Bit());

}

void UART_MainWindow::on_pushButton_send_10_clicked()

{

    QString text=ui->lineEdit_tx_10->text();

    UartSendData(text.toLocal8Bit());

}

void UART_MainWindow::on_pushButton_send_11_clicked()

{

    QString text=ui->lineEdit_tx_11->text();

    UartSendData(text.toLocal8Bit());

}

void UART_MainWindow::on_pushButton_send_12_clicked()

{

    QString text=ui->lineEdit_tx_12->text();

    UartSendData(text.toLocal8Bit());

}

//导入发送条目

void UART_MainWindow::on_pushButton_SlectSendList_clicked()

{

    QString filename=QFileDialog::getOpenFileName(this,"选择导入的条目文件","esp8266+sta+tcp_server.txt",tr("*.txt"));

    //filename==选择文件的绝对路径

    QFile file(filename);

    if(file.open(QIODevice::ReadOnly)==false)  //只读

    {

        QMessageBox::warning(this, tr("文件状态提示"),

                             tr("-----------------存放条目的文件打开失败!----------------"),

                             QMessageBox::Ok);

        return;

    }

    //导入条目

    for(int i=0;i<LineEditSendList.count();i++)

    {

        if(file.atEnd()){break;} //文件读取完毕

        QByteArray array=file.readLine();//读取一行，以\n结束

        LineEditSendList.at(i)->setText(QString(array)); //设置文本编辑器显示

    }

    file.close(); //关闭文件

}

//清除条目

void UART_MainWindow::on_pushButton_ClearSendList_clicked()

{

    //清除条目

    for(int i=0;i<LineEditSendList.count();i++)

    {

        LineEditSendList.at(i)->setText(""); //设置文本编辑器显示

    }

}

//条目创建说明

void UART_MainWindow::on_pushButton_SendListExplain_clicked()

{

    QMessageBox::warning(this, tr("条目编辑说明"),

                         tr("1. 存放条目的文件需要以xxx.txt结尾(就是普通文本文件)\n"

                            "2. 文本文件里每一行的条目数据需要以\\n结束\n"

                            "(也就是说,编辑一行数据就按回车，在第二行再继续编辑)\n"

                            "3. 条目最大只能存放12行数据,多出的数据不会导入!"),

                         QMessageBox::Ok);

}

//选择发送的文件

void UART_MainWindow::on_pushButton_SelectSendFile_clicked()

{

    QString filename=QFileDialog::getOpenFileName(this,"选择发送的文件","D:/",tr("*.*"));

    //filename==选择文件的绝对路径

    if(filename.isEmpty())

    {

        QMessageBox::warning(this, tr("文件状态提示"),

                             tr("路径为空,请选择正确的路径!"),

                             QMessageBox::Ok);

        ui->lineEdit_SendFileAddr->setText(""); //清除数据

    }

    ui->lineEdit_SendFileAddr->setText(filename); //设置要发送的文件路径

}

//开始发送文件

void UART_MainWindow::on_pushButton_StartSendFile_clicked()

{

    if(UART_Config->isOpen()==false)

    {

        QMessageBox::warning(this, tr("状态提示"),

                             tr("请先打开串口,在继续操作!"),

                             QMessageBox::Ok);

        return;

    }

    QString filename=ui->lineEdit_SendFileAddr->text(); //获取文件路径

    SendFile.setFileName(filename); //设置发送的文件路径

    SendFile.close(); //先关闭再打开

    if(SendFile.open(QIODevice::ReadOnly)==false)  //只读

    {

        QMessageBox::warning(this, tr("文件状态提示"),

                             tr("文件打开失败,请选择正确的路径!"),

                             QMessageBox::Ok);

        ui->lineEdit_SendFileAddr->setText(""); //清除数据

        return;

    }

    ui->label_All_Byete->setText(tr("总字节数:%1").arg(SendFile.size()));

    ui->progressBar_SendFileProgress->setMaximum(SendFile.size()); //设置进度条最大值

    ui->progressBar_SendFileProgress->setValue(0); //进度条清0

    FileSendCnt=0; //清除文件发送的字节数

    TxCnt=0;       //清除发送的字节数

    FileSendTimer->start(ui->spinBox_OnePackageSendTime->value()); //设置定时器超时时间

    FileSendStat=1; //开始发送标志

    UartSendTimer->stop(); //停止循环发送的定时器，防止干扰计数

    ui->tabWidget->setTabEnabled(0,false); //设置指定页面失能

    ui->tabWidget->setTabEnabled(1,false); //设置指定页面失能

    ui->tabWidget->setTabEnabled(3,false); //设置指定页面失能

    ui->tabWidget->setTabEnabled(4,false); //设置指定页面失能

}

//文件发送帮助提示

void UART_MainWindow::on_pushButton_SendFileHelp_clicked()

{

    QMessageBox::warning(this, tr("文件发送帮助"),

                         tr("为了方便下位机接收文件数据,文件将进行分包发送\n"

                            "每一包的字节大小可以自行设置,范围(1~4096字节)\n"

                            "每一包数据发送的时间间隔也可以自行设置,范围(1~9999ms)\n"

                            "注意: 每包的字节数量和间隔时间只有在开始发送文件之前设置有效!\n"),

                         QMessageBox::Ok);

}

//停止文件发送

void UART_MainWindow::on_pushButton_StopSendFile_clicked()

{

    FileSendTimer->stop(); //停止定时器

    FileSendStat=0; //清除标志

    ui->tabWidget->setTabEnabled(0,true); //设置指定页面使能

    ui->tabWidget->setTabEnabled(1,true); //设置指定页面使能

    ui->tabWidget->setTabEnabled(3,true); //设置指定页面使能

    ui->tabWidget->setTabEnabled(4,true); //设置指定页面使能

}

//开始文件发送

void UART_MainWindow::FileSendTimeUpdate()

{

    int sen_len=ui->spinBox_OnePackageSendByte->value(); //每次发送的长度

    int cnt=SendFile.read(FileSendBuff,sen_len);

    QByteArray array(FileSendBuff,cnt); //构造数组

    UartSendData(array); //发送数据

    if(cnt!=sen_len)

    {

        FileSendTimer->stop(); //停止定时器

    }

    //可以增加优化代码，等待发送完毕

}

//实际发送成功的数据

void UART_MainWindow::WriteDataLen(qint64 cnt)

{

    if(FileSendStat)

    {

        FileSendCnt+=cnt;

        ui->progressBar_SendFileProgress->setValue(FileSendCnt); //更新进度条



        if(FileSendCnt==SendFile.size()) //判断是否发送完毕

        {

            QMessageBox::warning(this, tr("文件发送状态"),

                                 tr("----文件发送成功!----"),

                                 QMessageBox::Ok);

            FileSendStat=0; //清除标志

            SendFile.close(); //关闭文件

            ui->tabWidget->setTabEnabled(0,true); //设置指定页面使能

            ui->tabWidget->setTabEnabled(1,true); //设置指定页面使能

            ui->tabWidget->setTabEnabled(3,true); //设置指定页面使能

            ui->tabWidget->setTabEnabled(4,true); //设置指定页面使能

        }

    }

}

//模拟物联网控制_LED1

void UART_MainWindow::on_pushButton_LED1_clicked()

{

    if(UART_Config->isOpen()==false)return;

    static boostate=1;

    if(state) //开启LED

    {

        UartSendData( QByteArray("LED1_ON"));

        ui->pushButton_LED1->setText("关闭LED1");

    }

    else

    {

        UartSendData( QByteArray("LED1_OFF"));

        ui->pushButton_LED1->setText("开启LED1");

    }

    state=!state;

}

//模拟物联网控制_LED2

void UART_MainWindow::on_pushButton_LED2_clicked()

{

    if(UART_Config->isOpen()==false)return;

    static boostate=1;

    if(state) //开启LED

    {

        UartSendData( QByteArray("LED2_ON"));

        ui->pushButton_LED2->setText("关闭LED2");

    }

    else

    {

        UartSendData( QByteArray("LED2_OFF"));

        ui->pushButton_LED2->setText("开启LED2");

    }

    state=!state;

}

//模拟物联网控制_LED3

void UART_MainWindow::on_pushButton_LED3_clicked()

{

    if(UART_Config->isOpen()==false)return;

    static boostate=1;

    if(state) //开启LED

    {

        UartSendData( QByteArray("LED3_ON"));

        ui->pushButton_LED3->setText("关闭LED3");

    }

    else

    {

        UartSendData( QByteArray("LED3_OFF"));

        ui->pushButton_LED3->setText("开启LED3");

    }

    state=!state;

}

//模拟物联网控制_LED4

void UART_MainWindow::on_pushButton_LED4_clicked()

{

    if(UART_Config->isOpen()==false)return;

    static boostate=1;

    if(state) //开启LED

    {

        UartSendData( QByteArray("LED4_ON"));

        ui->pushButton_LED4->setText("关闭LED4");

    }

    else

    {

        UartSendData( QByteArray("LED4_OFF"));

        ui->pushButton_LED4->setText("开启LED4");

    }

    state=!state;

}

//模拟物联网控制_BEEP

void UART_MainWindow::on_pushButton_BEEP_clicked()

{

    if(UART_Config->isOpen()==false)return;

    static boostate=1;

    if(state) //开启LED

    {

        UartSendData( QByteArray("BEEP_ON"));

        ui->pushButton_BEEP->setText("关闭BEEP");

    }

    else

    {

        UartSendData( QByteArray("BEEP_OFF"));

        ui->pushButton_BEEP->setText("开启BEEP");

    }

    state=!state;

}

//模拟物联网控制_RTC时间校准

void UART_MainWindow::on_pushButton_RTC_Time_clicked()

{

    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间

    QString str1="按照本地时间进行校准:\n";

    str1+=time.toString("yyyy-MM-dd hh:mm:ss ddd\n"); //设置显示格式

    //获取本地时间校准物联网开发板RTC时间

    QString str2="*"; //加上标识符进行区分

    str2+=time.toString("yyyyMMddhhmmss"); //设置显示格式

    str1+="串口发出的数据:";

    str1+=str2;

    QMessageBox::about(this,"校准RTC时间",str1);

    QByteArray text=str2.toLocal8Bit();

    UartSendData(text); //发送数据

}

//帮助信息提示

void UART_MainWindow::on_action_help_info_triggered()

{

    QMessageBox::about(this,"关于","软件用于串口调试,支持基本数据收发，支持文件发送\n"

                                 "支持模拟物联网控制\n"

                                 "软件作者:DS小龙哥\n"

                                 "BUG反馈:1126626497@qq.com");
}

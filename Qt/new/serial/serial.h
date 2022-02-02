#ifndef SERIAL_H
#define SERIAL_H

#include <QMainWindow>

/*----------user----------*/
//port
#include <QtSerialPort>
//debug
#include <QDebug>
/*--------------------*/
#include <QPixmap>
#include <QPainter>
#include <QFont>
#include <QList>

namespace Ui {
class Serial;
}

class Serial : public QMainWindow
{
    Q_OBJECT

public:
    explicit Serial(QWidget *parent = 0);
    ~Serial();
    bool openRet;

    //show value port and baudRate
    void Show();

private slots:
    //button
    void btn_open_port(bool);
    void btn_close_port(bool);
    void btn_send_data(bool);
    void btn_clear_data(bool);
    void btn_test();

    //recevie data
    void receive_data();

private:
    Ui::Serial *ui;
    /*--------------funtion----------------*/
    void system_init();
    QSerialPort global_port;

    /*--------------variable----------------*/
};

#endif // SERIAL_H

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QVideoWidget>
#include <QFileDialog>
#include <QListWidgetItem>
#include <QFile>
#include <QDesktopWidget>
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
     QMediaPlayer *player;
     QVideoWidget *videoWidget;
     int PlayTime;
     void SetStyle(const QString &qssFile);
private slots:
    void on_pushButton_AddrVideoFile_clicked();
    void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

    void on_pushButton_start_clicked();

    void on_horizontalSlider_value_sliderMoved(int position);

    void on_pushButton_mute_clicked();

    void on_pushButton_pause_clicked();

    void on_comboBox_speed_activated(const QString &arg1);

    void on_pushButton_up_clicked();

    void on_pushButton_down_clicked();

    void player_location(qint64 value);

    void player_Time(qint64 value);
private:
    Ui::Widget *ui;
};

#endif // WIDGET_H

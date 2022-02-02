#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileDialog>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QListWidgetItem>
#include <QDebug>
#include <QVideoWidget>
#include <QDesktopWidget>
#include <QTimer>
#include <QMessageBox>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void systemInit();

public slots:
    void addFile();
    void selectFile(QListWidgetItem *item);
    void startMusic();
    void setVolumes();
    void pauseMusic();

    void mute();

    void speed();

    void playTime(qint64);

    void player_location(qint64 value);

    void nextMusic();

    void lastMusic();

    void clear();

    void showAbout();
private:
    QMediaPlayer *player;
    QVideoWidget *video;
    int value;
    bool isMute=0;
    quint64 PlayTime;
    quint64 timecnt=0;
    int cnt;
    bool isError=0;
    Ui::Widget *ui;
};

#endif // WIDGET_H

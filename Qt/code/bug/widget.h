#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QWebSettings>
#include <QDebug>
#include <QWebView>
#include <QWebPage>
#include <QWebFrame>
#include <QWebElementCollection>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QEventLoop>
#include <QFileInfo>
#include <QTimer>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void closeEvent(QCloseEvent *e);

private slots:
    void on_pushButton_clicked();
    void onProgress(int progess);
    void onLoadFinished(bool ok);

private:
    //下载一张图片
    QImage downloadImage(const QString &url);
    bool exitMark;
    Ui::Widget *ui;
};

#endif // WIDGET_H

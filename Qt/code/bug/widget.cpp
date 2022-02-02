#include "widget.h"
#include "ui_widget.h"
//#include <QNetworkProxy>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    //设置代理
//    QNetworkProxy proxy(QNetworkProxy::Socks5Proxy,"192.168.7.1",1088);
//    ui->webView->page()->networkAccessManager()->setProxy(proxy);

    QWebSettings *settings=ui->webView->settings();
    settings->setAttribute(QWebSettings::AutoLoadImages,false);
    settings->setAttribute(QWebSettings::JavascriptEnabled,false);

    connect(ui->webView,SIGNAL(loadProgress(int)),this,SLOT(onProgress(int)));

    connect(ui->webView,SIGNAL(loadFinished(bool)),this,SLOT(onLoadFinished(bool)));

    exitMark=false;
}

Widget::~Widget()
{
    delete ui;
}

void Widget::closeEvent(QCloseEvent *e)
{
    QWidget::closeEvent(e);
    exitMark=true;
}

void Widget::on_pushButton_clicked()
{

    ui->webView->load(QUrl(ui->lineEdit->text()));
//    QWebFrame *frame= ui->webView->page()->mainFrame();
//    frame->setZoomFactor(1);//1假设为缩放因子

}

void Widget::onProgress(int progess)
{
    //20%
    QString title=QString::number(progess)+"%";

    this->setWindowTitle(title);

}
//http://www.qqjay.com/yijingtupian/86114.html

void Widget::onLoadFinished(bool ok)
{
    qDebug()<<"load finished"<<ok;

    QWebElementCollection  elements=ui->webView->page()->mainFrame()->findAllElements("body > div.wrap > div > div >div.tupian > p >img");

    for(int i=0;i<elements.count()&&!exitMark;i++)
    {
        const QWebElement &ele=elements.at(i);
//        qDebug()<<ele.attribute("src");
        QString url=ele.attribute("src");

        QImage image=downloadImage(url);

        QFileInfo info(url);
        QString fileName=info.fileName();
        //保存图片到文件，默认当前目录
        image.save(fileName);
        qDebug()<<"save image:"<<fileName;


        //延时5秒
        QEventLoop loop;
        QTimer::singleShot(1*1000,&loop,SLOT(quit()));
        loop.exec();
    }

    if(exitMark)
        return;

    elements=ui->webView->page()->mainFrame()->findAllElements("body > div.wrap > div:nth-child(5) > div:nth-child(1) >div.next2 > a:nth-child(2)");

    if(elements.count()<=0)
    {
        qDebug()<<" no next";
        return;
    }
    QString nextPageUrl="http://www.qqjay.com"+elements.at(0).attribute("href");

    ui->webView->load(QUrl(nextPageUrl));
}

QImage Widget::downloadImage(const QString &url)
{
    QNetworkAccessManager mgr;
    QNetworkRequest request;

    request.setUrl(QUrl(url));

    QNetworkReply *replay=mgr.get(request);

    QEventLoop loop;

    connect(replay,SIGNAL(finished()),&loop,SLOT(quit()));

    //卡住,等待结束
    loop.exec();

    QByteArray data=replay->readAll();

    QImage image=QImage::fromData(data);

    return image;
}

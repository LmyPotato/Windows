#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileDialog>
#include <QFile>
#include <QDebug>
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

    void fileRead();//读
    void fileWrite();//写
    void systemInt();//
    void showContent();//显示内容
    void clearContent();//清空
private:
    QString path;//保存文件路径
    bool isChange;//判断文件是否更新
    Ui::Widget *ui;
};

#endif // WIDGET_H

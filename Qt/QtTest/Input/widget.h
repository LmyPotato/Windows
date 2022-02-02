#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFontDialog>
#include <QDebug>
#include <QFontComboBox>
#include <QColorDialog>
#include <QMessageBox>
#include <QFileDialog>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
public slots:
    void setFontSize();
    void setPointSize();
    void setBlod();
    void setItalic();
    void setColor();
    void setUnderLine();
    void setCenter();
    void setLeft();
    void setRight();
    void clearText();
    void closeWindow();
    void saveFile();
    void about();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H

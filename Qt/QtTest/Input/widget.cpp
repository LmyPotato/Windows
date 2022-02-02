#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
//设置图标
    ui->lineEdit->setText("test");
    setWindowIcon(QIcon(":/Image/face.png"));
//设置初始的字号
    ui->textEdit->setFontPointSize(12);
    ui->comboBoxPointSize->setCurrentText("12");

//    int posX=ui->textEdit->x();
//    int posY=ui->textEdit->y();
//    QCursor::setPos(posX,posY);
//设置选择使能
    ui->toolBlodBtn->setCheckable(1);
    ui->toolItalic->setCheckable(1);
    ui->toolUnderLineBtn->setCheckable(1);

    ui->toolCenterBtn->setCheckable(1);
    ui->toolLeftBtn->setCheckable(1);
    ui->toolRightBtn->setCheckable(1);
//设置图标
    ui->toolBlodBtn->setIcon(QIcon(":/Image/bold.png"));
    ui->toolItalic->setIcon(QIcon(":/Image/italic.png"));
    ui->toolColorBtn->setIcon(QIcon(":/Image/color.png"));
    ui->toolUnderLineBtn->setIcon(QIcon(":/Image/under.png"));
//设置提示
    ui->toolBlodBtn->setToolTip("加粗");
    ui->toolItalic->setToolTip("倾斜");
    ui->toolColorBtn->setToolTip("设置颜色");
    ui->toolUnderLineBtn->setToolTip("下划线");
//设置字体
    connect(ui->fontComboBox,SIGNAL(currentFontChanged(QFont)),this,SLOT(setFontSize()));
//设置字号
    connect(ui->comboBoxPointSize,SIGNAL(currentIndexChanged(int)),this,SLOT(setPointSize()));
//设置粗体
    connect(ui->toolBlodBtn,SIGNAL(clicked(bool)),this,SLOT(setBlod()));
//设置倾斜
    connect(ui->toolItalic,SIGNAL(clicked(bool)),this,SLOT(setItalic()));
//设置颜色
    connect(ui->toolColorBtn,SIGNAL(clicked(bool)),this,SLOT(setColor()));
//设置下划线
    connect(ui->toolUnderLineBtn,SIGNAL(clicked(bool)),this,SLOT(setUnderLine()));

    //居中
    connect(ui->toolCenterBtn,SIGNAL(clicked(bool)),this,SLOT(setCenter()));
    //左对齐
    connect(ui->toolLeftBtn,SIGNAL(clicked(bool)),this,SLOT(setLeft()));
    //右对齐
    connect(ui->toolRightBtn,SIGNAL(clicked(bool)),this,SLOT(setRight()));
    //清空
    connect(ui->clearBtn,SIGNAL(clicked(bool)),this,SLOT(clearText()));
    //关闭窗口
    connect(ui->closeBtn,SIGNAL(clicked(bool)),this,SLOT(closeWindow()));
    //保存文件
    connect(ui->saveBtn,SIGNAL(clicked(bool)),this,SLOT(saveFile()));
    //关于
    connect(ui->aboutBtn,SIGNAL(clicked(bool)),this,SLOT(about()));
}

Widget::~Widget()
{
    delete ui;
}

//字体
void Widget::setFontSize()
{
    QFont font=ui->fontComboBox->currentFont();
    ui->textEdit->setFontFamily(font.family());
}
//字号
void Widget::setPointSize()
{
    QString fontSize=ui->comboBoxPointSize->currentText();
    ui->textEdit->setFontPointSize(fontSize.toInt());
}
//加粗
void Widget::setBlod()
{
    if(ui->toolBlodBtn->isChecked())
    {
        ui->textEdit->setFontWeight(QFont::Bold);
    }
    else
    {
        ui->textEdit->setFontWeight(QFont::Normal);
    }
}
//倾斜
void Widget::setItalic()
{
    if(ui->toolItalic->isChecked())
    {
        ui->textEdit->setFontItalic(1);
    }
    else
    {
        ui->textEdit->setFontItalic(0);
    }
}
//颜色
void Widget::setColor()
{
    QColor color=QColorDialog::getColor(color,this);
    ui->textEdit->setTextColor(color);
}
//下划线
void Widget::setUnderLine()
{
    if(ui->toolUnderLineBtn->isChecked())
    {
        ui->textEdit->setFontUnderline(1);
    }
    else
    {
        ui->textEdit->setFontUnderline(0);
    }
}
//居中
void Widget::setCenter()
{
    ui->textEdit->setAlignment(Qt::AlignCenter);
    ui->toolCenterBtn->setCheckable(1);
    ui->toolLeftBtn->setCheckable(0);
    ui->toolRightBtn->setCheckable(0);
}
//左对齐
void Widget::setLeft()
{
    ui->textEdit->setAlignment(Qt::AlignLeft);
    ui->toolCenterBtn->setCheckable(0);
    ui->toolLeftBtn->setCheckable(1);
    ui->toolRightBtn->setCheckable(0);
}
//右对齐
void Widget::setRight()
{
    ui->textEdit->setAlignment(Qt::AlignRight);
    ui->toolCenterBtn->setCheckable(0);
    ui->toolLeftBtn->setCheckable(1);
    ui->toolRightBtn->setCheckable(0);
}
//清除内容
void Widget::clearText()
{
    ui->textEdit->clear();
    ui->lineEdit->clear();
}
//关闭串口
void Widget::closeWindow()
{
    this->close();
}
//保存文件
void Widget::saveFile()
{
    QString fm=ui->lineEdit->text();

    if(ui->lineEdit->text().isEmpty())
    {
        QMessageBox::information(this,"信息","文件名为空");
        return;
    }

    if(ui->textEdit->toPlainText().isEmpty())
    {
        QMessageBox::warning(this,"警告","保存的内容不能为空!");
        return;
    }

    QString fileName=QFileDialog::getSaveFileName(this,"保存记录",fm,"(*.txt)");
    if(!fileName.isEmpty())
    {
        QFile file(fileName);
        file.open(QIODevice::WriteOnly|QFile::Text);
        QTextStream stream(&file);
        stream<<ui->textEdit->toPlainText();

        ui->textEdit->setFontPointSize(30);
        ui->textEdit->setText("保存文件成功");

        file.close();
    }
}
//关于
void Widget::about()
{
    QMessageBox::about(this,"关于","软件用于XXX\n"
                                 "XXXXXXXXX\n\n"
                                 "--------杏林洁白\n"
                                  "致谢:小冯同学^_^\n");
}

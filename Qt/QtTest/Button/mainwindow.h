#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QAbstractButton>
#include <QDebug>
#include <QRadioButton>
#include <QGroupBox>
#include <QButtonGroup>
#include <QDesktopServices>
#include <QUrl>
#include <QMessageBox>
#include <QDialogButtonBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QButtonGroup *gender_Group;
    ~MainWindow();
public slots:
    void showSex();
    void showInfo();
    void connectBaiDu();
    void testbuttonBox(QAbstractButton *button);


private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

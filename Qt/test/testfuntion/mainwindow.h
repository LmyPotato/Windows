#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QCompleter>
#include "modify.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    QStringList id;

public slots:
    void land();

    void setRegister();


private:
    Modify *m=NULL;
    QCompleter *number;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

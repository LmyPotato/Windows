#ifndef MODIFY_H
#define MODIFY_H

#include <QMainWindow>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QPixmap>

class Modify : public QMainWindow
{
    Q_OBJECT
public:
    explicit Modify(QWidget *parent = nullptr);
    void showPixmap();
signals:

public slots:
};

#endif // MODIFY_H

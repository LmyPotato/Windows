/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit_BluetoothInfiShow;
    QLabel *label_BluetoothName;
    QComboBox *comboBox_BluetoothDevice;
    QLineEdit *lineEdit_SendData;
    QPushButton *on_pushButton_help_clicked;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_OpenBluetooth;
    QPushButton *pushButton_BluetoothScan;
    QPushButton *pushButton_StopScan;
    QPushButton *pushButton_CloseBluetooth;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(599, 433);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plainTextEdit_BluetoothInfiShow = new QPlainTextEdit(centralWidget);
        plainTextEdit_BluetoothInfiShow->setObjectName(QStringLiteral("plainTextEdit_BluetoothInfiShow"));
        plainTextEdit_BluetoothInfiShow->setGeometry(QRect(150, 30, 371, 241));
        label_BluetoothName = new QLabel(centralWidget);
        label_BluetoothName->setObjectName(QStringLiteral("label_BluetoothName"));
        label_BluetoothName->setGeometry(QRect(150, 270, 211, 21));
        label_BluetoothName->setFrameShape(QFrame::Box);
        comboBox_BluetoothDevice = new QComboBox(centralWidget);
        comboBox_BluetoothDevice->setObjectName(QStringLiteral("comboBox_BluetoothDevice"));
        comboBox_BluetoothDevice->setGeometry(QRect(370, 270, 141, 21));
        lineEdit_SendData = new QLineEdit(centralWidget);
        lineEdit_SendData->setObjectName(QStringLiteral("lineEdit_SendData"));
        lineEdit_SendData->setGeometry(QRect(150, 300, 113, 20));
        on_pushButton_help_clicked = new QPushButton(centralWidget);
        on_pushButton_help_clicked->setObjectName(QStringLiteral("on_pushButton_help_clicked"));
        on_pushButton_help_clicked->setGeometry(QRect(400, 300, 75, 23));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(160, 330, 320, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_OpenBluetooth = new QPushButton(widget);
        pushButton_OpenBluetooth->setObjectName(QStringLiteral("pushButton_OpenBluetooth"));

        horizontalLayout->addWidget(pushButton_OpenBluetooth);

        pushButton_BluetoothScan = new QPushButton(widget);
        pushButton_BluetoothScan->setObjectName(QStringLiteral("pushButton_BluetoothScan"));

        horizontalLayout->addWidget(pushButton_BluetoothScan);

        pushButton_StopScan = new QPushButton(widget);
        pushButton_StopScan->setObjectName(QStringLiteral("pushButton_StopScan"));

        horizontalLayout->addWidget(pushButton_StopScan);

        pushButton_CloseBluetooth = new QPushButton(widget);
        pushButton_CloseBluetooth->setObjectName(QStringLiteral("pushButton_CloseBluetooth"));

        horizontalLayout->addWidget(pushButton_CloseBluetooth);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 599, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_BluetoothName->setText(QString());
        on_pushButton_help_clicked->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
        pushButton_OpenBluetooth->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", Q_NULLPTR));
        pushButton_BluetoothScan->setText(QApplication::translate("MainWindow", "\346\211\253\346\217\217", Q_NULLPTR));
        pushButton_StopScan->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\346\211\253\346\217\217", Q_NULLPTR));
        pushButton_CloseBluetooth->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

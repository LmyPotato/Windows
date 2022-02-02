/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_BluetoothName;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_BluetoothDevice;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_BluetoothScan;
    QPushButton *pushButton_StopScan;
    QComboBox *comboBox_UUID;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_OpenBluetooth;
    QPushButton *pushButton_CloseBluetooth;
    QPushButton *pushButton_6;
    QLabel *label_3;
    QPlainTextEdit *plainTextEdit_BluetoothInfiShow;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_SendData;
    QPushButton *sendBtn;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *clearBtn;
    QPushButton *sendModeBtn;
    QPushButton *help;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(360, 750);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 341, 731));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_BluetoothName = new QLabel(layoutWidget);
        label_BluetoothName->setObjectName(QString::fromUtf8("label_BluetoothName"));

        horizontalLayout->addWidget(label_BluetoothName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBox_BluetoothDevice = new QComboBox(layoutWidget);
        comboBox_BluetoothDevice->setObjectName(QString::fromUtf8("comboBox_BluetoothDevice"));

        horizontalLayout_2->addWidget(comboBox_BluetoothDevice);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_BluetoothScan = new QPushButton(layoutWidget);
        pushButton_BluetoothScan->setObjectName(QString::fromUtf8("pushButton_BluetoothScan"));

        horizontalLayout_3->addWidget(pushButton_BluetoothScan);

        pushButton_StopScan = new QPushButton(layoutWidget);
        pushButton_StopScan->setObjectName(QString::fromUtf8("pushButton_StopScan"));

        horizontalLayout_3->addWidget(pushButton_StopScan);


        verticalLayout->addLayout(horizontalLayout_3);

        comboBox_UUID = new QComboBox(layoutWidget);
        comboBox_UUID->setObjectName(QString::fromUtf8("comboBox_UUID"));

        verticalLayout->addWidget(comboBox_UUID);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_OpenBluetooth = new QPushButton(layoutWidget);
        pushButton_OpenBluetooth->setObjectName(QString::fromUtf8("pushButton_OpenBluetooth"));

        horizontalLayout_4->addWidget(pushButton_OpenBluetooth);

        pushButton_CloseBluetooth = new QPushButton(layoutWidget);
        pushButton_CloseBluetooth->setObjectName(QString::fromUtf8("pushButton_CloseBluetooth"));

        horizontalLayout_4->addWidget(pushButton_CloseBluetooth);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_4->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_4);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        plainTextEdit_BluetoothInfiShow = new QPlainTextEdit(layoutWidget);
        plainTextEdit_BluetoothInfiShow->setObjectName(QString::fromUtf8("plainTextEdit_BluetoothInfiShow"));

        verticalLayout->addWidget(plainTextEdit_BluetoothInfiShow);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        lineEdit_SendData = new QLineEdit(layoutWidget);
        lineEdit_SendData->setObjectName(QString::fromUtf8("lineEdit_SendData"));

        horizontalLayout_5->addWidget(lineEdit_SendData);

        sendBtn = new QPushButton(layoutWidget);
        sendBtn->setObjectName(QString::fromUtf8("sendBtn"));

        horizontalLayout_5->addWidget(sendBtn);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        clearBtn = new QPushButton(layoutWidget);
        clearBtn->setObjectName(QString::fromUtf8("clearBtn"));

        horizontalLayout_6->addWidget(clearBtn);

        sendModeBtn = new QPushButton(layoutWidget);
        sendModeBtn->setObjectName(QString::fromUtf8("sendModeBtn"));

        horizontalLayout_6->addWidget(sendModeBtn);

        help = new QPushButton(layoutWidget);
        help->setObjectName(QString::fromUtf8("help"));

        horizontalLayout_6->addWidget(help);


        verticalLayout->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242\345\210\260\347\232\204\350\223\235\347\211\231\350\256\276\345\244\207\357\274\232", nullptr));
        label_BluetoothName->setText(QApplication::translate("MainWindow", "\346\234\254\346\234\272\350\223\235\347\211\231\345\220\215\347\247\260\357\274\232", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", nullptr));
        pushButton_BluetoothScan->setText(QApplication::translate("MainWindow", "\346\211\253\346\217\217\345\221\250\345\233\264\350\223\235\347\211\231", nullptr));
        pushButton_StopScan->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\346\211\253\346\217\217", nullptr));
        pushButton_OpenBluetooth->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\350\223\235\347\211\231", nullptr));
        pushButton_CloseBluetooth->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\350\223\235\347\211\231", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "\346\234\254\346\234\272\350\223\235\347\211\231\345\217\257\350\247\201", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\350\223\235\347\211\231\346\224\266\345\210\260\347\232\204\346\225\260\346\215\256", nullptr));
        sendBtn->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        clearBtn->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        sendModeBtn->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\250\241\345\274\217", nullptr));
        help->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251\346\217\220\347\244\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

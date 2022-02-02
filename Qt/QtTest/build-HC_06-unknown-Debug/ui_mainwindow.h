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
    QPushButton *Btn;
    QPushButton *help;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(360, 750);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 341, 731));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_BluetoothName = new QLabel(layoutWidget);
        label_BluetoothName->setObjectName(QStringLiteral("label_BluetoothName"));

        horizontalLayout->addWidget(label_BluetoothName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        comboBox_BluetoothDevice = new QComboBox(layoutWidget);
        comboBox_BluetoothDevice->setObjectName(QStringLiteral("comboBox_BluetoothDevice"));

        horizontalLayout_2->addWidget(comboBox_BluetoothDevice);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_2->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pushButton_BluetoothScan = new QPushButton(layoutWidget);
        pushButton_BluetoothScan->setObjectName(QStringLiteral("pushButton_BluetoothScan"));

        horizontalLayout_3->addWidget(pushButton_BluetoothScan);

        pushButton_StopScan = new QPushButton(layoutWidget);
        pushButton_StopScan->setObjectName(QStringLiteral("pushButton_StopScan"));

        horizontalLayout_3->addWidget(pushButton_StopScan);


        verticalLayout->addLayout(horizontalLayout_3);

        comboBox_UUID = new QComboBox(layoutWidget);
        comboBox_UUID->setObjectName(QStringLiteral("comboBox_UUID"));

        verticalLayout->addWidget(comboBox_UUID);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        pushButton_OpenBluetooth = new QPushButton(layoutWidget);
        pushButton_OpenBluetooth->setObjectName(QStringLiteral("pushButton_OpenBluetooth"));

        horizontalLayout_4->addWidget(pushButton_OpenBluetooth);

        pushButton_CloseBluetooth = new QPushButton(layoutWidget);
        pushButton_CloseBluetooth->setObjectName(QStringLiteral("pushButton_CloseBluetooth"));

        horizontalLayout_4->addWidget(pushButton_CloseBluetooth);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));

        horizontalLayout_4->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_4);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        plainTextEdit_BluetoothInfiShow = new QPlainTextEdit(layoutWidget);
        plainTextEdit_BluetoothInfiShow->setObjectName(QStringLiteral("plainTextEdit_BluetoothInfiShow"));

        verticalLayout->addWidget(plainTextEdit_BluetoothInfiShow);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lineEdit_SendData = new QLineEdit(layoutWidget);
        lineEdit_SendData->setObjectName(QStringLiteral("lineEdit_SendData"));

        horizontalLayout_5->addWidget(lineEdit_SendData);

        sendBtn = new QPushButton(layoutWidget);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));

        horizontalLayout_5->addWidget(sendBtn);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        clearBtn = new QPushButton(layoutWidget);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));

        horizontalLayout_6->addWidget(clearBtn);

        Btn = new QPushButton(layoutWidget);
        Btn->setObjectName(QStringLiteral("Btn"));

        horizontalLayout_6->addWidget(Btn);

        help = new QPushButton(layoutWidget);
        help->setObjectName(QStringLiteral("help"));

        horizontalLayout_6->addWidget(help);


        verticalLayout->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242\345\210\260\347\232\204\350\223\235\347\211\231\350\256\276\345\244\207\357\274\232", Q_NULLPTR));
        label_BluetoothName->setText(QApplication::translate("MainWindow", "\346\234\254\346\234\272\350\223\235\347\211\231\345\220\215\347\247\260\357\274\232", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", Q_NULLPTR));
        pushButton_BluetoothScan->setText(QApplication::translate("MainWindow", "\346\211\253\346\217\217\345\221\250\345\233\264\350\223\235\347\211\231", Q_NULLPTR));
        pushButton_StopScan->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\346\211\253\346\217\217", Q_NULLPTR));
        pushButton_OpenBluetooth->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\350\223\235\347\211\231", Q_NULLPTR));
        pushButton_CloseBluetooth->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\350\223\235\347\211\231", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "\346\234\254\346\234\272\350\223\235\347\211\231\345\217\257\350\247\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\350\223\235\347\211\231\346\224\266\345\210\260\347\232\204\346\225\260\346\215\256", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", Q_NULLPTR));
        clearBtn->setText(QApplication::translate("MainWindow", "\346\270\205\347\251\272\346\225\260\346\215\256", Q_NULLPTR));
        Btn->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\250\241\345\274\217", Q_NULLPTR));
        help->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251\346\217\220\347\244\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

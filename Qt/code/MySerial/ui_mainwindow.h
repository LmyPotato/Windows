/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
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
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_9;
    QPlainTextEdit *plainTextEdit;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label;
    QComboBox *comboBoxPort;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_2;
    QComboBox *comboBoxBaudRate;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_3;
    QComboBox *comboBoxStopBits;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_4;
    QComboBox *comboBoxDataBits;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QComboBox *comboBoxOdd_Even;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *openBtn;
    QPushButton *closeBtn;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBoxShowHex;
    QPushButton *clearReciveBtn;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_17;
    QLineEdit *sendUart2;
    QCheckBox *checkBox_2;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *sendUart1;
    QCheckBox *checkBox_1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *lineEditSend;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *sendBtn;
    QPushButton *clearSendBtn;
    QCheckBox *checkBoxSendNew;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *showTimeBtn;
    QLineEdit *lineEditShowTime;
    QLabel *label_6;
    QComboBox *comboBox;
    QPushButton *aboutBtn;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *commandLinkButton;
    QSpacerItem *horizontalSpacer_3;
    QCommandLinkButton *commandLinkButtonCSDN;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(518, 443);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 452, 388));
        verticalLayout_5 = new QVBoxLayout(layoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        plainTextEdit = new QPlainTextEdit(layoutWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        horizontalLayout_9->addWidget(plainTextEdit);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_13->addWidget(label);

        comboBoxPort = new QComboBox(layoutWidget);
        comboBoxPort->setObjectName(QStringLiteral("comboBoxPort"));

        horizontalLayout_13->addWidget(comboBoxPort);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_14->addWidget(label_2);

        comboBoxBaudRate = new QComboBox(layoutWidget);
        comboBoxBaudRate->setObjectName(QStringLiteral("comboBoxBaudRate"));

        horizontalLayout_14->addWidget(comboBoxBaudRate);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_15->addWidget(label_3);

        comboBoxStopBits = new QComboBox(layoutWidget);
        comboBoxStopBits->setObjectName(QStringLiteral("comboBoxStopBits"));

        horizontalLayout_15->addWidget(comboBoxStopBits);


        verticalLayout_2->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_16->addWidget(label_4);

        comboBoxDataBits = new QComboBox(layoutWidget);
        comboBoxDataBits->setObjectName(QStringLiteral("comboBoxDataBits"));

        horizontalLayout_16->addWidget(comboBoxDataBits);


        verticalLayout_2->addLayout(horizontalLayout_16);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        comboBoxOdd_Even = new QComboBox(layoutWidget);
        comboBoxOdd_Even->setObjectName(QStringLiteral("comboBoxOdd_Even"));

        horizontalLayout->addWidget(comboBoxOdd_Even);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        openBtn = new QPushButton(layoutWidget);
        openBtn->setObjectName(QStringLiteral("openBtn"));

        horizontalLayout_2->addWidget(openBtn);

        closeBtn = new QPushButton(layoutWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));

        horizontalLayout_2->addWidget(closeBtn);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        checkBoxShowHex = new QCheckBox(layoutWidget);
        checkBoxShowHex->setObjectName(QStringLiteral("checkBoxShowHex"));

        horizontalLayout_3->addWidget(checkBoxShowHex);

        clearReciveBtn = new QPushButton(layoutWidget);
        clearReciveBtn->setObjectName(QStringLiteral("clearReciveBtn"));

        horizontalLayout_3->addWidget(clearReciveBtn);


        verticalLayout_2->addLayout(horizontalLayout_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        sendUart2 = new QLineEdit(layoutWidget);
        sendUart2->setObjectName(QStringLiteral("sendUart2"));

        horizontalLayout_17->addWidget(sendUart2);

        checkBox_2 = new QCheckBox(layoutWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));

        horizontalLayout_17->addWidget(checkBox_2);


        verticalLayout->addLayout(horizontalLayout_17);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        sendUart1 = new QLineEdit(layoutWidget);
        sendUart1->setObjectName(QStringLiteral("sendUart1"));

        horizontalLayout_4->addWidget(sendUart1);

        checkBox_1 = new QCheckBox(layoutWidget);
        checkBox_1->setObjectName(QStringLiteral("checkBox_1"));

        horizontalLayout_4->addWidget(checkBox_1);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_3->addLayout(verticalLayout);


        horizontalLayout_9->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(horizontalLayout_9);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lineEditSend = new QLineEdit(layoutWidget);
        lineEditSend->setObjectName(QStringLiteral("lineEditSend"));
        lineEditSend->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_7->addWidget(lineEditSend);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        sendBtn = new QPushButton(layoutWidget);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));

        horizontalLayout_6->addWidget(sendBtn);

        clearSendBtn = new QPushButton(layoutWidget);
        clearSendBtn->setObjectName(QStringLiteral("clearSendBtn"));

        horizontalLayout_6->addWidget(clearSendBtn);


        horizontalLayout_7->addLayout(horizontalLayout_6);

        checkBoxSendNew = new QCheckBox(layoutWidget);
        checkBoxSendNew->setObjectName(QStringLiteral("checkBoxSendNew"));
        checkBoxSendNew->setChecked(true);

        horizontalLayout_7->addWidget(checkBoxSendNew);


        verticalLayout_4->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        showTimeBtn = new QPushButton(layoutWidget);
        showTimeBtn->setObjectName(QStringLiteral("showTimeBtn"));

        horizontalLayout_5->addWidget(showTimeBtn);

        lineEditShowTime = new QLineEdit(layoutWidget);
        lineEditShowTime->setObjectName(QStringLiteral("lineEditShowTime"));

        horizontalLayout_5->addWidget(lineEditShowTime);


        horizontalLayout_8->addLayout(horizontalLayout_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_8->addWidget(label_6);

        comboBox = new QComboBox(layoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_8->addWidget(comboBox);

        aboutBtn = new QPushButton(layoutWidget);
        aboutBtn->setObjectName(QStringLiteral("aboutBtn"));

        horizontalLayout_8->addWidget(aboutBtn);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);

        commandLinkButton = new QCommandLinkButton(layoutWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setMinimumSize(QSize(0, 0));
        commandLinkButton->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_10->addWidget(commandLinkButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        commandLinkButtonCSDN = new QCommandLinkButton(layoutWidget);
        commandLinkButtonCSDN->setObjectName(QStringLiteral("commandLinkButtonCSDN"));
        commandLinkButtonCSDN->setMaximumSize(QSize(180, 200));

        horizontalLayout_10->addWidget(commandLinkButtonCSDN);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_10);


        verticalLayout_5->addLayout(verticalLayout_4);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        plainTextEdit->setPlainText(QString());
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243", 0));
        comboBoxPort->clear();
        comboBoxPort->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "None", 0)
         << QApplication::translate("MainWindow", "COM1", 0)
         << QApplication::translate("MainWindow", "COM2", 0)
         << QApplication::translate("MainWindow", "COM3", 0)
         << QApplication::translate("MainWindow", "COM4", 0)
         << QApplication::translate("MainWindow", "COM5", 0)
         << QApplication::translate("MainWindow", "COM6", 0)
         << QApplication::translate("MainWindow", "COM7", 0)
         << QApplication::translate("MainWindow", "COM8", 0)
         << QApplication::translate("MainWindow", "COM9", 0)
         << QApplication::translate("MainWindow", "COM10", 0)
         << QApplication::translate("MainWindow", "COM11", 0)
         << QApplication::translate("MainWindow", "COM12", 0)
         << QApplication::translate("MainWindow", "COM13", 0)
         << QApplication::translate("MainWindow", "COM14", 0)
        );
        label_2->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207", 0));
        comboBoxBaudRate->clear();
        comboBoxBaudRate->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "115200", 0)
         << QApplication::translate("MainWindow", "57600", 0)
         << QApplication::translate("MainWindow", "38400", 0)
         << QApplication::translate("MainWindow", "19200", 0)
         << QApplication::translate("MainWindow", "9600", 0)
         << QApplication::translate("MainWindow", "4800", 0)
         << QApplication::translate("MainWindow", "2400", 0)
         << QApplication::translate("MainWindow", "1200", 0)
        );
        label_3->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215", 0));
        comboBoxStopBits->clear();
        comboBoxStopBits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", 0)
         << QApplication::translate("MainWindow", "1.5", 0)
         << QApplication::translate("MainWindow", "2", 0)
        );
        label_4->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215", 0));
        comboBoxDataBits->clear();
        comboBoxDataBits->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "8", 0)
         << QApplication::translate("MainWindow", "7", 0)
         << QApplication::translate("MainWindow", "6", 0)
         << QApplication::translate("MainWindow", "5", 0)
        );
        label_5->setText(QApplication::translate("MainWindow", "\345\245\207\345\201\266\346\240\241\351\252\214\344\275\215", 0));
        comboBoxOdd_Even->clear();
        comboBoxOdd_Even->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "None", 0)
         << QApplication::translate("MainWindow", "Odd", 0)
         << QApplication::translate("MainWindow", "Even", 0)
        );
        openBtn->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        closeBtn->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", 0));
        checkBoxShowHex->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\27216\350\277\233\345\210\266", 0));
        clearReciveBtn->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\346\216\245\345\217\227", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "1.2", 0));
        checkBox_1->setText(QApplication::translate("MainWindow", "1.1", 0));
        sendBtn->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", 0));
        clearSendBtn->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\345\217\221\351\200\201", 0));
        checkBoxSendNew->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\346\226\260\350\241\214", 0));
        showTimeBtn->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\275\223\345\211\215\346\227\266\351\227\264", 0));
        label_6->setText(QApplication::translate("MainWindow", " \345\217\257\347\224\250\344\270\262\345\217\243", 0));
        aboutBtn->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0));
        commandLinkButton->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\347\231\276\345\272\246", 0));
        commandLinkButtonCSDN->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200CSDN-\346\235\217\346\236\227\346\264\201\347\231\275", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

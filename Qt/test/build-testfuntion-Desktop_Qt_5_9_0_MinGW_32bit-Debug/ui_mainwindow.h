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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEditIdNumber;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEditPassword;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *landBtn;
    QPushButton *registerBtn;
    QPushButton *setPasswordBtn;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(349, 188);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 60, 256, 83));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lineEditIdNumber = new QLineEdit(widget);
        lineEditIdNumber->setObjectName(QStringLiteral("lineEditIdNumber"));

        horizontalLayout->addWidget(lineEditIdNumber);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lineEditPassword = new QLineEdit(widget);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));

        horizontalLayout_2->addWidget(lineEditPassword);

        checkBox = new QCheckBox(widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setMouseTracking(true);
        checkBox->setTabletTracking(false);
        checkBox->setAcceptDrops(false);
        checkBox->setChecked(false);

        horizontalLayout_2->addWidget(checkBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        landBtn = new QPushButton(widget);
        landBtn->setObjectName(QStringLiteral("landBtn"));

        horizontalLayout_4->addWidget(landBtn);

        registerBtn = new QPushButton(widget);
        registerBtn->setObjectName(QStringLiteral("registerBtn"));

        horizontalLayout_4->addWidget(registerBtn);

        setPasswordBtn = new QPushButton(widget);
        setPasswordBtn->setObjectName(QStringLiteral("setPasswordBtn"));

        horizontalLayout_4->addWidget(setPasswordBtn);


        verticalLayout->addLayout(horizontalLayout_4);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        lineEditPassword->setText(QString());
        checkBox->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\345\257\206\347\240\201", Q_NULLPTR));
        landBtn->setText(QApplication::translate("MainWindow", "\347\231\273\351\231\206", Q_NULLPTR));
        registerBtn->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", Q_NULLPTR));
        setPasswordBtn->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

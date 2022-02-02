/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QPushButton *on_pushButton_AddrVideoFile_clicked;
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QLabel *label_Time;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *on_pushButton_mute_clicked;
    QPushButton *on_pushButton_pause_clicked;
    QPushButton *on_pushButton_up_clicked;
    QPushButton *on_pushButton_start_clicked;
    QPushButton *on_pushButton_down_clicked;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLabel *label;
    QSlider *horizontalSlider_value;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBox_speed;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_errorinfo;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(593, 304);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 20, 497, 251));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        listWidget = new QListWidget(layoutWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        verticalLayout->addWidget(listWidget);

        on_pushButton_AddrVideoFile_clicked = new QPushButton(layoutWidget);
        on_pushButton_AddrVideoFile_clicked->setObjectName(QStringLiteral("on_pushButton_AddrVideoFile_clicked"));

        verticalLayout->addWidget(on_pushButton_AddrVideoFile_clicked);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setValue(24);

        horizontalLayout->addWidget(progressBar);

        label_Time = new QLabel(layoutWidget);
        label_Time->setObjectName(QStringLiteral("label_Time"));

        horizontalLayout->addWidget(label_Time);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        on_pushButton_mute_clicked = new QPushButton(layoutWidget);
        on_pushButton_mute_clicked->setObjectName(QStringLiteral("on_pushButton_mute_clicked"));

        horizontalLayout_4->addWidget(on_pushButton_mute_clicked);

        on_pushButton_pause_clicked = new QPushButton(layoutWidget);
        on_pushButton_pause_clicked->setObjectName(QStringLiteral("on_pushButton_pause_clicked"));

        horizontalLayout_4->addWidget(on_pushButton_pause_clicked);

        on_pushButton_up_clicked = new QPushButton(layoutWidget);
        on_pushButton_up_clicked->setObjectName(QStringLiteral("on_pushButton_up_clicked"));

        horizontalLayout_4->addWidget(on_pushButton_up_clicked);

        on_pushButton_start_clicked = new QPushButton(layoutWidget);
        on_pushButton_start_clicked->setObjectName(QStringLiteral("on_pushButton_start_clicked"));

        horizontalLayout_4->addWidget(on_pushButton_start_clicked);

        on_pushButton_down_clicked = new QPushButton(layoutWidget);
        on_pushButton_down_clicked->setObjectName(QStringLiteral("on_pushButton_down_clicked"));

        horizontalLayout_4->addWidget(on_pushButton_down_clicked);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSlider_value = new QSlider(layoutWidget);
        horizontalSlider_value->setObjectName(QStringLiteral("horizontalSlider_value"));
        horizontalSlider_value->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_value);


        horizontalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        comboBox_speed = new QComboBox(layoutWidget);
        comboBox_speed->setObjectName(QStringLiteral("comboBox_speed"));

        horizontalLayout_3->addWidget(comboBox_speed);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        horizontalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_5);


        verticalLayout_3->addLayout(verticalLayout_2);

        lineEdit_errorinfo = new QLineEdit(layoutWidget);
        lineEdit_errorinfo->setObjectName(QStringLiteral("lineEdit_errorinfo"));

        verticalLayout_3->addWidget(lineEdit_errorinfo);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        on_pushButton_AddrVideoFile_clicked->setText(QApplication::translate("Widget", "\346\267\273\345\212\240\350\247\206\351\242\221\346\226\207\344\273\266", Q_NULLPTR));
        label_Time->setText(QApplication::translate("Widget", "\346\227\266\351\227\264", Q_NULLPTR));
        on_pushButton_mute_clicked->setText(QApplication::translate("Widget", "\351\235\231\351\237\263", Q_NULLPTR));
        on_pushButton_pause_clicked->setText(QApplication::translate("Widget", "\346\232\202\345\201\234", Q_NULLPTR));
        on_pushButton_up_clicked->setText(QApplication::translate("Widget", "\344\270\212\344\270\200\344\270\252", Q_NULLPTR));
        on_pushButton_start_clicked->setText(QApplication::translate("Widget", "\345\274\200\345\247\213", Q_NULLPTR));
        on_pushButton_down_clicked->setText(QApplication::translate("Widget", "\344\270\213\344\270\200\344\270\252", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "\351\237\263\351\207\217\357\274\232", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "50", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "\346\222\255\346\224\276\351\200\237\347\216\207", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

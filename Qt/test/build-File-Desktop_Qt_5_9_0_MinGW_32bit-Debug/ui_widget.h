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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *readEdit;
    QPushButton *readBtn;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *writeEdit;
    QPushButton *writeBtn;
    QPushButton *clearBtn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(390, 300);
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 20, 303, 260));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        readEdit = new QLineEdit(widget);
        readEdit->setObjectName(QStringLiteral("readEdit"));

        horizontalLayout->addWidget(readEdit);

        readBtn = new QPushButton(widget);
        readBtn->setObjectName(QStringLiteral("readBtn"));

        horizontalLayout->addWidget(readBtn);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        writeEdit = new QLineEdit(widget);
        writeEdit->setObjectName(QStringLiteral("writeEdit"));

        horizontalLayout_2->addWidget(writeEdit);

        writeBtn = new QPushButton(widget);
        writeBtn->setObjectName(QStringLiteral("writeBtn"));

        horizontalLayout_2->addWidget(writeBtn);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);

        clearBtn = new QPushButton(widget);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));

        horizontalLayout_3->addWidget(clearBtn);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        readBtn->setText(QApplication::translate("Widget", "\350\257\273\345\217\226\346\226\207\344\273\266", Q_NULLPTR));
        writeBtn->setText(QApplication::translate("Widget", "\345\206\231\345\205\245\346\226\207\344\273\266", Q_NULLPTR));
        clearBtn->setText(QApplication::translate("Widget", "\346\270\205\347\251\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

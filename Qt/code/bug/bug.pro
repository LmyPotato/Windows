#-------------------------------------------------
#
# Project created by QtCreator 2021-06-27T14:24:17
#
#-------------------------------------------------

QT       += core gui webkitwidgets network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
#                                               \
#                                        webkit\
#                                        webkitwidgets

TARGET = bug
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp

HEADERS  += widget.h

FORMS    += widget.ui

#-------------------------------------------------
#
# Project created by QtCreator 2017-06-07T11:08:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LineFill
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    sprial/sprial.cpp \
    hatchsprial/hatchsprial.cpp

HEADERS  += mainwindow.h \
    sprial/sprial.h \
    hatchsprial/hatchsprial.h

FORMS    += mainwindow.ui

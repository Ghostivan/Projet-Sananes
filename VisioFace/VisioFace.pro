#-------------------------------------------------
#
# Project created by QtCreator 2015-07-07T20:25:32
#
#-------------------------------------------------

QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VisioFace
TEMPLATE = app

RC_FILE = appicon.rc

SOURCES += main.cpp\
        mainwindow.cpp \
    visiofacedb.cpp

HEADERS  += mainwindow.h \
    visiofacedb.h

FORMS    += mainwindow.ui

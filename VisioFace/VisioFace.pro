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

#LIBS += -L"boost/boost/libs/" -lpsapi

SOURCES += main.cpp\
        mainwindow.cpp \
    visiofacedb.cpp \
    formconnectwindows.cpp \
    formsigninwindows.cpp

HEADERS  += mainwindow.h \
    visiofacedb.h \
    formconnectwindows.h \
    formsigninwindows.h

FORMS    += mainwindow.ui \
    formconnectwindows.ui \
    formsigninwindows.ui

#-------------------------------------------------
#
# Project created by QtCreator 2014-08-18T12:42:10
#
#-------------------------------------------------

QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = EEGui
TEMPLATE = app
DESTDIR = ../bin

INCLUDEPATH += . ../include
DEPENDPATH += .
LIBS += ../bin/libEEGReader0.a
LIBS += ../bin/libCPlotLibd1.a

SOURCES += main.cpp \
    EG_Mainwindow.cpp \
    EG_Datastruct.cpp \
    EG_Dataprocess.cpp \
    EG_Headerprocess.cpp

HEADERS  += \
    EG_Mainwindow.h \
    EG_Datastruct.h \
    EG_Dataprocess.h \
    EG_Global.h \
    EG_Headerprocess.h
FORMS    += \
    EG_Mainwindow.ui

MOC_DIR = tmp/moc
RCC_DIR = tmp/rcc
UI_DIR = tmp/ui
OBJECTS_DIR = tmp/obj

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

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h
FORMS    += mainwindow.ui

MOC_DIR = tmp/moc
RCC_DIR = tmp/rcc
UI_DIR = tmp/ui
OBJECTS_DIR = tmp/obj

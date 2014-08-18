#-------------------------------------------------
#
# Project created by QtCreator 2014-08-18T13:59:02
#
#-------------------------------------------------

QT       += sql

TARGET = EEGReader
TEMPLATE = lib
VERSION = 0.0.1
DESTDIR = ../bin

DEFINES += EEGREADER_LIBRARY

INCLUDEPATH += . ../include
DEPENDPATH += .
SOURCES += eegreader.cpp
HEADERS += \
    ../Include/eegreader.h \
    ../Include/eegreader_global.h

MOC_DIR = tmp/moc
RCC_DIR = tmp/rcc
UI_DIR = tmp/ui
OBJECTS_DIR = tmp/obj

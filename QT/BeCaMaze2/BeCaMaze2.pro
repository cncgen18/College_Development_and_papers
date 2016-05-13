#-------------------------------------------------
#
# Project created by QtCreator 2013-12-04T21:40:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BeCaMaze2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../BeCaMaze/BeCaMaze/main.cpp \
    ../BeCaMaze/BeCaMaze/Cell.cpp \
    ../BeCaMaze/BeCaMaze/BeCaMaze.cpp

HEADERS  += mainwindow.h \
    ../BeCaMaze/BeCaMaze/BeCaMaze.h \
    ../BeCaMaze/BeCaMaze/Cell.h

FORMS    += mainwindow.ui

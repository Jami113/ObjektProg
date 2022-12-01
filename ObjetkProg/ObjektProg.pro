#-------------------------------------------------
#
# Project created by QtCreator 2022-06-21T21:39:01
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ObjektProg
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    transition.cpp \
    state.cpp

HEADERS  += dialog.h \
    transition.h \
    state.h

FORMS    += dialog.ui

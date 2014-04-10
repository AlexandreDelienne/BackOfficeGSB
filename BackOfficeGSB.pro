#-------------------------------------------------
#
# Project created by QtCreator 2013-10-17T14:03:27
#
#-------------------------------------------------

QT       += core gui
QT         += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BackOfficeGSB
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    dialogajoutmedicament.cpp \
    dialogconfirmajout.cpp \
    dialogmodifmedicament.cpp \
    dialogajoutpraticien.cpp \
    dialogmodifpraticien.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    dialogajoutmedicament.h \
    dialogconfirmajout.h \
    dialogmodifmedicament.h \
    dialogajoutpraticien.h \
    dialogmodifpraticien.h

FORMS    += mainwindow.ui \
    dialog.ui \
    dialogajoutmedicament.ui \
    dialogconfirmajout.ui \
    dialogmodifmedicament.ui \
    dialogajoutpraticien.ui \
    dialogmodifpraticien.ui

RESOURCES += \
    mesImages.qrc

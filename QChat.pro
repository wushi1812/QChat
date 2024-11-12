#-------------------------------------------------
#
# Project created by QtCreator 2024-07-15T17:20:34
#
#-------------------------------------------------


QT       += core gui network
QT       +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QChat
TEMPLATE = app


CONFIG += c++11
SOURCES += main.cpp\
        mainwidget.cpp \
    messegeitem.cpp \
    chatpop/chatpop.cpp \
    frienditem.cpp \
    Buddy/personlistbuddy.cpp \
    personlist.cpp \
    chat.cpp \
    logindialog.cpp \
    dataitem.cpp \
    allhistoryitem.cpp \
    senddatathread.cpp \
    sendiconsthread.cpp

HEADERS  += mainwidget.h \
    messegeitem.h \
    chatpop/chatpop.h \
    frienditem.h \
    Buddy/personlistbuddy.h \
    personlist.h \
    chat.h \
    logindialog.h \
    connect/connection.h \
    dataitem.h \
    allhistoryitem.h \
    senddatathread.h \
    sendiconsthread.h

FORMS    += mainwidget.ui \
    messegeitem.ui \
    frienditem.ui \
    logindialog.ui \
    chat.ui \
    dataitem.ui \
    allhistoryitem.ui

RESOURCES += \
    resource.qrc

DISTFILES +=

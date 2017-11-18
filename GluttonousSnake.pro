#-------------------------------------------------
#
# Project created by QtCreator 2017-06-07T19:17:51
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia multimediawidgets
QT       += core
CONFIG   += mobility
MOBILITY += multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GluttonousSnake
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    gamewidget.cpp \
    initigame.cpp \
    paint.cpp \
    newsnake.cpp \
    setfood.cpp \
    keyyinput.cpp \
    death.cpp \
    overgame.cpp \
    stopgame.cpp

HEADERS  += widget.h \
    gamewidget.h

FORMS    += widget.ui

RESOURCES += \
    images.qrc

DISTFILES += \
    text.qml

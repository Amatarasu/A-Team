#-------------------------------------------------
#
# Project created by QtCreator 2016-03-03T00:03:16
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TicTacToe
TEMPLATE = app


SOURCES += main.cpp\
        maintictactoe.cpp \
    loginscene.cpp \
    registrationscene.cpp \
    gameboard.cpp

HEADERS  += maintictactoe.h \
    loginscene.h \
    registrationscene.h \
    gameboard.h

FORMS    += maintictactoe.ui \
    loginscene.ui \
    registrationscene.ui \
    gameboard.ui

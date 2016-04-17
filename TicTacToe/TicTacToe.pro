#-------------------------------------------------
#
# Project created by QtCreator 2016-03-03T00:03:16
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TicTacToe
TEMPLATE = app
CONFIG += c++11


SOURCES += main.cpp\
        maintictactoe.cpp \
    loginscene.cpp \
    registrationscene.cpp \
    resetpassword.cpp \
    difficultylevel.cpp \
    gameboard.cpp \
    gameoption.cpp \
    gamemode.cpp \
    playergameoptions.cpp \
    aiclass.cpp \
    user.cpp \

HEADERS  += maintictactoe.h \
    loginscene.h \
    registrationscene.h \
    resetpassword.h \
    difficultylevel.h \
    gameboard.h \
    gameoption.h \
    gamemode.h \
    playergameoptions.h \
    aiclass.h \
    user.h \

FORMS    += maintictactoe.ui \
    loginscene.ui \
    registrationscene.ui \
    resetpassword.ui \
    difficultylevel.ui \
    gameoption.ui \
    gamemode.ui \
    gameboard.ui \
    playergameoptions.ui

RESOURCES += \
    resources.qrc

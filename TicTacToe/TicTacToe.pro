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
    resetpassword.cpp \
    difficultylevel.cpp \
    gameoption.cpp \
    gamemode.cpp \
    playergameoptions.cpp \
    aiclass.cpp

HEADERS  += maintictactoe.h \
    loginscene.h \
    registrationscene.h \
    resetpassword.h \
    difficultylevel.h \
    gameoption.h \
    gamemode.h \
    playergameoptions.h \
    aiclass.h

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

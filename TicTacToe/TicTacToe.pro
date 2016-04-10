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
    gameboard.cpp \
    gameoption.cpp \
    gamemode.cpp \
    playergameoptions.cpp \
<<<<<<< HEAD
    ai.cpp
=======
    aiclass.cpp
>>>>>>> f18411fdb814423bdb7cc624709c03426c3a7447

HEADERS  += maintictactoe.h \
    loginscene.h \
    registrationscene.h \
    resetpassword.h \
    difficultylevel.h \
    gameboard.h \
    gameoption.h \
    gamemode.h \
    playergameoptions.h \
<<<<<<< HEAD
    ai.h
=======
    aiclass.h
>>>>>>> f18411fdb814423bdb7cc624709c03426c3a7447

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

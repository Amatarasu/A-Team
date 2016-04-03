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
    playergameoptions.cpp

HEADERS  += maintictactoe.h \
    loginscene.h \
    registrationscene.h \
    resetpassword.h \
    difficultylevel.h \
    gameboard.h \
    gameoption.h \
    gamemode.h \
    playergameoptions.h

FORMS    += maintictactoe.ui \
    loginscene.ui \
    registrationscene.ui \
    resetpassword.ui \
    difficultylevel.ui \
    gameoption.ui \
    gamemode.ui \
<<<<<<< HEAD
    gameboard.ui

RESOURCES += \
<<<<<<< HEAD
    sources.qrc
=======
    resources.qrc
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
    gameboard.ui \
    playergameoptions.ui

RESOURCES += \
    resources.qrc
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b

/********************************************************************************
** Form generated from reading UI file 'maintictactoe.ui'
**
<<<<<<< HEAD
<<<<<<< HEAD
** Created by: Qt User Interface Compiler version 5.2.1
=======
** Created by: Qt User Interface Compiler version 5.4.2
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
** Created by: Qt User Interface Compiler version 5.2.1
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTICTACTOE_H
#define UI_MAINTICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
<<<<<<< HEAD
#include <QtWidgets/QFrame>
=======
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
<<<<<<< HEAD
=======
#include <QtWidgets/QSplitter>
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainTicTacToe
{
public:
    QWidget *centralWidget;
<<<<<<< HEAD
    QFrame *frame;
    QPushButton *loginButton;
    QPushButton *playAsGuess;
=======
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
    QLabel *GAMETITLE;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *helpButton;
    QPushButton *signUpButton;
    QPushButton *passwordResetButton;
    QPushButton *quitButton;
<<<<<<< HEAD
=======
    QSplitter *splitter;
    QPushButton *loginButton;
    QPushButton *playAsGuest;
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainTicTacToe)
    {
        if (mainTicTacToe->objectName().isEmpty())
            mainTicTacToe->setObjectName(QStringLiteral("mainTicTacToe"));
<<<<<<< HEAD
        mainTicTacToe->resize(658, 507);
        centralWidget = new QWidget(mainTicTacToe);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(160, 100, 321, 281));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        loginButton = new QPushButton(frame);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(100, 150, 93, 28));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        loginButton->setFont(font);
        playAsGuess = new QPushButton(frame);
        playAsGuess->setObjectName(QStringLiteral("playAsGuess"));
        playAsGuess->setGeometry(QRect(100, 210, 93, 28));
        playAsGuess->setFont(font);
        GAMETITLE = new QLabel(centralWidget);
        GAMETITLE->setObjectName(QStringLiteral("GAMETITLE"));
        GAMETITLE->setGeometry(QRect(170, 40, 281, 41));
        GAMETITLE->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 410, 431, 30));
=======
        mainTicTacToe->resize(604, 561);
        centralWidget = new QWidget(mainTicTacToe);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        GAMETITLE = new QLabel(centralWidget);
        GAMETITLE->setObjectName(QStringLiteral("GAMETITLE"));
        GAMETITLE->setGeometry(QRect(240, 40, 281, 41));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        GAMETITLE->setFont(font);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 400, 431, 30));
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        helpButton = new QPushButton(layoutWidget);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        helpButton->setFont(font);
        helpButton->setMouseTracking(true);

        horizontalLayout->addWidget(helpButton);

        signUpButton = new QPushButton(layoutWidget);
        signUpButton->setObjectName(QStringLiteral("signUpButton"));
        signUpButton->setFont(font);

        horizontalLayout->addWidget(signUpButton);

        passwordResetButton = new QPushButton(layoutWidget);
        passwordResetButton->setObjectName(QStringLiteral("passwordResetButton"));
        passwordResetButton->setFont(font);

        horizontalLayout->addWidget(passwordResetButton);

        quitButton = new QPushButton(layoutWidget);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setFont(font);

        horizontalLayout->addWidget(quitButton);

<<<<<<< HEAD
        mainTicTacToe->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainTicTacToe);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 658, 21));
=======
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(240, 200, 141, 81));
        splitter->setOrientation(Qt::Vertical);
        loginButton = new QPushButton(splitter);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setFont(font);
        splitter->addWidget(loginButton);
        playAsGuest = new QPushButton(splitter);
        playAsGuest->setObjectName(QStringLiteral("playAsGuest"));
        playAsGuest->setFont(font);
        splitter->addWidget(playAsGuest);
        mainTicTacToe->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainTicTacToe);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 604, 26));
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
        mainTicTacToe->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainTicTacToe);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainTicTacToe->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainTicTacToe);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mainTicTacToe->setStatusBar(statusBar);

        retranslateUi(mainTicTacToe);

        QMetaObject::connectSlotsByName(mainTicTacToe);
    } // setupUi

    void retranslateUi(QMainWindow *mainTicTacToe)
    {
<<<<<<< HEAD
        mainTicTacToe->setWindowTitle(QApplication::translate("mainTicTacToe", "mainTicTacToe", 0));
        loginButton->setText(QApplication::translate("mainTicTacToe", "Log In", 0));
        playAsGuess->setText(QApplication::translate("mainTicTacToe", "Guest", 0));
=======
        mainTicTacToe->setWindowTitle(QApplication::translate("mainTicTacToe", "Main Menu", 0));
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
        GAMETITLE->setText(QApplication::translate("mainTicTacToe", "TIC TAC TOE", 0));
        helpButton->setText(QApplication::translate("mainTicTacToe", "Help Button", 0));
        signUpButton->setText(QApplication::translate("mainTicTacToe", "Sign up", 0));
        passwordResetButton->setText(QApplication::translate("mainTicTacToe", "Forgot Password ?", 0));
        quitButton->setText(QApplication::translate("mainTicTacToe", "Quit", 0));
<<<<<<< HEAD
=======
        loginButton->setText(QApplication::translate("mainTicTacToe", "Log In", 0));
        playAsGuest->setText(QApplication::translate("mainTicTacToe", "Guest", 0));
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
    } // retranslateUi

};

namespace Ui {
    class mainTicTacToe: public Ui_mainTicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTICTACTOE_H

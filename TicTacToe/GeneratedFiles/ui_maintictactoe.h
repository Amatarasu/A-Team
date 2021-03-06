/********************************************************************************
** Form generated from reading UI file 'maintictactoe.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTICTACTOE_H
#define UI_MAINTICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainTicTacToe
{
public:
    QWidget *centralWidget;
    QLabel *GAMETITLE;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *helpButton;
    QPushButton *signUpButton;
    QPushButton *passwordResetButton;
    QPushButton *quitButton;
    QSplitter *splitter;
    QPushButton *loginButton;
    QPushButton *playAsGuest;
    QPushButton *btnStat;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainTicTacToe)
    {
        if (mainTicTacToe->objectName().isEmpty())
            mainTicTacToe->setObjectName(QStringLiteral("mainTicTacToe"));
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
        btnStat = new QPushButton(centralWidget);
        btnStat->setObjectName(QStringLiteral("btnStat"));
        btnStat->setGeometry(QRect(240, 290, 141, 37));
        btnStat->setFont(font);
        mainTicTacToe->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainTicTacToe);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 604, 27));
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
        mainTicTacToe->setWindowTitle(QApplication::translate("mainTicTacToe", "Main Menu", 0));
        GAMETITLE->setText(QApplication::translate("mainTicTacToe", "TIC TAC TOE", 0));
        helpButton->setText(QApplication::translate("mainTicTacToe", "Help Button", 0));
        signUpButton->setText(QApplication::translate("mainTicTacToe", "Sign up", 0));
        passwordResetButton->setText(QApplication::translate("mainTicTacToe", "Forgot Password ?", 0));
        quitButton->setText(QApplication::translate("mainTicTacToe", "Quit", 0));
        loginButton->setText(QApplication::translate("mainTicTacToe", "Log In", 0));
        playAsGuest->setText(QApplication::translate("mainTicTacToe", "Guest", 0));
        btnStat->setText(QApplication::translate("mainTicTacToe", "Statistics", 0));
    } // retranslateUi

};

namespace Ui {
    class mainTicTacToe: public Ui_mainTicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTICTACTOE_H

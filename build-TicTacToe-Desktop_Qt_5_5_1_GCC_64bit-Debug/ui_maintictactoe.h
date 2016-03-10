/********************************************************************************
** Form generated from reading UI file 'maintictactoe.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINTICTACTOE_H
#define UI_MAINTICTACTOE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainTicTacToe
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QPushButton *loginButton;
    QPushButton *playAsGuess;
    QLabel *GAMETITLE;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *helpButton;
    QPushButton *signUpButton;
    QPushButton *passwordResetButton;
    QPushButton *quitButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainTicTacToe)
    {
        if (mainTicTacToe->objectName().isEmpty())
            mainTicTacToe->setObjectName(QStringLiteral("mainTicTacToe"));
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
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 410, 431, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        helpButton = new QPushButton(widget);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        helpButton->setFont(font);
        helpButton->setMouseTracking(true);

        horizontalLayout->addWidget(helpButton);

        signUpButton = new QPushButton(widget);
        signUpButton->setObjectName(QStringLiteral("signUpButton"));
        signUpButton->setFont(font);

        horizontalLayout->addWidget(signUpButton);

        passwordResetButton = new QPushButton(widget);
        passwordResetButton->setObjectName(QStringLiteral("passwordResetButton"));
        passwordResetButton->setFont(font);

        horizontalLayout->addWidget(passwordResetButton);

        quitButton = new QPushButton(widget);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setFont(font);

        horizontalLayout->addWidget(quitButton);

        mainTicTacToe->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mainTicTacToe);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 658, 26));
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
        mainTicTacToe->setWindowTitle(QApplication::translate("mainTicTacToe", "mainTicTacToe", 0));
        loginButton->setText(QApplication::translate("mainTicTacToe", "Log In", 0));
        playAsGuess->setText(QApplication::translate("mainTicTacToe", "Guest", 0));
        GAMETITLE->setText(QApplication::translate("mainTicTacToe", "TIC TAC TOE", 0));
        helpButton->setText(QApplication::translate("mainTicTacToe", "Help Button", 0));
        signUpButton->setText(QApplication::translate("mainTicTacToe", "Sign up", 0));
        passwordResetButton->setText(QApplication::translate("mainTicTacToe", "Forgot Password ?", 0));
        quitButton->setText(QApplication::translate("mainTicTacToe", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class mainTicTacToe: public Ui_mainTicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTICTACTOE_H

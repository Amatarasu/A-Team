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
    QFrame *frame;
    QPushButton *playAsGuess;
    QPushButton *loginButton;
    QPushButton *passwordResetButton;
    QLabel *GAMETITLE;
    QLabel *label_2;
    QSplitter *splitter;
    QPushButton *helpButton;
    QPushButton *signUpButton;
    QPushButton *quitButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainTicTacToe)
    {
        if (mainTicTacToe->objectName().isEmpty())
            mainTicTacToe->setObjectName(QStringLiteral("mainTicTacToe"));
        mainTicTacToe->resize(585, 534);
        mainTicTacToe->setMouseTracking(true);
        mainTicTacToe->setAutoFillBackground(true);
        mainTicTacToe->setDocumentMode(true);
        mainTicTacToe->setDockNestingEnabled(true);
        mainTicTacToe->setUnifiedTitleAndToolBarOnMac(true);
        centralWidget = new QWidget(mainTicTacToe);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(30, 230, 521, 171));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        playAsGuess = new QPushButton(frame);
        playAsGuess->setObjectName(QStringLiteral("playAsGuess"));
        playAsGuess->setGeometry(QRect(170, 120, 181, 28));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        playAsGuess->setFont(font);
        loginButton = new QPushButton(frame);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(170, 20, 181, 28));
        loginButton->setFont(font);
        passwordResetButton = new QPushButton(frame);
        passwordResetButton->setObjectName(QStringLiteral("passwordResetButton"));
        passwordResetButton->setGeometry(QRect(170, 70, 181, 28));
        passwordResetButton->setFont(font);
        GAMETITLE = new QLabel(centralWidget);
        GAMETITLE->setObjectName(QStringLiteral("GAMETITLE"));
        GAMETITLE->setGeometry(QRect(190, 170, 228, 43));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush1);
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush1);
        GAMETITLE->setPalette(palette);
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        GAMETITLE->setFont(font1);
        GAMETITLE->setCursor(QCursor(Qt::ArrowCursor));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 10, 571, 451));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(21, 414, 541, 28));
        splitter->setOrientation(Qt::Horizontal);
        helpButton = new QPushButton(splitter);
        helpButton->setObjectName(QStringLiteral("helpButton"));
        helpButton->setFont(font);
        helpButton->setMouseTracking(true);
        splitter->addWidget(helpButton);
        signUpButton = new QPushButton(splitter);
        signUpButton->setObjectName(QStringLiteral("signUpButton"));
        signUpButton->setFont(font);
        splitter->addWidget(signUpButton);
        quitButton = new QPushButton(splitter);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setFont(font);
        splitter->addWidget(quitButton);
        mainTicTacToe->setCentralWidget(centralWidget);
        label_2->raise();
        frame->raise();
        GAMETITLE->raise();
        menuBar = new QMenuBar(mainTicTacToe);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 585, 26));
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
        playAsGuess->setText(QApplication::translate("mainTicTacToe", "Guest", 0));
        loginButton->setText(QApplication::translate("mainTicTacToe", "Log In", 0));
        passwordResetButton->setText(QApplication::translate("mainTicTacToe", "Forgot Password ?", 0));
        GAMETITLE->setText(QApplication::translate("mainTicTacToe", "TIC TAC TOE", 0));
        label_2->setText(QString());
        helpButton->setText(QApplication::translate("mainTicTacToe", "Help Button", 0));
        signUpButton->setText(QApplication::translate("mainTicTacToe", "Sign up", 0));
        quitButton->setText(QApplication::translate("mainTicTacToe", "Quit", 0));
    } // retranslateUi

};

namespace Ui {
    class mainTicTacToe: public Ui_mainTicTacToe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINTICTACTOE_H

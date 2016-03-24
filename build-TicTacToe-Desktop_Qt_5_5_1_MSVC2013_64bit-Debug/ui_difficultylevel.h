/********************************************************************************
** Form generated from reading UI file 'difficultylevel.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIFFICULTYLEVEL_H
#define UI_DIFFICULTYLEVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_difficultyLevel
{
public:
    QLabel *playerMenu;
    QPushButton *logOutButton;
    QLabel *gameModeLabel;
    QSplitter *splitter;
    QPushButton *exitButton;
    QPushButton *difficultyHelpButton;
    QSplitter *splitter_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *difficultyLevel)
    {
        if (difficultyLevel->objectName().isEmpty())
            difficultyLevel->setObjectName(QStringLiteral("difficultyLevel"));
        difficultyLevel->resize(647, 561);
        playerMenu = new QLabel(difficultyLevel);
        playerMenu->setObjectName(QStringLiteral("playerMenu"));
        playerMenu->setGeometry(QRect(30, 30, 101, 19));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        playerMenu->setFont(font);
        logOutButton = new QPushButton(difficultyLevel);
        logOutButton->setObjectName(QStringLiteral("logOutButton"));
        logOutButton->setGeometry(QRect(442, 20, 151, 41));
        logOutButton->setFont(font);
        gameModeLabel = new QLabel(difficultyLevel);
        gameModeLabel->setObjectName(QStringLiteral("gameModeLabel"));
        gameModeLabel->setGeometry(QRect(150, 190, 315, 39));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        gameModeLabel->setFont(font1);
        splitter = new QSplitter(difficultyLevel);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(40, 470, 561, 28));
        splitter->setOrientation(Qt::Horizontal);
        exitButton = new QPushButton(splitter);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        splitter->addWidget(exitButton);
        difficultyHelpButton = new QPushButton(splitter);
        difficultyHelpButton->setObjectName(QStringLiteral("difficultyHelpButton"));
        splitter->addWidget(difficultyHelpButton);
        splitter_2 = new QSplitter(difficultyLevel);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(190, 250, 241, 181));
        splitter_2->setOrientation(Qt::Vertical);
        pushButton = new QPushButton(splitter_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        splitter_2->addWidget(pushButton);
        pushButton_2 = new QPushButton(splitter_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        splitter_2->addWidget(pushButton_2);
        pushButton_3 = new QPushButton(splitter_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        splitter_2->addWidget(pushButton_3);

        retranslateUi(difficultyLevel);

        QMetaObject::connectSlotsByName(difficultyLevel);
    } // setupUi

    void retranslateUi(QDialog *difficultyLevel)
    {
        difficultyLevel->setWindowTitle(QApplication::translate("difficultyLevel", "Dialog", 0));
        playerMenu->setText(QApplication::translate("difficultyLevel", "Player Menu", 0));
        logOutButton->setText(QApplication::translate("difficultyLevel", "Log Out", 0));
        gameModeLabel->setText(QApplication::translate("difficultyLevel", "Choose Game Mode", 0));
        exitButton->setText(QApplication::translate("difficultyLevel", "Exit", 0));
        difficultyHelpButton->setText(QApplication::translate("difficultyLevel", "Help", 0));
        pushButton->setText(QApplication::translate("difficultyLevel", "Easy", 0));
        pushButton_2->setText(QApplication::translate("difficultyLevel", "Median", 0));
        pushButton_3->setText(QApplication::translate("difficultyLevel", "Hard", 0));
    } // retranslateUi

};

namespace Ui {
    class difficultyLevel: public Ui_difficultyLevel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFICULTYLEVEL_H

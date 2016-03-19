/********************************************************************************
** Form generated from reading UI file 'difficultylevel.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
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
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_difficultyLevel
{
public:
    QLabel *playerMenu;
    QPushButton *logOutButton;
    QLabel *gameModeLabel;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *exitButton;
    QPushButton *playGameButton;
    QPushButton *difficultyHelpButton;

    void setupUi(QDialog *difficultyLevel)
    {
        if (difficultyLevel->objectName().isEmpty())
            difficultyLevel->setObjectName(QStringLiteral("difficultyLevel"));
        difficultyLevel->resize(647, 561);
        playerMenu = new QLabel(difficultyLevel);
        playerMenu->setObjectName(QStringLiteral("playerMenu"));
        playerMenu->setGeometry(QRect(30, 30, 91, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        playerMenu->setFont(font);
        logOutButton = new QPushButton(difficultyLevel);
        logOutButton->setObjectName(QStringLiteral("logOutButton"));
        logOutButton->setGeometry(QRect(500, 20, 93, 28));
        logOutButton->setFont(font);
        gameModeLabel = new QLabel(difficultyLevel);
        gameModeLabel->setObjectName(QStringLiteral("gameModeLabel"));
        gameModeLabel->setGeometry(QRect(230, 170, 191, 20));
        gameModeLabel->setFont(font);
        radioButton = new QRadioButton(difficultyLevel);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(230, 240, 95, 20));
        radioButton_2 = new QRadioButton(difficultyLevel);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(230, 290, 95, 20));
        radioButton_3 = new QRadioButton(difficultyLevel);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(230, 350, 95, 20));
        exitButton = new QPushButton(difficultyLevel);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(40, 470, 93, 28));
        playGameButton = new QPushButton(difficultyLevel);
        playGameButton->setObjectName(QStringLiteral("playGameButton"));
        playGameButton->setGeometry(QRect(260, 470, 93, 28));
        difficultyHelpButton = new QPushButton(difficultyLevel);
        difficultyHelpButton->setObjectName(QStringLiteral("difficultyHelpButton"));
        difficultyHelpButton->setGeometry(QRect(490, 470, 93, 28));

        retranslateUi(difficultyLevel);

        QMetaObject::connectSlotsByName(difficultyLevel);
    } // setupUi

    void retranslateUi(QDialog *difficultyLevel)
    {
        difficultyLevel->setWindowTitle(QApplication::translate("difficultyLevel", "Dialog", 0));
        playerMenu->setText(QApplication::translate("difficultyLevel", "Player Menu", 0));
        logOutButton->setText(QApplication::translate("difficultyLevel", "Log Out", 0));
        gameModeLabel->setText(QApplication::translate("difficultyLevel", "Choose Game Mode", 0));
        radioButton->setText(QApplication::translate("difficultyLevel", "EASY", 0));
        radioButton_2->setText(QApplication::translate("difficultyLevel", "MEDIUM", 0));
        radioButton_3->setText(QApplication::translate("difficultyLevel", "HARD", 0));
        exitButton->setText(QApplication::translate("difficultyLevel", "Exit", 0));
        playGameButton->setText(QApplication::translate("difficultyLevel", "Play", 0));
        difficultyHelpButton->setText(QApplication::translate("difficultyLevel", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class difficultyLevel: public Ui_difficultyLevel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFICULTYLEVEL_H

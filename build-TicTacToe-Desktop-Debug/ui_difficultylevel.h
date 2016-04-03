/********************************************************************************
** Form generated from reading UI file 'difficultylevel.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
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
<<<<<<< HEAD
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QPushButton *exitButton;
    QPushButton *playGameButton;
    QPushButton *difficultyHelpButton;
<<<<<<< HEAD
=======
    QPushButton *playGameButton_2;
    QPushButton *playGameButton_3;
    QPushButton *playGameButton_4;
    QPushButton *playGameButton_5;
    QPushButton *playGameButton_6;
    QPushButton *playGameButton_7;
    QPushButton *playGameButton_8;
    QPushButton *playGameButton_9;
    QPushButton *playGameButton_10;
    QPushButton *playGameButton_11;
    QPushButton *playGameButton_12;
    QPushButton *playGameButton_13;
    QPushButton *playGameButton_14;
    QPushButton *playGameButton_15;
    QPushButton *playGameButton_16;
    QPushButton *playGameButton_17;
    QPushButton *playGameButton_18;
    QPushButton *playGameButton_19;
    QPushButton *playGameButton_20;
    QPushButton *playGameButton_21;
    QPushButton *playGameButton_22;
    QPushButton *playGameButton_23;
    QPushButton *playGameButton_24;
    QPushButton *playGameButton_25;
    QPushButton *playGameButton_26;
    QPushButton *playGameButton_27;
    QPushButton *playGameButton_28;
    QPushButton *playGameButton_29;
    QPushButton *playGameButton_30;
    QPushButton *playGameButton_31;
    QPushButton *playGameButton_32;
    QPushButton *playGameButton_33;
    QPushButton *playGameButton_34;
    QPushButton *playGameButton_35;
    QPushButton *playGameButton_36;
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
    QRadioButton *easyButton;
    QRadioButton *mediumButton;
    QRadioButton *hardButton;
    QPushButton *exitButton;
    QPushButton *playGameButton;
    QPushButton *difficultyHelpButton;
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b

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
<<<<<<< HEAD
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
<<<<<<< HEAD
=======
        playGameButton_2 = new QPushButton(difficultyLevel);
        playGameButton_2->setObjectName(QStringLiteral("playGameButton_2"));
        playGameButton_2->setGeometry(QRect(220, 100, 93, 28));
        playGameButton_3 = new QPushButton(difficultyLevel);
        playGameButton_3->setObjectName(QStringLiteral("playGameButton_3"));
        playGameButton_3->setGeometry(QRect(230, 110, 93, 28));
        playGameButton_4 = new QPushButton(difficultyLevel);
        playGameButton_4->setObjectName(QStringLiteral("playGameButton_4"));
        playGameButton_4->setGeometry(QRect(240, 120, 93, 28));
        playGameButton_5 = new QPushButton(difficultyLevel);
        playGameButton_5->setObjectName(QStringLiteral("playGameButton_5"));
        playGameButton_5->setGeometry(QRect(250, 130, 93, 28));
        playGameButton_6 = new QPushButton(difficultyLevel);
        playGameButton_6->setObjectName(QStringLiteral("playGameButton_6"));
        playGameButton_6->setGeometry(QRect(260, 140, 93, 28));
        playGameButton_7 = new QPushButton(difficultyLevel);
        playGameButton_7->setObjectName(QStringLiteral("playGameButton_7"));
        playGameButton_7->setGeometry(QRect(290, 170, 93, 28));
        playGameButton_8 = new QPushButton(difficultyLevel);
        playGameButton_8->setObjectName(QStringLiteral("playGameButton_8"));
        playGameButton_8->setGeometry(QRect(300, 180, 93, 28));
        playGameButton_9 = new QPushButton(difficultyLevel);
        playGameButton_9->setObjectName(QStringLiteral("playGameButton_9"));
        playGameButton_9->setGeometry(QRect(310, 190, 93, 28));
        playGameButton_10 = new QPushButton(difficultyLevel);
        playGameButton_10->setObjectName(QStringLiteral("playGameButton_10"));
        playGameButton_10->setGeometry(QRect(320, 200, 93, 28));
        playGameButton_11 = new QPushButton(difficultyLevel);
        playGameButton_11->setObjectName(QStringLiteral("playGameButton_11"));
        playGameButton_11->setGeometry(QRect(330, 210, 93, 28));
        playGameButton_12 = new QPushButton(difficultyLevel);
        playGameButton_12->setObjectName(QStringLiteral("playGameButton_12"));
        playGameButton_12->setGeometry(QRect(340, 220, 93, 28));
        playGameButton_13 = new QPushButton(difficultyLevel);
        playGameButton_13->setObjectName(QStringLiteral("playGameButton_13"));
        playGameButton_13->setGeometry(QRect(350, 230, 93, 28));
        playGameButton_14 = new QPushButton(difficultyLevel);
        playGameButton_14->setObjectName(QStringLiteral("playGameButton_14"));
        playGameButton_14->setGeometry(QRect(360, 240, 93, 28));
        playGameButton_15 = new QPushButton(difficultyLevel);
        playGameButton_15->setObjectName(QStringLiteral("playGameButton_15"));
        playGameButton_15->setGeometry(QRect(370, 250, 93, 28));
        playGameButton_16 = new QPushButton(difficultyLevel);
        playGameButton_16->setObjectName(QStringLiteral("playGameButton_16"));
        playGameButton_16->setGeometry(QRect(380, 260, 93, 28));
        playGameButton_17 = new QPushButton(difficultyLevel);
        playGameButton_17->setObjectName(QStringLiteral("playGameButton_17"));
        playGameButton_17->setGeometry(QRect(390, 270, 93, 28));
        playGameButton_18 = new QPushButton(difficultyLevel);
        playGameButton_18->setObjectName(QStringLiteral("playGameButton_18"));
        playGameButton_18->setGeometry(QRect(400, 280, 93, 28));
        playGameButton_19 = new QPushButton(difficultyLevel);
        playGameButton_19->setObjectName(QStringLiteral("playGameButton_19"));
        playGameButton_19->setGeometry(QRect(410, 290, 93, 28));
        playGameButton_20 = new QPushButton(difficultyLevel);
        playGameButton_20->setObjectName(QStringLiteral("playGameButton_20"));
        playGameButton_20->setGeometry(QRect(420, 300, 93, 28));
        playGameButton_21 = new QPushButton(difficultyLevel);
        playGameButton_21->setObjectName(QStringLiteral("playGameButton_21"));
        playGameButton_21->setGeometry(QRect(430, 310, 93, 28));
        playGameButton_22 = new QPushButton(difficultyLevel);
        playGameButton_22->setObjectName(QStringLiteral("playGameButton_22"));
        playGameButton_22->setGeometry(QRect(440, 320, 93, 28));
        playGameButton_23 = new QPushButton(difficultyLevel);
        playGameButton_23->setObjectName(QStringLiteral("playGameButton_23"));
        playGameButton_23->setGeometry(QRect(450, 330, 93, 28));
        playGameButton_24 = new QPushButton(difficultyLevel);
        playGameButton_24->setObjectName(QStringLiteral("playGameButton_24"));
        playGameButton_24->setGeometry(QRect(460, 340, 93, 28));
        playGameButton_25 = new QPushButton(difficultyLevel);
        playGameButton_25->setObjectName(QStringLiteral("playGameButton_25"));
        playGameButton_25->setGeometry(QRect(470, 350, 93, 28));
        playGameButton_26 = new QPushButton(difficultyLevel);
        playGameButton_26->setObjectName(QStringLiteral("playGameButton_26"));
        playGameButton_26->setGeometry(QRect(480, 360, 93, 28));
        playGameButton_27 = new QPushButton(difficultyLevel);
        playGameButton_27->setObjectName(QStringLiteral("playGameButton_27"));
        playGameButton_27->setGeometry(QRect(490, 370, 93, 28));
        playGameButton_28 = new QPushButton(difficultyLevel);
        playGameButton_28->setObjectName(QStringLiteral("playGameButton_28"));
        playGameButton_28->setGeometry(QRect(500, 380, 93, 28));
        playGameButton_29 = new QPushButton(difficultyLevel);
        playGameButton_29->setObjectName(QStringLiteral("playGameButton_29"));
        playGameButton_29->setGeometry(QRect(510, 390, 93, 28));
        playGameButton_30 = new QPushButton(difficultyLevel);
        playGameButton_30->setObjectName(QStringLiteral("playGameButton_30"));
        playGameButton_30->setGeometry(QRect(520, 400, 93, 28));
        playGameButton_31 = new QPushButton(difficultyLevel);
        playGameButton_31->setObjectName(QStringLiteral("playGameButton_31"));
        playGameButton_31->setGeometry(QRect(530, 410, 93, 28));
        playGameButton_32 = new QPushButton(difficultyLevel);
        playGameButton_32->setObjectName(QStringLiteral("playGameButton_32"));
        playGameButton_32->setGeometry(QRect(540, 420, 93, 28));
        playGameButton_33 = new QPushButton(difficultyLevel);
        playGameButton_33->setObjectName(QStringLiteral("playGameButton_33"));
        playGameButton_33->setGeometry(QRect(550, 430, 93, 28));
        playGameButton_34 = new QPushButton(difficultyLevel);
        playGameButton_34->setObjectName(QStringLiteral("playGameButton_34"));
        playGameButton_34->setGeometry(QRect(560, 440, 93, 28));
        playGameButton_35 = new QPushButton(difficultyLevel);
        playGameButton_35->setObjectName(QStringLiteral("playGameButton_35"));
        playGameButton_35->setGeometry(QRect(560, 440, 93, 28));
        playGameButton_36 = new QPushButton(difficultyLevel);
        playGameButton_36->setObjectName(QStringLiteral("playGameButton_36"));
        playGameButton_36->setGeometry(QRect(560, 440, 93, 28));
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
        easyButton = new QRadioButton(difficultyLevel);
        easyButton->setObjectName(QStringLiteral("easyButton"));
        easyButton->setGeometry(QRect(230, 240, 95, 20));
        easyButton->setFont(font);
        mediumButton = new QRadioButton(difficultyLevel);
        mediumButton->setObjectName(QStringLiteral("mediumButton"));
        mediumButton->setGeometry(QRect(230, 290, 95, 20));
        mediumButton->setFont(font);
        hardButton = new QRadioButton(difficultyLevel);
        hardButton->setObjectName(QStringLiteral("hardButton"));
        hardButton->setGeometry(QRect(230, 350, 95, 20));
        hardButton->setFont(font);
        exitButton = new QPushButton(difficultyLevel);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(40, 470, 93, 28));
        exitButton->setFont(font);
        playGameButton = new QPushButton(difficultyLevel);
        playGameButton->setObjectName(QStringLiteral("playGameButton"));
        playGameButton->setGeometry(QRect(260, 470, 93, 28));
        playGameButton->setFont(font);
        difficultyHelpButton = new QPushButton(difficultyLevel);
        difficultyHelpButton->setObjectName(QStringLiteral("difficultyHelpButton"));
        difficultyHelpButton->setGeometry(QRect(490, 470, 93, 28));
        difficultyHelpButton->setFont(font);
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b

        retranslateUi(difficultyLevel);

        QMetaObject::connectSlotsByName(difficultyLevel);
    } // setupUi

    void retranslateUi(QDialog *difficultyLevel)
    {
        difficultyLevel->setWindowTitle(QApplication::translate("difficultyLevel", "Dialog", 0));
        playerMenu->setText(QApplication::translate("difficultyLevel", "Player Menu", 0));
        logOutButton->setText(QApplication::translate("difficultyLevel", "Log Out", 0));
        gameModeLabel->setText(QApplication::translate("difficultyLevel", "Choose Game Mode", 0));
<<<<<<< HEAD
        radioButton->setText(QApplication::translate("difficultyLevel", "EASY", 0));
        radioButton_2->setText(QApplication::translate("difficultyLevel", "MEDIUM", 0));
        radioButton_3->setText(QApplication::translate("difficultyLevel", "HARD", 0));
        exitButton->setText(QApplication::translate("difficultyLevel", "Exit", 0));
        playGameButton->setText(QApplication::translate("difficultyLevel", "Play", 0));
        difficultyHelpButton->setText(QApplication::translate("difficultyLevel", "Help", 0));
<<<<<<< HEAD
=======
        playGameButton_2->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_3->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_4->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_5->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_6->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_7->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_8->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_9->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_10->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_11->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_12->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_13->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_14->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_15->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_16->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_17->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_18->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_19->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_20->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_21->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_22->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_23->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_24->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_25->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_26->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_27->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_28->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_29->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_30->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_31->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_32->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_33->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_34->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_35->setText(QApplication::translate("difficultyLevel", "Play", 0));
        playGameButton_36->setText(QApplication::translate("difficultyLevel", "Play", 0));
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
=======
        easyButton->setText(QApplication::translate("difficultyLevel", "EASY", 0));
        mediumButton->setText(QApplication::translate("difficultyLevel", "MEDIUM", 0));
        hardButton->setText(QApplication::translate("difficultyLevel", "HARD", 0));
        exitButton->setText(QApplication::translate("difficultyLevel", "Exit", 0));
        playGameButton->setText(QApplication::translate("difficultyLevel", "Play", 0));
        difficultyHelpButton->setText(QApplication::translate("difficultyLevel", "Help", 0));
>>>>>>> 11e60ff557000c41d38303babeae7e2c19ac860b
    } // retranslateUi

};

namespace Ui {
    class difficultyLevel: public Ui_difficultyLevel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIFFICULTYLEVEL_H

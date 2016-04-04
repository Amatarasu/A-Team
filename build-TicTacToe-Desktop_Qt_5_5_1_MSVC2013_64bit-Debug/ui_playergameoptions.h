/********************************************************************************
** Form generated from reading UI file 'playergameoptions.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYERGAMEOPTIONS_H
#define UI_PLAYERGAMEOPTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayerGameOptions
{
public:
    QLabel *gameOptionForPlayers;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *playerOptionHelpButton;
    QPushButton *pushButton;
    QSplitter *splitter;
    QLabel *PlayerOptionlabel;
    QComboBox *playerGameOption;

    void setupUi(QDialog *PlayerGameOptions)
    {
        if (PlayerGameOptions->objectName().isEmpty())
            PlayerGameOptions->setObjectName(QStringLiteral("PlayerGameOptions"));
        PlayerGameOptions->resize(400, 219);
        gameOptionForPlayers = new QLabel(PlayerGameOptions);
        gameOptionForPlayers->setObjectName(QStringLiteral("gameOptionForPlayers"));
        gameOptionForPlayers->setGeometry(QRect(120, 30, 141, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        gameOptionForPlayers->setFont(font);
        widget = new QWidget(PlayerGameOptions);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 157, 195, 36));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        playerOptionHelpButton = new QPushButton(widget);
        playerOptionHelpButton->setObjectName(QStringLiteral("playerOptionHelpButton"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        playerOptionHelpButton->setFont(font1);
        QIcon icon;
        icon.addFile(QStringLiteral("images/Icons/Help Icon 25x25.png"), QSize(), QIcon::Normal, QIcon::Off);
        playerOptionHelpButton->setIcon(icon);
        playerOptionHelpButton->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(playerOptionHelpButton);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral("images/Icons/Play Icon 50x50.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(pushButton);

        splitter = new QSplitter(PlayerGameOptions);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(40, 80, 351, 41));
        splitter->setOrientation(Qt::Horizontal);
        PlayerOptionlabel = new QLabel(splitter);
        PlayerOptionlabel->setObjectName(QStringLiteral("PlayerOptionlabel"));
        PlayerOptionlabel->setFont(font1);
        splitter->addWidget(PlayerOptionlabel);
        playerGameOption = new QComboBox(splitter);
        playerGameOption->addItem(QString());
        QIcon icon2;
        icon2.addFile(QStringLiteral("images/Icons/X 25x25.png"), QSize(), QIcon::Normal, QIcon::Off);
        playerGameOption->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QStringLiteral("O_file.png"), QSize(), QIcon::Normal, QIcon::Off);
        playerGameOption->addItem(icon3, QString());
        playerGameOption->setObjectName(QStringLiteral("playerGameOption"));
        playerGameOption->setFont(font1);
        splitter->addWidget(playerGameOption);

        retranslateUi(PlayerGameOptions);

        QMetaObject::connectSlotsByName(PlayerGameOptions);
    } // setupUi

    void retranslateUi(QDialog *PlayerGameOptions)
    {
        PlayerGameOptions->setWindowTitle(QApplication::translate("PlayerGameOptions", "Dialog", 0));
        gameOptionForPlayers->setText(QApplication::translate("PlayerGameOptions", "Game Option", 0));
        playerOptionHelpButton->setText(QApplication::translate("PlayerGameOptions", "Help", 0));
        pushButton->setText(QApplication::translate("PlayerGameOptions", "Play", 0));
        PlayerOptionlabel->setText(QApplication::translate("PlayerGameOptions", "Player Options", 0));
        playerGameOption->setItemText(0, QApplication::translate("PlayerGameOptions", "Choose who goes first", 0));
        playerGameOption->setItemText(1, QApplication::translate("PlayerGameOptions", "Player one Goes as X", 0));
        playerGameOption->setItemText(2, QApplication::translate("PlayerGameOptions", "Player One goes as O", 0));

    } // retranslateUi

};

namespace Ui {
    class PlayerGameOptions: public Ui_PlayerGameOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERGAMEOPTIONS_H

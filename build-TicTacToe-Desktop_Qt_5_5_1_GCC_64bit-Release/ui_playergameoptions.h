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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayerGameOptions
{
public:
    QLabel *gameOptionForPlayers;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *playerOptionHelpButton;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *playerGameOption;

    void setupUi(QDialog *PlayerGameOptions)
    {
        if (PlayerGameOptions->objectName().isEmpty())
            PlayerGameOptions->setObjectName(QStringLiteral("PlayerGameOptions"));
        PlayerGameOptions->setWindowModality(Qt::NonModal);
        PlayerGameOptions->setEnabled(true);
        PlayerGameOptions->resize(400, 219);
        gameOptionForPlayers = new QLabel(PlayerGameOptions);
        gameOptionForPlayers->setObjectName(QStringLiteral("gameOptionForPlayers"));
        gameOptionForPlayers->setGeometry(QRect(120, 30, 141, 31));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        gameOptionForPlayers->setFont(font);
        layoutWidget = new QWidget(PlayerGameOptions);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(71, 158, 178, 37));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        playerOptionHelpButton = new QPushButton(layoutWidget);
        playerOptionHelpButton->setObjectName(QStringLiteral("playerOptionHelpButton"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        playerOptionHelpButton->setFont(font1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/images/Icons/Help Icon 50x50.png"), QSize(), QIcon::Normal, QIcon::Off);
        playerOptionHelpButton->setIcon(icon);
        playerOptionHelpButton->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(playerOptionHelpButton);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/images/Icons/Play Icon 50x50.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(25, 25));

        horizontalLayout->addWidget(pushButton);

        layoutWidget1 = new QWidget(PlayerGameOptions);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 80, 342, 35));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        playerGameOption = new QComboBox(layoutWidget1);
        playerGameOption->addItem(QString());
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/images/Icons/X 25x25.png"), QSize(), QIcon::Normal, QIcon::Off);
        playerGameOption->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/images/Icons/O_file 25x25.png"), QSize(), QIcon::Normal, QIcon::Off);
        playerGameOption->addItem(icon3, QString());
        playerGameOption->setObjectName(QStringLiteral("playerGameOption"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(playerGameOption->sizePolicy().hasHeightForWidth());
        playerGameOption->setSizePolicy(sizePolicy);
        playerGameOption->setMinimumSize(QSize(211, 0));
        playerGameOption->setFont(font1);
        playerGameOption->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLengthWithIcon);

        horizontalLayout_2->addWidget(playerGameOption);


        retranslateUi(PlayerGameOptions);

        QMetaObject::connectSlotsByName(PlayerGameOptions);
    } // setupUi

    void retranslateUi(QDialog *PlayerGameOptions)
    {
        PlayerGameOptions->setWindowTitle(QApplication::translate("PlayerGameOptions", "Dialog", 0));
        gameOptionForPlayers->setText(QApplication::translate("PlayerGameOptions", "Game Option", 0));
        playerOptionHelpButton->setText(QApplication::translate("PlayerGameOptions", "Help", 0));
        pushButton->setText(QApplication::translate("PlayerGameOptions", "Play", 0));
        playerGameOption->setItemText(0, QApplication::translate("PlayerGameOptions", "Choose who goes first", 0));
        playerGameOption->setItemText(1, QString());
        playerGameOption->setItemText(2, QString());

    } // retranslateUi

};

namespace Ui {
    class PlayerGameOptions: public Ui_PlayerGameOptions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYERGAMEOPTIONS_H

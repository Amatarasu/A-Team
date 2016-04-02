/********************************************************************************
** Form generated from reading UI file 'gamemode.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEMODE_H
#define UI_GAMEMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_gameMode
{
public:
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *selectGameOption;
    QComboBox *GamePlayMode;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *GameOptionMode;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *gameMode)
    {
        if (gameMode->objectName().isEmpty())
            gameMode->setObjectName(QStringLiteral("gameMode"));
        gameMode->resize(553, 409);
        groupBox = new QGroupBox(gameMode);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(50, 100, 396, 122));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        selectGameOption = new QLabel(groupBox);
        selectGameOption->setObjectName(QStringLiteral("selectGameOption"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        selectGameOption->setFont(font);

        horizontalLayout->addWidget(selectGameOption);

        GamePlayMode = new QComboBox(groupBox);
        GamePlayMode->addItem(QString());
        GamePlayMode->addItem(QString());
        QIcon icon;
        icon.addFile(QStringLiteral("images/Icons/A.i. Icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        GamePlayMode->addItem(icon, QString());
        GamePlayMode->setObjectName(QStringLiteral("GamePlayMode"));
        GamePlayMode->setFont(font);

        horizontalLayout->addWidget(GamePlayMode);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        GameOptionMode = new QPushButton(groupBox);
        GameOptionMode->setObjectName(QStringLiteral("GameOptionMode"));
        GameOptionMode->setFont(font);

        horizontalLayout_2->addWidget(GameOptionMode);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


        retranslateUi(gameMode);

        QMetaObject::connectSlotsByName(gameMode);
    } // setupUi

    void retranslateUi(QDialog *gameMode)
    {
        gameMode->setWindowTitle(QApplication::translate("gameMode", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("gameMode", "Game Mode", 0));
        selectGameOption->setText(QApplication::translate("gameMode", "Select Game Mode", 0));
        GamePlayMode->setItemText(0, QApplication::translate("gameMode", "select a mode", 0));
        GamePlayMode->setItemText(1, QApplication::translate("gameMode", "Player VS Player", 0));
        GamePlayMode->setItemText(2, QApplication::translate("gameMode", "Player vs AI", 0));

        GameOptionMode->setText(QApplication::translate("gameMode", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class gameMode: public Ui_gameMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEMODE_H

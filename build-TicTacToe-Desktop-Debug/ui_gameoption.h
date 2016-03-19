/********************************************************************************
** Form generated from reading UI file 'gameoption.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOPTION_H
#define UI_GAMEOPTION_H

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

class Ui_gameOption
{
public:
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *selectGameLabel;
    QComboBox *choiceToGoFirst;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *gameOptionOkay;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *gameOption)
    {
        if (gameOption->objectName().isEmpty())
            gameOption->setObjectName(QStringLiteral("gameOption"));
        gameOption->resize(418, 144);
        horizontalLayout_4 = new QHBoxLayout(gameOption);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        groupBox = new QGroupBox(gameOption);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        selectGameLabel = new QLabel(groupBox);
        selectGameLabel->setObjectName(QStringLiteral("selectGameLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        selectGameLabel->setFont(font);

        horizontalLayout->addWidget(selectGameLabel);

        choiceToGoFirst = new QComboBox(groupBox);
        choiceToGoFirst->setObjectName(QStringLiteral("choiceToGoFirst"));
        choiceToGoFirst->setFont(font);

        horizontalLayout->addWidget(choiceToGoFirst);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        gameOptionOkay = new QPushButton(groupBox);
        gameOptionOkay->setObjectName(QStringLiteral("gameOptionOkay"));
        gameOptionOkay->setFont(font);

        horizontalLayout_2->addWidget(gameOptionOkay);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout);


        horizontalLayout_4->addWidget(groupBox);


        retranslateUi(gameOption);

        QMetaObject::connectSlotsByName(gameOption);
    } // setupUi

    void retranslateUi(QDialog *gameOption)
    {
        gameOption->setWindowTitle(QApplication::translate("gameOption", "Dialog", 0));
        groupBox->setTitle(QApplication::translate("gameOption", "Game Options", 0));
        selectGameLabel->setText(QApplication::translate("gameOption", "Select Game Option", 0));
        choiceToGoFirst->clear();
        choiceToGoFirst->insertItems(0, QStringList()
         << QApplication::translate("gameOption", "Player goes first", 0)
         << QApplication::translate("gameOption", "AI goes first", 0)
        );
        gameOptionOkay->setText(QApplication::translate("gameOption", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class gameOption: public Ui_gameOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOPTION_H

/********************************************************************************
** Form generated from reading UI file 'gameboard.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEBOARD_H
#define UI_GAMEBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_gameBoard
{
public:

    void setupUi(QDialog *gameBoard)
    {
        if (gameBoard->objectName().isEmpty())
            gameBoard->setObjectName(QStringLiteral("gameBoard"));
        gameBoard->resize(625, 603);

        retranslateUi(gameBoard);

        QMetaObject::connectSlotsByName(gameBoard);
    } // setupUi

    void retranslateUi(QDialog *gameBoard)
    {
        gameBoard->setWindowTitle(QApplication::translate("gameBoard", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class gameBoard: public Ui_gameBoard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEBOARD_H

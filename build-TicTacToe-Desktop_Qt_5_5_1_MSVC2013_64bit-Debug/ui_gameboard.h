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

class Ui_gameboard
{
public:

    void setupUi(QDialog *gameboard)
    {
        if (gameboard->objectName().isEmpty())
            gameboard->setObjectName(QStringLiteral("gameboard"));
        gameboard->resize(622, 418);

        retranslateUi(gameboard);

        QMetaObject::connectSlotsByName(gameboard);
    } // setupUi

    void retranslateUi(QDialog *gameboard)
    {
        gameboard->setWindowTitle(QApplication::translate("gameboard", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class gameboard: public Ui_gameboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEBOARD_H

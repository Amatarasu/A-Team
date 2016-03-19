/********************************************************************************
** Form generated from reading UI file 'selectgamemode.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELECTGAMEMODE_H
#define UI_SELECTGAMEMODE_H

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

class Ui_selectGameMode
{
public:
    QComboBox *comboBox;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *BackButton;
    QPushButton *okButton;

    void setupUi(QDialog *selectGameMode)
    {
        if (selectGameMode->objectName().isEmpty())
            selectGameMode->setObjectName(QStringLiteral("selectGameMode"));
        selectGameMode->resize(301, 127);
        comboBox = new QComboBox(selectGameMode);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(80, 50, 141, 22));
        label = new QLabel(selectGameMode);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 20, 111, 16));
        widget = new QWidget(selectGameMode);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 90, 158, 25));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        BackButton = new QPushButton(widget);
        BackButton->setObjectName(QStringLiteral("BackButton"));

        horizontalLayout->addWidget(BackButton);

        okButton = new QPushButton(widget);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout->addWidget(okButton);


        retranslateUi(selectGameMode);

        QMetaObject::connectSlotsByName(selectGameMode);
    } // setupUi

    void retranslateUi(QDialog *selectGameMode)
    {
        selectGameMode->setWindowTitle(QApplication::translate("selectGameMode", "Dialog", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("selectGameMode", "Select one...", 0)
         << QApplication::translate("selectGameMode", "Player vs. A.i.", 0)
         << QApplication::translate("selectGameMode", "Player vs. Player", 0)
        );
        label->setText(QApplication::translate("selectGameMode", "Selet your gamemode ", 0));
        BackButton->setText(QApplication::translate("selectGameMode", "Back", 0));
        okButton->setText(QApplication::translate("selectGameMode", "Ok", 0));
    } // retranslateUi

};

namespace Ui {
    class selectGameMode: public Ui_selectGameMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELECTGAMEMODE_H

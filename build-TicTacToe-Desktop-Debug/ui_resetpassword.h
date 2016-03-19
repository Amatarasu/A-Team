/********************************************************************************
** Form generated from reading UI file 'resetpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESETPASSWORD_H
#define UI_RESETPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_resetPassword
{
public:
    QLabel *settngPasswordTitle;
    QLineEdit *resetFirstNameInput;
    QLabel *label;
    QLineEdit *resetLastName;
    QLabel *label_2;
    QLineEdit *resetUserName;
    QLabel *label_3;
    QPushButton *resetSubmitButton;
    QPushButton *resetHelpButton;

    void setupUi(QDialog *resetPassword)
    {
        if (resetPassword->objectName().isEmpty())
            resetPassword->setObjectName(QStringLiteral("resetPassword"));
        resetPassword->resize(582, 433);
        settngPasswordTitle = new QLabel(resetPassword);
        settngPasswordTitle->setObjectName(QStringLiteral("settngPasswordTitle"));
        settngPasswordTitle->setGeometry(QRect(220, 80, 171, 20));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        settngPasswordTitle->setFont(font);
        resetFirstNameInput = new QLineEdit(resetPassword);
        resetFirstNameInput->setObjectName(QStringLiteral("resetFirstNameInput"));
        resetFirstNameInput->setGeometry(QRect(100, 140, 151, 31));
        label = new QLabel(resetPassword);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 140, 101, 16));
        label->setFont(font);
        resetLastName = new QLineEdit(resetPassword);
        resetLastName->setObjectName(QStringLiteral("resetLastName"));
        resetLastName->setGeometry(QRect(100, 190, 151, 31));
        label_2 = new QLabel(resetPassword);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 200, 111, 16));
        label_2->setFont(font);
        resetUserName = new QLineEdit(resetPassword);
        resetUserName->setObjectName(QStringLiteral("resetUserName"));
        resetUserName->setGeometry(QRect(100, 240, 151, 31));
        label_3 = new QLabel(resetPassword);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 250, 151, 16));
        label_3->setFont(font);
        resetSubmitButton = new QPushButton(resetPassword);
        resetSubmitButton->setObjectName(QStringLiteral("resetSubmitButton"));
        resetSubmitButton->setGeometry(QRect(230, 320, 101, 31));
        resetSubmitButton->setFont(font);
        resetHelpButton = new QPushButton(resetPassword);
        resetHelpButton->setObjectName(QStringLiteral("resetHelpButton"));
        resetHelpButton->setGeometry(QRect(50, 320, 101, 31));
        resetHelpButton->setFont(font);
        QWidget::setTabOrder(resetFirstNameInput, resetLastName);
        QWidget::setTabOrder(resetLastName, resetUserName);
        QWidget::setTabOrder(resetUserName, resetHelpButton);
        QWidget::setTabOrder(resetHelpButton, resetSubmitButton);

        retranslateUi(resetPassword);

        QMetaObject::connectSlotsByName(resetPassword);
    } // setupUi

    void retranslateUi(QDialog *resetPassword)
    {
        resetPassword->setWindowTitle(QApplication::translate("resetPassword", "Dialog", 0));
        settngPasswordTitle->setText(QApplication::translate("resetPassword", "Resetting your Password", 0));
        label->setText(QApplication::translate("resetPassword", "Enter First Name", 0));
        label_2->setText(QApplication::translate("resetPassword", "Enter Last Name", 0));
        label_3->setText(QApplication::translate("resetPassword", "Enter Username ", 0));
        resetSubmitButton->setText(QApplication::translate("resetPassword", "Submit", 0));
        resetHelpButton->setText(QApplication::translate("resetPassword", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class resetPassword: public Ui_resetPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESETPASSWORD_H

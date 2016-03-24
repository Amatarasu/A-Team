/********************************************************************************
** Form generated from reading UI file 'resetpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QSplitter>

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
    QSplitter *splitter;
    QPushButton *resetHelpButton;
    QPushButton *resetSubmitButton;

    void setupUi(QDialog *resetPassword)
    {
        if (resetPassword->objectName().isEmpty())
            resetPassword->setObjectName(QStringLiteral("resetPassword"));
        resetPassword->resize(582, 433);
        settngPasswordTitle = new QLabel(resetPassword);
        settngPasswordTitle->setObjectName(QStringLiteral("settngPasswordTitle"));
        settngPasswordTitle->setGeometry(QRect(90, 10, 397, 81));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        settngPasswordTitle->setFont(font);
        resetFirstNameInput = new QLineEdit(resetPassword);
        resetFirstNameInput->setObjectName(QStringLiteral("resetFirstNameInput"));
        resetFirstNameInput->setGeometry(QRect(151, 117, 176, 25));
        label = new QLabel(resetPassword);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(151, 91, 137, 19));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        resetLastName = new QLineEdit(resetPassword);
        resetLastName->setObjectName(QStringLiteral("resetLastName"));
        resetLastName->setGeometry(QRect(151, 175, 176, 25));
        label_2 = new QLabel(resetPassword);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(151, 149, 135, 19));
        label_2->setFont(font1);
        resetUserName = new QLineEdit(resetPassword);
        resetUserName->setObjectName(QStringLiteral("resetUserName"));
        resetUserName->setGeometry(QRect(151, 233, 176, 25));
        label_3 = new QLabel(resetPassword);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(151, 207, 136, 19));
        label_3->setFont(font1);
        splitter = new QSplitter(resetPassword);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(10, 320, 561, 28));
        splitter->setOrientation(Qt::Horizontal);
        resetHelpButton = new QPushButton(splitter);
        resetHelpButton->setObjectName(QStringLiteral("resetHelpButton"));
        resetHelpButton->setFont(font1);
        splitter->addWidget(resetHelpButton);
        resetSubmitButton = new QPushButton(splitter);
        resetSubmitButton->setObjectName(QStringLiteral("resetSubmitButton"));
        resetSubmitButton->setFont(font1);
        splitter->addWidget(resetSubmitButton);
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
        resetHelpButton->setText(QApplication::translate("resetPassword", "Help", 0));
        resetSubmitButton->setText(QApplication::translate("resetPassword", "Submit", 0));
    } // retranslateUi

};

namespace Ui {
    class resetPassword: public Ui_resetPassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESETPASSWORD_H

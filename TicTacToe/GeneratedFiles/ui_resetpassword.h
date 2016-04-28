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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_resetPassword
{
public:
    QLabel *settngPasswordTitle;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *resetFirstNameInput;
    QLabel *label;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *resetLastName;
    QLabel *label_2;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *resetUserName;
    QLabel *label_3;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *resetHelpButton;
    QPushButton *resetSubmitButton;

    void setupUi(QDialog *resetPassword)
    {
        if (resetPassword->objectName().isEmpty())
            resetPassword->setObjectName(QStringLiteral("resetPassword"));
        resetPassword->resize(582, 433);
        settngPasswordTitle = new QLabel(resetPassword);
        settngPasswordTitle->setObjectName(QStringLiteral("settngPasswordTitle"));
        settngPasswordTitle->setGeometry(QRect(120, 80, 281, 41));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        settngPasswordTitle->setFont(font);
        widget = new QWidget(resetPassword);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(100, 140, 251, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        resetFirstNameInput = new QLineEdit(widget);
        resetFirstNameInput->setObjectName(QStringLiteral("resetFirstNameInput"));

        horizontalLayout->addWidget(resetFirstNameInput);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout->addWidget(label);

        widget1 = new QWidget(resetPassword);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(100, 190, 251, 41));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        resetLastName = new QLineEdit(widget1);
        resetLastName->setObjectName(QStringLiteral("resetLastName"));

        horizontalLayout_2->addWidget(resetLastName);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font1);

        horizontalLayout_2->addWidget(label_2);

        widget2 = new QWidget(resetPassword);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(100, 240, 251, 41));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        resetUserName = new QLineEdit(widget2);
        resetUserName->setObjectName(QStringLiteral("resetUserName"));

        horizontalLayout_3->addWidget(resetUserName);

        label_3 = new QLabel(widget2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        widget3 = new QWidget(resetPassword);
        widget3->setObjectName(QStringLiteral("widget3"));
        widget3->setGeometry(QRect(120, 310, 221, 71));
        horizontalLayout_4 = new QHBoxLayout(widget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        resetHelpButton = new QPushButton(widget3);
        resetHelpButton->setObjectName(QStringLiteral("resetHelpButton"));
        resetHelpButton->setFont(font1);

        horizontalLayout_4->addWidget(resetHelpButton);

        resetSubmitButton = new QPushButton(widget3);
        resetSubmitButton->setObjectName(QStringLiteral("resetSubmitButton"));
        resetSubmitButton->setFont(font1);

        horizontalLayout_4->addWidget(resetSubmitButton);

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

/********************************************************************************
** Form generated from reading UI file 'loginscene.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCENE_H
#define UI_LOGINSCENE_H

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

class Ui_loginScene
{
public:
    QLabel *Username;
    QLabel *Password;
    QLineEdit *loginPassword;
    QLineEdit *loginUsername;
    QLabel *loginTitle;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *HelpLogin;
    QPushButton *loggingIn;

    void setupUi(QDialog *loginScene)
    {
        if (loginScene->objectName().isEmpty())
            loginScene->setObjectName(QStringLiteral("loginScene"));
        loginScene->resize(431, 307);
        Username = new QLabel(loginScene);
        Username->setObjectName(QStringLiteral("Username"));
        Username->setGeometry(QRect(290, 70, 111, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Username->setFont(font);
        Password = new QLabel(loginScene);
        Password->setObjectName(QStringLiteral("Password"));
        Password->setGeometry(QRect(290, 130, 111, 16));
        Password->setFont(font);
        loginPassword = new QLineEdit(loginScene);
        loginPassword->setObjectName(QStringLiteral("loginPassword"));
        loginPassword->setGeometry(QRect(142, 121, 141, 31));
        loginPassword->setEchoMode(QLineEdit::Password);
        loginUsername = new QLineEdit(loginScene);
        loginUsername->setObjectName(QStringLiteral("loginUsername"));
        loginUsername->setGeometry(QRect(142, 60, 141, 31));
        loginTitle = new QLabel(loginScene);
        loginTitle->setObjectName(QStringLiteral("loginTitle"));
        loginTitle->setGeometry(QRect(140, 20, 191, 21));
        loginTitle->setFont(font);
        layoutWidget = new QWidget(loginScene);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 260, 195, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        HelpLogin = new QPushButton(layoutWidget);
        HelpLogin->setObjectName(QStringLiteral("HelpLogin"));
        HelpLogin->setFont(font);

        horizontalLayout->addWidget(HelpLogin);

        loggingIn = new QPushButton(layoutWidget);
        loggingIn->setObjectName(QStringLiteral("loggingIn"));
        loggingIn->setFont(font);

        horizontalLayout->addWidget(loggingIn);

        QWidget::setTabOrder(loginUsername, loginPassword);
        QWidget::setTabOrder(loginPassword, loggingIn);
        QWidget::setTabOrder(loggingIn, HelpLogin);

        retranslateUi(loginScene);

        QMetaObject::connectSlotsByName(loginScene);
    } // setupUi

    void retranslateUi(QDialog *loginScene)
    {
        loginScene->setWindowTitle(QApplication::translate("loginScene", "Dialog", 0));
        Username->setText(QApplication::translate("loginScene", "Enter Username", 0));
        Password->setText(QApplication::translate("loginScene", "Enter Password", 0));
        loginTitle->setText(QApplication::translate("loginScene", "LOGIN MENU", 0));
        HelpLogin->setText(QApplication::translate("loginScene", "Help", 0));
        loggingIn->setText(QApplication::translate("loginScene", "Login", 0));
    } // retranslateUi

};

namespace Ui {
    class loginScene: public Ui_loginScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCENE_H

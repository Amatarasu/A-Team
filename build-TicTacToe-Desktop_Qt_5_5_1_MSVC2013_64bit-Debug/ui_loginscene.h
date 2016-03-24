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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>

QT_BEGIN_NAMESPACE

class Ui_loginScene
{
public:
    QLabel *Username;
    QLabel *Password;
    QLineEdit *loginPassword;
    QLineEdit *loginUsername;
    QLabel *loginTitle;
    QSplitter *splitter_2;
    QPushButton *HelpLogin;
    QPushButton *loggingIn;

    void setupUi(QDialog *loginScene)
    {
        if (loginScene->objectName().isEmpty())
            loginScene->setObjectName(QStringLiteral("loginScene"));
        loginScene->resize(431, 307);
        Username = new QLabel(loginScene);
        Username->setObjectName(QStringLiteral("Username"));
        Username->setGeometry(QRect(140, 70, 131, 19));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        Username->setFont(font);
        Password = new QLabel(loginScene);
        Password->setObjectName(QStringLiteral("Password"));
        Password->setGeometry(QRect(140, 150, 127, 19));
        Password->setFont(font);
        loginPassword = new QLineEdit(loginScene);
        loginPassword->setObjectName(QStringLiteral("loginPassword"));
        loginPassword->setGeometry(QRect(120, 180, 176, 22));
        loginPassword->setEchoMode(QLineEdit::Password);
        loginUsername = new QLineEdit(loginScene);
        loginUsername->setObjectName(QStringLiteral("loginUsername"));
        loginUsername->setGeometry(QRect(120, 100, 176, 22));
        loginTitle = new QLabel(loginScene);
        loginTitle->setObjectName(QStringLiteral("loginTitle"));
        loginTitle->setGeometry(QRect(110, 10, 214, 39));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        loginTitle->setFont(font1);
        splitter_2 = new QSplitter(loginScene);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(21, 261, 361, 28));
        splitter_2->setOrientation(Qt::Horizontal);
        HelpLogin = new QPushButton(splitter_2);
        HelpLogin->setObjectName(QStringLiteral("HelpLogin"));
        HelpLogin->setFont(font);
        splitter_2->addWidget(HelpLogin);
        loggingIn = new QPushButton(splitter_2);
        loggingIn->setObjectName(QStringLiteral("loggingIn"));
        loggingIn->setFont(font);
        splitter_2->addWidget(loggingIn);
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

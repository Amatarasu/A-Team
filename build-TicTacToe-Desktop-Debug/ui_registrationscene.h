/********************************************************************************
** Form generated from reading UI file 'registrationscene.ui'
**
<<<<<<< HEAD
** Created by: Qt User Interface Compiler version 5.2.1
=======
** Created by: Qt User Interface Compiler version 5.4.2
>>>>>>> 9afdd9bdc8a8cd1c3ca6918bfcc94f3353855373
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATIONSCENE_H
#define UI_REGISTRATIONSCENE_H

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

class Ui_registrationScene
{
public:
    QLineEdit *userNameInput;
    QLineEdit *firstNameInput;
    QLineEdit *passwordInput;
    QLineEdit *lastNameInput;
    QLineEdit *confirmPasswordInput;
    QLineEdit *answerInput;
    QLineEdit *questionInput;
    QLineEdit *retypeAnswerInput;
    QLabel *userLabel;
    QLabel *passwordLabel;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *signUPLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *signupButton;
    QPushButton *registrationHelpButton;

    void setupUi(QDialog *registrationScene)
    {
        if (registrationScene->objectName().isEmpty())
            registrationScene->setObjectName(QStringLiteral("registrationScene"));
        registrationScene->resize(635, 416);
        userNameInput = new QLineEdit(registrationScene);
        userNameInput->setObjectName(QStringLiteral("userNameInput"));
        userNameInput->setGeometry(QRect(10, 80, 151, 31));
        firstNameInput = new QLineEdit(registrationScene);
        firstNameInput->setObjectName(QStringLiteral("firstNameInput"));
        firstNameInput->setGeometry(QRect(330, 80, 151, 31));
        firstNameInput->setEchoMode(QLineEdit::Normal);
        passwordInput = new QLineEdit(registrationScene);
        passwordInput->setObjectName(QStringLiteral("passwordInput"));
        passwordInput->setGeometry(QRect(10, 150, 151, 31));
        passwordInput->setEchoMode(QLineEdit::Password);
        lastNameInput = new QLineEdit(registrationScene);
        lastNameInput->setObjectName(QStringLiteral("lastNameInput"));
        lastNameInput->setGeometry(QRect(330, 150, 151, 31));
        confirmPasswordInput = new QLineEdit(registrationScene);
        confirmPasswordInput->setObjectName(QStringLiteral("confirmPasswordInput"));
        confirmPasswordInput->setGeometry(QRect(10, 210, 151, 31));
        confirmPasswordInput->setEchoMode(QLineEdit::Password);
        answerInput = new QLineEdit(registrationScene);
        answerInput->setObjectName(QStringLiteral("answerInput"));
        answerInput->setGeometry(QRect(330, 220, 151, 31));
        questionInput = new QLineEdit(registrationScene);
        questionInput->setObjectName(QStringLiteral("questionInput"));
        questionInput->setGeometry(QRect(10, 270, 151, 31));
        retypeAnswerInput = new QLineEdit(registrationScene);
        retypeAnswerInput->setObjectName(QStringLiteral("retypeAnswerInput"));
        retypeAnswerInput->setGeometry(QRect(330, 280, 151, 31));
        userLabel = new QLabel(registrationScene);
        userLabel->setObjectName(QStringLiteral("userLabel"));
        userLabel->setGeometry(QRect(170, 90, 81, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        userLabel->setFont(font);
        passwordLabel = new QLabel(registrationScene);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));
        passwordLabel->setGeometry(QRect(170, 160, 71, 16));
        passwordLabel->setFont(font);
        label_3 = new QLabel(registrationScene);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 220, 121, 16));
        label_3->setFont(font);
        label_4 = new QLabel(registrationScene);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(170, 280, 91, 16));
        label_4->setFont(font);
        label_5 = new QLabel(registrationScene);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(490, 90, 71, 16));
        label_5->setFont(font);
        label_6 = new QLabel(registrationScene);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(490, 160, 71, 16));
        label_6->setFont(font);
        label_7 = new QLabel(registrationScene);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(490, 230, 71, 16));
        label_7->setFont(font);
        label_8 = new QLabel(registrationScene);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(490, 290, 111, 16));
        label_8->setFont(font);
        signUPLabel = new QLabel(registrationScene);
        signUPLabel->setObjectName(QStringLiteral("signUPLabel"));
        signUPLabel->setGeometry(QRect(170, 30, 191, 21));
        signUPLabel->setFont(font);
        signUPLabel->setFocusPolicy(Qt::NoFocus);
        widget = new QWidget(registrationScene);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(110, 360, 195, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        signupButton = new QPushButton(widget);
        signupButton->setObjectName(QStringLiteral("signupButton"));
        signupButton->setFont(font);

        horizontalLayout->addWidget(signupButton);

        registrationHelpButton = new QPushButton(widget);
        registrationHelpButton->setObjectName(QStringLiteral("registrationHelpButton"));
        registrationHelpButton->setFont(font);

        horizontalLayout->addWidget(registrationHelpButton);


        retranslateUi(registrationScene);

        QMetaObject::connectSlotsByName(registrationScene);
    } // setupUi

    void retranslateUi(QDialog *registrationScene)
    {
        registrationScene->setWindowTitle(QApplication::translate("registrationScene", "Dialog", 0));
        userLabel->setText(QApplication::translate("registrationScene", "Username", 0));
        passwordLabel->setText(QApplication::translate("registrationScene", "Password", 0));
        label_3->setText(QApplication::translate("registrationScene", "Confirm Password", 0));
        label_4->setText(QApplication::translate("registrationScene", "Question", 0));
        label_5->setText(QApplication::translate("registrationScene", "First Name", 0));
        label_6->setText(QApplication::translate("registrationScene", "Last Name", 0));
        label_7->setText(QApplication::translate("registrationScene", "Answer", 0));
        label_8->setText(QApplication::translate("registrationScene", "Retype Answer", 0));
        signUPLabel->setText(QApplication::translate("registrationScene", "SIGN UP AS A PRO", 0));
        signupButton->setText(QApplication::translate("registrationScene", "Submit", 0));
        registrationHelpButton->setText(QApplication::translate("registrationScene", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class registrationScene: public Ui_registrationScene {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATIONSCENE_H

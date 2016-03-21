#include "resetpassword.h"
#include "ui_resetpassword.h"
#include <QMessageBox>
#include <QtSql>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QInputDialog>
#include <QDebug>

resetPassword::resetPassword(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::resetPassword)
{
    ui->setupUi(this);
}

resetPassword::~resetPassword()
{
    delete ui;
}

void resetPassword::on_resetSubmitButton_clicked()
{
    //this is the submit button for resetting password
    //now first, need to declare the database and set the parameters

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("tictactoe");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("Amatarasu76");
    bool dbConnection = db.open();

    //now collecting the necessary data to reset the password

    QString firstName, lastName, userName;
    firstName=ui->resetFirstNameInput->text();
    lastName=ui->resetLastName->text();
    userName = ui->resetUserName->text();

    //now most information that are collected will be use to reset password

    if(!dbConnection)
    {
        //meaning database sucks and is having connectivity issues

        QMessageBox :: critical(this,"error",db.lastError().text());
        return;
    }
    else
    {
        //database is good and should query to get information

        QSqlQuery searchingInfo;
        QString realFirstName, realLastName, realQuestion, realAnswer;
        searchingInfo.prepare("SELECT `firstName`, `lastName`, `userName`, `password`,`question`, `answer` FROM `players` WHERE userName =?");
        searchingInfo.bindValue(0,userName);
        searchingInfo.exec();

        //this code did not work because i was checking on the wrong sql error


        /*QMessageBox naruto;
        naruto.setText(firstName);
        naruto.exec();
        if()
        {
            qDebug() << "we made it!";
        }
        else
        {
            QString lame= searchingInfo.lastError().text();
            QMessageBox :: critical(this, "error number",lame);
        }*/

        if(!searchingInfo.next())
        {
            //sucker trying to hack our database :(

            QMessageBox errorMessageSearch;
            errorMessageSearch.setText("information is invalid");
            errorMessageSearch.exec();
        }
        else
        {
            //information exist so time to reset

            realFirstName = searchingInfo.value(0).toString();
            realLastName = searchingInfo.value(1).toString();
            realQuestion = searchingInfo.value(3).toString();
            realAnswer = searchingInfo.value(4).toString();

            QString providedAnswer = QInputDialog :: getText(this, "anser your question",realQuestion);
            int matchingAnswers = QString :: compare(providedAnswer,realAnswer);
            if(!matchingAnswers)
            {
                QMessageBox wrongAnswer;
                wrongAnswer.setText("Answers don't match!");
                wrongAnswer.exec();
                return;
            }
            else
            {
                QString newPassword, retypedNewPassword;
                QSqlQuery updatingPassword;
                newPassword = QInputDialog :: getText(this,"new password","Please Enter the new Password");
                retypedNewPassword = QInputDialog :: getText(this,"retype Password", "Re-Enter your new password");
                int matching = (QString :: compare(newPassword,retypedNewPassword));
                while(matching != 0)
                {
                    QMessageBox errorMessageWrongPass;
                    errorMessageWrongPass.setText("passwords do not match!");
                    newPassword = QInputDialog :: getText(this,"new password","Please Enter the new Password");
                    retypedNewPassword = QInputDialog :: getText(this,"retype Password", "Re-Enter your new password");
                    matching = (QString :: compare(newPassword,retypedNewPassword));
                }
                updatingPassword.prepare("UPDATE `players` SET `firstName`=?,`lastName`=?,`userName`=?,`password`=?");
                updatingPassword.bindValue(0,firstName);
                updatingPassword.bindValue(1,lastName);
                updatingPassword.bindValue(2,userName);
                updatingPassword.bindValue(3,newPassword);
                if(updatingPassword.exec())
                {
                    QMessageBox successfulUpdate;
                    successfulUpdate.setText("Password Successfully updated");
                    successfulUpdate.exec();
                    db.close();
                }
                else
                    QMessageBox :: critical(this, "error message",db.lastError().text());

            }

        }
    }

}

void resetPassword::on_resetHelpButton_clicked()
{
    //doing help for how to reset your password

    QMessageBox onHelp;
    onHelp.setText("Enter first name, last name, username and press submit to proceed");
    onHelp.exec();
}

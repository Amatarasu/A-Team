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
        searchingInfo.prepare("SELECT `firstName`, `lastName`, `userName`, `password`, `question`, `answer` FROM `players` WHERE firstName=?, lastName=?, userName=?");
        searchingInfo.bindValue(0,firstName);
        searchingInfo.bindValue(1,lastName);
        searchingInfo.bindValue(2,userName);
        if(!searchingInfo.exec())
        {
            //sucker trying to hack our database :(

            QMessageBox errorMessageSearch;
            errorMessageSearch.setText("information is invalid");
            errorMessageSearch.exec();
            QMessageBox :: critical(this, "error message",db.lastError().text());
        }
        else
        {
            //information exist so time to reset

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
        close();
    }

}

void resetPassword::on_resetHelpButton_clicked()
{
    //doing help for how to reset your password

    QMessageBox onHelp;
    onHelp.setText("Enter first name, last name, username and press submit to proceed");
    onHelp.exec();
}

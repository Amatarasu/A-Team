#include "registrationscene.h"
#include "ui_registrationscene.h"
#include <qmessagebox.h>
#include <QDebug>
#include <QSql>
#include <QSqlDatabase>
#include <QtSql>
#include <QSqlError>

registrationScene::registrationScene(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registrationScene)
{
    ui->setupUi(this);

}

registrationScene::~registrationScene()
{
    delete ui;
}


void registrationScene::on_signupButton_clicked()
{
    //this function will be used to write sql codes to connect to the database and check
    //username, password, so forth.....

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setUserName ("root");
    db.setPassword("Amatarasu76");
    db.setDatabaseName("tictactoe");
    QString userName, password, firstName, lastName, question, answer, password2, answer2;
    userName = ui->userNameInput->text();
    password = ui->passwordInput->text();
    firstName = ui->firstNameInput->text();
    lastName = ui->lastNameInput->text();
    password2 = ui->confirmPasswordInput->text();
    answer =  ui->answerInput->text();
    answer2 =  ui->answerInput->text();
    question = ui->questionInput->text();
    bool okay = db.open();

    //now checking if the inputs match at all

    int x=QString :: compare(password,password2, Qt :: CaseInsensitive);
    if(x!=0)
    {
        //answers don't match

        QMessageBox errorMessagePassword;
        errorMessagePassword.setText("password fields do not match1");
        errorMessagePassword.exec();
        return;

    }
    int y=QString :: compare(answer,answer2, Qt :: CaseInsensitive);
    if(y!=0)
    {
        QMessageBox errorMessagePassword;
        errorMessagePassword.setText("answer fields do not match1");
        errorMessagePassword.exec();
        return;

    }
    else
    {
        //this means all fields are correct and needs to be entered in db

        //after getting the input for all the line edit boxes, i will send this info
        //into the database for the user to sign up

        if (!okay)
        {

            //reporting that there is an error connecting on the database

            QMessageBox :: critical(this,"error",db.lastError().text());
            return;
        }
        else
        {
            QSqlQuery signUpQuery;
            signUpQuery.prepare("INSERT INTO `players`(`firstName`, `lastName`, `userName`, `password`, `score`, `playersWin`, `playersLose`, `question`, `answer`) VALUES (?,?,?,?,?,?,?,?,?)");
            signUpQuery.bindValue(0,firstName);
            signUpQuery.bindValue(1,lastName);
            signUpQuery.bindValue(2,userName);
            signUpQuery.bindValue(3,password);
            signUpQuery.bindValue(4,0);
            signUpQuery.bindValue(5,0);
            signUpQuery.bindValue(6,0);
            signUpQuery.bindValue(7,question);
            signUpQuery.bindValue(8,answer);

            if(signUpQuery.exec())
            {
                QMessageBox completedQuery;
                completedQuery.setText("Thank you for signing in.  Now login and have fun!");
                completedQuery.exec();
                close();

            }
            else
            {
                //suppose to print the error but has been fixed already
                QMessageBox completeError;
                completeError.setText("possible unmatch fields.  Please check");
                completeError.exec();
            }

        }

        db.close();
    }
}

void registrationScene::on_registrationHelpButton_clicked()
{
    //this is the help button for the registration

    QMessageBox helpRegister;
    helpRegister.setText("Enter a valid username and password, confrim password and submit to register");
    helpRegister.exec();

}

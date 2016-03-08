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

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL","my_sql_db");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setUserName ("root");
    db.setPassword("Amatarasu76");
    bool okay = db.open();
    QString userName, password, firstName, lastName, question, answer, password2, answer2;
    userName = ui->userNameInput->text();
    password = ui->passwordInput->text();
    firstName = ui->firstNameInput->text();
    lastName = ui->lastNameInput->text();
    password2 = ui->confirmPasswordInput->text();
    answer =  ui->answerInput->text();
    answer2 =  ui->answerInput->text();
    question = ui->questionInput->text();

    //now checking if the inputs match at all

    if (password != password2 || answer != answer2)
    {
        //answers don't match

        QMessageBox errorMessagePassword;
        errorMessagePassword.setText("password or answer fields do not match");
        errorMessagePassword.exec();

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
            signUpQuery.prepare("INSERT INTO `players`(`player_id`, `firstName`, `lastName`, `userName`, `password`, `score`, `playersWin`, `playersLose`, `question`, `answer`) VALUES ([value-1],[value-2],[value-3],[value-4],[value-5],[value-6],[value-7],[value-8],[value-9],[value-10])");
            signUpQuery.bindValue(0,"0");
            signUpQuery.bindValue(1,firstName);
            signUpQuery.bindValue(2,lastName);
            signUpQuery.bindValue(3,userName);
            signUpQuery.bindValue(4,password);
            signUpQuery.bindValue(5,"0");
            signUpQuery.bindValue(6,"0");
            signUpQuery.bindValue(7,"0");
            signUpQuery.bindValue(8,question);
            signUpQuery.bindValue(9,answer);

            //now after binding the sql

            int result=0;
            while (signUpQuery.exec())
            {
                result++;
            }
            if(result== 1)
                qDebug() << "Successfully register, sign in now!";
            else if (result > 1)
                qDebug() << "username or password is not matching";
            else
                qDebug() << "username or password is not matching";

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

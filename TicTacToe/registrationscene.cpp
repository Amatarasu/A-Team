#include "allheadertoinclude.h"
#include "ui_registrationscene.h"

registrationScene::registrationScene(QWidget *parent): QDialog(parent), ui(new Ui::registrationScene)
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

    //strings to input all the necsearry fields
    QString userName, password, firstName, lastName, question, answer, password2, answer2;
    userName = ui->userNameInput->text();
    password = ui->passwordInput->text();
    firstName = ui->firstNameInput->text();
    lastName = ui->lastNameInput->text();
    password2 = ui->confirmPasswordInput->text();
    answer =  ui->answerInput->text();
    answer2 =  ui->answerInput->text();
    question = ui->questionInput->text();
    User u(userName, password, firstName, lastName, question, answer);
    qDebug() << "constructed";
    u.save();

    bool okay = db.open(); //opens the database



    //checking to see if inputted passwords match
    int x=QString :: compare(password,password2, Qt :: CaseInsensitive);
    if(x!=0)
    {
        //answers don't match

        QMessageBox errorMessagePassword;
        errorMessagePassword.setText("Password fields do not match1");
        errorMessagePassword.exec();
        return;

    }

    //checks to see if security answers are the same
    int y=QString :: compare(answer,answer2, Qt :: CaseInsensitive);
    if(y!=0)
    {
        //answers don't match
        QMessageBox errorMessagePassword;
        errorMessagePassword.setText("Answer fields do not match!");
        errorMessagePassword.exec();
        return;

    }
    else
    {
        //all fields are correct, and will be inputted into the database

        if (!okay)
        {

            //reporting that there is an error connecting on the database

            QMessageBox :: critical(this,"Error",db.lastError().text());
            return;
        }
        else
        {
            //inputting information into database
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
                //successful sign in
                QMessageBox completedQuery;
                completedQuery.setText("Thank you for signing in.  Now login and have fun!");
                completedQuery.exec();
                close();

            }
            else
            {
                //error handling in inputting information into the database
                QMessageBox completeError;
                completeError.setText("possible unmatch fields.  Please check");
                completeError.exec();
            }

        }

        db.close(); //close database
    }
}

void registrationScene::on_registrationHelpButton_clicked()
{
    //help button
    QMessageBox helpRegister;
    helpRegister.setText("Enter a valid username and password, confrim password and submit to register");
    helpRegister.exec();
}

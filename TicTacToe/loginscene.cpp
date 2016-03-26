#include "loginscene.h"
#include "ui_loginscene.h"
#include "gamemode.h"
#include "gameboard.h"
#include <QMessageBox>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDebug>

loginScene::loginScene(QWidget *parent) : QDialog(parent), ui(new Ui::loginScene)
{
    ui->setupUi(this);
}

loginScene::~loginScene()
{
    delete ui;
}


void loginScene::on_HelpLogin_clicked()
{
    //help button
    QMessageBox answer;
    answer.setText("Enter username and password click login or click cancel to go back"); //message
    answer.exec();
}

void loginScene::on_loggingIn_clicked()
{
    //queries database for exsisting user

    //string variables for username and password
    QString userName, password;
    userName = ui->loginUsername->text();
    password = ui->loginPassword->text();


    //connection to database functions
    QSqlDatabase db = QSqlDatabase :: addDatabase("QMYSQL"); //driver of database
    db.setHostName("localhost");
    db.setDatabaseName("tictactoe");
    db.setUserName("root");
    db.setPassword("Amatarasu76");
    db.setPort(3306);
    bool connectionAttemps = db.open();


    if(!connectionAttemps)
    {
        //failure to connect to database
        QMessageBox errorMessage;
        errorMessage.setText("failed to load");
        errorMessage.exec();
        return;
    }
    else
    {
        //sucessful connection


        //checking if user exsists in database
        QSqlQuery myQuery;
        myQuery.prepare("SELECT `userName`, `password` FROM `players` WHERE userName = ?"); //searching for user
        myQuery.bindValue(0,userName);
        myQuery.exec();

        //string for username and password in the user database
        QString realUsername, realPassword;

        if(myQuery.next())
        {

            realUsername = myQuery.value(0).toString();
            realPassword = myQuery.value(1).toString();
        }

        //now comparing inputted username and password with database entries

        int x=QString :: compare(realUsername,userName); //comparing username
        int y=QString :: compare(password,realPassword); //comparing password

        //if username or password do not match in database entries
        if(x!=0 || y!=0)
        {
            //display error message
            QMessageBox errormessage;
            errormessage.setText("Wrong Username or Password");
            errormessage.exec();
        }
        else
        {
            //if inputted information is correct

            QMessageBox welcomeMessage;
            welcomeMessage.setText("Welcome "+userName); //greting for user
            welcomeMessage.exec();

            //username will appear in gameboard once game has started
            gameBoard * settingUsername = new gameBoard ();
            settingUsername->setUsername(realUsername);

            //will now open the choose gamemode option
            gameMode * choosingGameMode = new gameMode ();
            choosingGameMode->exec();
            close();

        }
    }

     db.close(); //close the databaase
}

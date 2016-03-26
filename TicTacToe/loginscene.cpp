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

loginScene::loginScene(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginScene)
{
    ui->setupUi(this);
}

void loginScene::updatingUserScore(QString username, int newPlayerScore)
{
    //this function will only update the user score

    QSqlDatabase connection = QSqlDatabase :: addDatabase("QMYSQL");
    connection.setHostName("localhost");
    connection.setDatabaseName("tictactoe");
    connection.setUserName("root");
    connection.setPassword("Amatarasu76");
    connection.setPort(3306);
    bool connected = connection.open();
    if(!connected)
    {
        QMessageBox failedConnection;
        failedConnection.setText("Could not connect to database");
        failedConnection.exec();
    }
    else
    {
        //from here, we knwo that we have connected
        //next is to update the score, no need for extra process
        //these process would be query the database for info
        //simply need to update

        int newPlayerWin, newPlayerLost;
        newPlayerLost=0, newPlayerWin=0;
        QSqlQuery updatingScore;
        updatingScore.prepare("UPDATE `players` SET `userName`=?,`score`=?,`playersWin`=?,`playersLose`=? WHERE 1");
        updatingScore.bindValue(0,username);
        updatingScore.bindValue(1,newPlayerScore);
        updatingScore.bindValue(2,newPlayerWin);
        updatingScore.bindValue(3,newPlayerLost);

        //reminder that i am going to update these later on as the game progress

        bool updatingDatabase = updatingScore.exec();
        if(!updatingDatabase)
        {
            QMessageBox failedToUpdate;
            failedToUpdate.setText("failed to update the score");
            failedToUpdate.exec();
        }
        else
        {
            QMessageBox successfullUpdate;
            successfullUpdate.setText("Successfully updated the score for Player: "+username);
            successfullUpdate.exec();
            connection.close();
        }
    }
}

loginScene::~loginScene()
{
    delete ui;
}


void loginScene::on_HelpLogin_clicked()
{
    //this will show you how to login or quit the login screen

    QMessageBox answer;
    answer.setText("Enter username and password click login or click cancel to go back");
    answer.exec();
}

void loginScene::on_loggingIn_clicked()
{
    //this is going to query the database to check if the user exist or no.

    QString userName, password;
    userName = ui->loginUsername->text();
    password = ui->loginPassword->text();
    QSqlDatabase db = QSqlDatabase :: addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("tictactoe");
    db.setUserName("root");
    db.setPassword("Amatarasu76");
    db.setPort(3306);
    bool connectionAttemps = db.open();
    if(!connectionAttemps)
    {
        //meaning connection could not be made.
        QMessageBox errorMessage;
        errorMessage.setText("failed to load");
        errorMessage.exec();
        return;
    }
    else
    {
        //successful connection, time to check if user exist;

        QSqlQuery myQuery;
        myQuery.prepare("SELECT `userName`, `password` FROM `players` WHERE userName = ?");
        myQuery.bindValue(0,userName);
        myQuery.exec();
        //int counter=0;
        QString realUsername, realPassword;
        if(myQuery.next())
        {

            realUsername = myQuery.value(0).toString();
            realPassword = myQuery.value(1).toString();
        }

        //now comparing

        int x=QString :: compare(realUsername,userName);
        int y=QString :: compare(password,realPassword);
        if(x!=0 || y!=0)
        {
            QMessageBox errormessage;
            errormessage.setText("Wrong Username or Password");
            errormessage.exec();
        }
        else
        {
            QMessageBox welcomeMessage;
            welcomeMessage.setText("Welcome "+userName);
            welcomeMessage.exec();

            //after showing the message

            gameBoard * settingUsername = new gameBoard ();
            settingUsername->setUsername(realUsername);
            gameMode * choosingGameMode = new gameMode ();
            choosingGameMode->exec();
            close();

        }
    }

     db.close();
}

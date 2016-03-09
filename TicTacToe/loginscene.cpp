#include "loginscene.h"
#include "ui_loginscene.h"
#include <qmessagebox.h>
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
    password = ui->loginUsername->text();
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
        while(myQuery.next())
        {

            realUsername = myQuery.value(0).toString();
            realPassword = myQuery.value(0).toString();
        }

        //now comparing

        int x=QString :: compare(realUsername,userName, Qt :: CaseInsensitive), y=QString :: compare(password,realPassword, Qt :: CaseInsensitive);
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
        }
    }

    db.close();

}
